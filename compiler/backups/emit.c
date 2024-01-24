#include "emit.h"
#include <string.h>
#include <stdio.h>

void emit_ast(ASTNode *p, FILE *fp){
	fprintf(stderr,"EMITTING %d",p->nodetype);
	switch(p->nodetype){
		case A_COMMAND_LIST: 
			emit_ast(p->s1,fp);
			emit_ast(p->s2,fp);
			break;
		case A_MAKE:
			emit_make(p,fp);
			break;
		case A_SHOW:
			emit_show(p,fp);
			break;
		case A_GOTO:
			emit_goto(p,fp);
			break;
		case A_FIND:
			emit_where(p,fp);
			break;
		case A_GREP:
			emit_match(p,fp);
			break;
		case A_UNIQ:
			emit_uniques(p,fp);
			break;
		case A_BC:
			emit_bc(p,fp);
			break;
		case A_OLOC:
			emit_open(p,fp);
			break;
		case A_READ:
			emit_read(p,fp);
			break;
		case A_OUT:
			emit_out(p,fp);
			break;
		case A_DEST: 
			emit_out(p,fp);
			emit(fp,"cat stack.txt", "", ">>","", p->name);
			break;
		case A_RUN:
			emit_run(p,fp);
			break;
		case A_COUNT:
			emit_count(p,fp);
			break;
		case A_TAKE:
			emit_take(p,fp);
			break;
		case A_RENAME:
			emit_rename(p,fp);
			break;
		case A_REMOVE:
			emit_remove(p,fp);
			break;
		default:
			printf("Invalid syntax\n");
			exit(1);
			break;
		}
	}
void emit(FILE *fp, char *command, char *options, char *main, char *input, char *output){
	if (strcmp("",options)==0) {
			fprintf(fp, "%s %s %s %s \n", command, main,input,output);
			fflush(fp);		
	}
	else {
			fprintf(fp, "%s -%s %s %s %s  \n", command, options, main, input, output);
			fflush(fp);
		}
}
void emit_make(ASTNode *p, FILE *fp){
	if (strcmp("f",p->type)==0) emit(fp,"touch","",p->name,"","");
	else emit(fp,"mkdir","",p->name,"","");
}

void emit_show(ASTNode *p, FILE *fp){
	char *opts = "";
	if(p->s1 != NULL){
		ASTNode *current = p->s1;
		while (current!=NULL){
			strcat(opts,current->name);
			current=current->s1;
		}
	}
	if(p->s2 != NULL){
		ASTNode *current = p->s2;
		while(current != NULL){
			strcat(opts,current->name);
			current=current->s1;
		}
	}
	emit(fp, "ls", opts, "","","> stack.txt");
	emit(fp,"cat","","","stack.txt","");
}

void emit_goto(ASTNode *p, FILE *fp){
	emit(fp, "cd","",p->s1->name,"","");
}

void emit_where(ASTNode *p, FILE *fp){
	if (strcmp("me",p->name)==0) emit(fp, "pwd", "","",""," > stack.txt");
	else{ emit(fp,"cd","","","~","");
	if (strcmp("f",p->type)==0) emit(fp, "find", "type f", "-iname", p->name," > DeskGPT/compiler/stack.txt");
	else if (strcmp("d",p->type)==0) emit(fp, "find", "type d", "-iname", p->name," > DeskGPT/compiler/stack.txt");
	else if (strcmp("last",p->type)==0) emit(fp, "cat stack.txt","",p->name, " -iname"," > DeskGPT/compiler/stack.txt"); 
	else emit(fp, "find", "iname", "", p->name," DeskGPT/compiler/> stack.txt");
	emit(fp,"cd","","","-","");
	emit(fp,"cat","","","stack.txt","");

	}
}

void emit_match(ASTNode *p, FILE *fp){
	char *opts = "";
	if(p->s2 != NULL){
		ASTNode *current = p->s2;
		while(current != NULL){
			strcat(opts,current->name);
			current=current->s1;
			}
        }
	char *loc = "";
	if (p->s1 != NULL){
		loc = p->s1->name;
	}
	char gopts[100] = "";
	sprintf(gopts, "grep -%s %s", opts,p->s1);
	if (strcmp("last",p->s2->type)==0) emit(fp,"cat stack.txt", "", loc, gopts, " > stack.txt");
	else emit(fp, "grep", opts, p->name,loc," > stack.txt");
	emit(fp,"cat","","","stack.txt","");
}

void emit_uniques(ASTNode *p, FILE *fp){
	char *opts = "";
	if(p->s1 != NULL){
		ASTNode *current = p->s1;
		while(current != NULL){
			strcat(opts,current->name);
			current=current->s1;
			}
        }
	char uopts[100];
	sprintf(uopts,"uniq -%s ",opts);
	if(strcmp("last", p->type)==0) emit(fp,"cat stack.txt", "", p->name,uopts,"> stack.txt");
	else emit(fp,"uniq",opts,"",p->name,"> stack.txt");
	emit(fp,"cat","","","stack.txt","");
}

void emit_read(ASTNode *p, FILE *fp){
	if (strcmp("last",p->type)==0) emit(fp, "cat stack.txt", "",p->name,"less","");
	else emit(fp, "less","","",p->name,"");
}

void emit_bc(ASTNode *p, FILE *fp){
	emit(fp,"bc","","<<<",p->name,"> stack.txt");
	emit(fp,"cat","","","stack.txt","");
}

void emit_open(ASTNode *p, FILE *fp){
	if (strcmp("last",p->type)==0) emit(fp, "cat stack.txt", "", p->name, "vim","");
	else emit(fp, "vim", "", "", p->name, "");
}

void emit_out(ASTNode *p, FILE *fp){
	if (p->s1!=NULL){
		if(strcmp("",p->type)!=0) emit(fp, "cat stack.txt","n",p->name, "cat > ",p->s1->name);
		else emit(fp,"cat","n",p->name,">",p->s1->name);
	}
	else{
		if(strcmp("",p->type)!=0) emit(fp, "cat stack.txt","n",p->name, "cat","");
		else emit(fp,"cat","",p->name,"","> stack.txt"); 
		fprintf(stderr,"%s\n",p->name);
		emit(fp,"cat","","","stack.txt","");
	}
}

void emit_run(ASTNode *p, FILE *fp){
	int index = 0;
	char *ext = NULL;
	if (ext != NULL) {
		if(strcmp("py",ext)==0) emit(fp,"python3","",p->name,"","");
		if(strcmp("java",ext)==0) emit(fp,"java","",p->name,"","");
		if(strcmp("sh",ext)==0) emit(fp,"bash","",p->name,"","");
		if(strcmp("c",ext)==0){
			emit(fp,"gcc -o executable","",p->name,"","");
			emit(fp,"/executable","","","","");
			}
		else printf("Filetype not recognized");
	}
	else{
		emit(fp,"./","",p->name,"","");
	}

}
void emit_count(ASTNode *p, FILE *fp){
	char *opts = ""; // This block of code is reused several times, might want to make it its own function
	if(p->s1 != NULL){
		ASTNode *current = p->s1;
		while(current != NULL){
			strcat(opts,current->name);
			current=current->s1; }
        }
	char copts[100];
	sprintf(copts,"wc -%s",opts);
	if(strcmp("",p->type)!=0) emit(fp,"cat stack.txt","",p->name,copts,"> stack.txt");
	else emit(fp,"wc",opts,p->name,"","> stack.txt");
	emit(fp,"cat","","","stack.txt","");
}

void emit_take(ASTNode *p, FILE *fp){
	char topt[100];
	char *targ = "f";
	if (strcmp("c",p->name)==0) targ = "c";
	if (strcmp("c",targ)==0) sprintf(topt,"cut -c %d", p->value);
	else sprintf(topt,"cut -f %d -d %s",p->value, (strcmp("w",p->name)==0)? "\" \"" : p->name);
	if(strcmp("",p->s1->type)!=0) emit(fp, "cat stack.txt", "", p->name,topt,"> stack.txt");
	else emit(fp,topt,"",p->s1->name,"","> stack.txt");
	emit(fp,"cat","","","stack.txt","");
}
void emit_rename(ASTNode *p, FILE *fp){
	emit(fp,"echo","","If a file exists with this name, it will be replaced. Proceed?","","y/n");
	emit(fp,"read","","input","","");
	emit(fp,"if test $input = \"y\"","","\nthen\nmv",p->name,"");
	emit(fp,"else\n","","echo \"Action cancelled\"","","");
	emit(fp,"fi","","","","");
}
void emit_remove(ASTNode *p, FILE *fp){
	emit(fp,"echo","","Are you sure you want to delete this?","","y/n");
	emit(fp,"read","","input","","");
	emit(fp,"if test $input = \"y\"","","\nthen\n",(strcmp("f",p->type)==0)? "rm" : "rm -r",p->name);
	emit(fp,"else\n","","echo \"Action cancelled\"","","");
	emit(fp,"fi","","","","");
}

