#include "emit.h"
#include <string.h>
#include <stdio.h>
extern int cl;

void emit_ast(ASTNode *p, FILE *fp){
	if(p==NULL) return;
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
		case A_CLEAR:
			emit(fp,"clear","","","","");
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
		case A_REPLACE:
			emit_replace(p,fp);
			break;
		case A_SORT:
			emit_sort(p,fp);
			break;
		default:
			fprintf(stderr,"Invalid syntax\n");
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
	fflush(fp);
}
void emit_make(ASTNode *p, FILE *fp){
	if (strcmp("f",p->type)==0) emit(fp,"touch","",p->name,"","");
	else emit(fp,"mkdir","",p->name,"","");
}

void emit_show(ASTNode *p, FILE *fp){
	char *opts;
	opts=malloc(32);
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
	if(!cl)emit(fp,"cat","","","stack.txt","");
}

void emit_goto(ASTNode *p, FILE *fp){
	emit(fp, "cd","",p->s1->name,"","");
}

void emit_where(ASTNode *p, FILE *fp){
	if (strcmp("me",p->name)==0) emit(fp, "pwd", "","",""," > stack.txt; cat stack.txt");
	else{ emit(fp,"cd","","","~","");
	if (!p->type) emit(fp, "find", "iname", "", p->name," >DeskGPT/stack.txt");
	else if (strcmp("f",p->type)==0) emit(fp, "find", "type f", "-iname", p->name," > DeskGPT/stack.txt");
	else if (strcmp("d",p->type)==0) emit(fp, "find", "type d", "-iname", p->name," > DeskGPT/stack.txt");
	else emit(fp, "cat stack.txt","",p->name, " -iname",(cl==0)?" > DeskGPT/stack.txt":""); 
	emit(fp,"cd","","","-","");
	if(!cl) emit(fp,"cat","","","~/DeskGPT/stack.txt","");

	}
}

void emit_match(ASTNode *p, FILE *fp){
	char *opts;
	opts =  malloc(32);
	if(p->s2 != NULL){
		ASTNode *current = p->s2;
		while(current != NULL){
			strcat(opts,current->name);
			current=current->s1;
			}
        }
	char *loc = "";
	char *type;
	type = malloc(16);
	if (p->s1 != NULL){
		loc = p->s1->name;
		if(p->s1->type!=NULL) snprintf(type,16,"%s",p->s1->type);
	}
	char *gopts;
	gopts=malloc(32);
	snprintf(gopts,32, "grep -%s %s", opts,p->s1);

	if (p->s1 && strcmp("l",type)==0){
		emit(fp,"cat stack.txt", "", loc, gopts, " > stack.txt");
		
	}
	else {
		emit(fp, "grep", opts, p->name,loc," > stack.txt");
	}
	if(!cl) emit(fp,"cat","","","stack.txt","");
}

void emit_uniques(ASTNode *p, FILE *fp){
	char *opts;
	opts=malloc(32);
	snprintf(opts,32,"");
	if(p->s1 != NULL){
		ASTNode *current = p->s1;
		while(current != NULL){
			strcat(opts,current->name);
			current=current->s1;
			}
        }
	char *uopts;
	uopts=malloc(32);
	snprintf(uopts,32,"uniq -%s ",opts);
	if(p->type != NULL && strcmp("l", p->type)==0) emit(fp,"cat stack.txt", "", p->name,uopts,"> stack.txt");
	else emit(fp,"uniq",opts,"",p->name,(!cl)?"> stack.txt":"");
	if(!cl) emit(fp,"cat","","","stack.txt","");
}

void emit_read(ASTNode *p, FILE *fp){
	if (!cl){
	       	emit(fp,"echo","When in read mode you will have to press q when done reading to quit. Press ENTER to acknowledge.","","","");
		emit(fp,"read input","","","","");
	}
	if (p->type != NULL && strcmp("l",p->type)==0) emit(fp, "cat stack.txt", "",p->name,"less","");
	else emit(fp, "less","","",p->name,"");
}

void emit_bc(ASTNode *p, FILE *fp){
	emit(fp,"bc","","<<<",p->name,"> stack.txt");
	emit(fp,"cat","","","stack.txt","");
}

void emit_open(ASTNode *p, FILE *fp){
	if (p->type != NULL && strcmp("l",p->type)==0) emit(fp, "cat stack.txt", "", p->name, "vim","");
	else emit(fp, "vim", "", "", p->name, "");
}

void emit_out(ASTNode *p, FILE *fp){
	if (p->s1!=NULL){
		if (p->type != NULL && strcmp("",p->type)!=0) emit(fp, "cat stack.txt","",p->name, "cat > ",p->s1->name);
		else emit(fp,"cat","",p->name,">",p->s1->name);
	}
	else{
		if(p->type !=NULL && strcmp("",p->type)!=0) emit(fp, "cat stack.txt","",p->name, "cat","");
		else emit(fp,"cat","",p->name,"",(!cl)?"> stack.txt":""); 
		if (!cl) emit(fp,"cat","","","stack.txt","");
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
	char *opts;
	opts=malloc(32);
	if(p->s1 != NULL){
		ASTNode *current = p->s1;
		while(current != NULL){
			strcat(opts,current->name);
			current=current->s1; }
        }
	char *copts;
	copts=malloc(32);
	snprintf(copts,32,"wc -%s",opts);
	if(p->type !=NULL && strcmp("",p->type)!=0) emit(fp,"cat stack.txt","",p->name,copts,"> stack.txt");
	else emit(fp,"wc",opts,p->name,"",(!cl)?"> stack.txt":"");
	if (!cl) emit(fp,"cat","","","stack.txt","");
}

void emit_take(ASTNode *p, FILE *fp){
	char *topt;
	topt=malloc(64);
	char *targ;
        targ = malloc(16);
	targ= "f";
	if (strcmp("c",p->name)==0) targ = "c";
	if (strcmp("c",targ)==0) snprintf(topt,64,"cut -c %d", p->value);
	else snprintf(topt,64,"cut -f %s -d %s",p->value, (strcmp("w",p->name)==0)? "\" \"" : p->name);
	if(p->s1->type != NULL && strcmp("",p->s1->type)!=0) emit(fp, "cat stack.txt", "", p->name,topt,"> stack.txt");
	else emit(fp,topt,"",p->s1->name,"",(!cl)? "> stack.txt":"");
	if(!cl) emit(fp,"cat","","","stack.txt","");
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
	emit(fp,"if test $input = \"y\"","","\nthen\n",(p->type != NULL && strcmp("f",p->type)==0)? "rm" : "rm -r",p->name);
	emit(fp,"else\n","","echo \"Action cancelled\"","","");
	emit(fp,"fi","","","","");
}
void emit_replace(ASTNode *p, FILE *fp){
	char *output;
	output = malloc(100);
	snprintf(output,100,"s/%s/%s/g %s",p->s1->name,p->s1->value,p->name);
	emit(fp,"sed -i.bak","",output,"","");
	emit(fp,"echo","","A backup file has been created and all occurrences of ",p->s1->name," have been replaced in original file.");


}
void emit_sort(ASTNode *p, FILE *fp){
	char *opts;
	opts=malloc(16);
	if(p->s1 != NULL){
		ASTNode *current = p->s1;
		while (current!=NULL){
			strcat(opts,current->name);
			current=current->s1;
		}
	}
	char*sopts;
	sopts = malloc(32);
	snprintf(sopts,32,"sort -%s",opts);
	if(p->type!=NULL){
		emit(fp,"cat stack.txt","",p->name,sopts,(!cl)?">stack1.txt":"");
		emit(fp,"cat stack1.txt > stack.txt;","","rm stack1.txt","","");
	}
	else emit(fp, "sort",opts, p->name,"", (!cl)?">stack.txt":"");
	if(!cl) emit(fp,"cat","","stack.txt","","");

}
