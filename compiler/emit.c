#include "emit.h"
#include <string.h>


void emit_ast(ASTNode *p, FILE *fp){
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
			printf("Invalid syntax");
			exit(1);
			break;
		}
	}
void emit(FILE *fp, char *command, char *options, char *main, char *input, char *output){
	if (strcmp("",options)==0) {
			fprintf(fp, "%s %s %s %s %s > stack.txt", command, main, input, output,pipe);
			
	}
	else {
			fprintf(fp, "%s -%s %s %s %s %s > stack.txt", command, options, main, input, output, pipe);
		}
}
void emit_make(ASTNode *p, FILE *fp){
	if (strcmp("f",p->type)==0) emit(fp,"touch","",p->name,"","");
	else emit(fp,"mkdir","",p->name,"","");
}

void emit_show(ASTNode *p, FILE *fp){
	char *opts = "";
	if(p->s1 != NULL){
		current = p->s1;
		while (current!=NULL){
			strcat(opts,current->name);
			current=current->s1;
		}
	}
	if(p->s2 != NULL){
		current = p->s2;
		while(current != NULL){
			strcat(opts,current->name);
			current=current->s1;
		}
	}
	emit(fp, "ls", opts, "","","");
}

void emit_goto(ASTNode *p, FILE *fp){
	emit(fp, "cd","",p->s1->name,"","");
}

void emit_where(ASTNode *p, FILE *fp){
	if (strcmp("me",p->name)==0) emit(fp, "pwd", "","","","");
	emit(fp,"cd","","","~","");
	else if (strcmp("f",p->type)==0) emit(fp, "find", "type f", "-iname", p->name,"");
	else if (strcmp("d",p->type)==0) emit(fp, "find", "type d", "-iname", p->name,"");
	else if (strcmp("last",p->type)==0) emit(fp, "cat stack.txt","",p->name, " -iname",""); 
	else emit(fp, "find", "iname", "", p->name,"");
	emit(fp,"cd","","","-","");
}


void emit_match(ASTNode *p, FILE *fp){
	char *opts = "";
	if(p->s2 != NULL){
		current = p->s2;
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
	if (strcmp("last",p->s2->type)==0) emit(fp,"cat stack.txt", "", loc, gopts, "");
	else emit(fp, "grep", opts, p->name,loc,"");
}

void emit_uniques(ASTNode *p, FILE *fp){
	char *opts = "";
	if(p->s1 != NULL){
		current = p->s1;
		while(current != NULL){
			strcat(opts,current->name);
			current=current->s1;
			}
        }
	char uopts[100];
	sprintf(uopts,"uniq -%s ",opts);
	if(strcmp("last", p->type)==0) emit(fp,"cat stack.txt", "", p->name,uopts,"");
	else emit(fp,uniq,opts,"",p->name,"");
}

void emit_read(ASTNode *p, FILE *fp){
	if (strcmp("last",p->type)==0) emit(fp, "cat stack.txt", "",p->name,"less","");
	else emit(fp, "less","","",p->name,"");
}

void emit_bc(ASTNode *p, FILE *fp){
	emit(fp,"bc","","<<<",p->name,"");
}

void emit_open(ASTNode *p, FILE *fp){
	if (strcmp("last",p->type)==0) emit(fp, "cat stack.txt", "", p->name, "vim","");
	else emit(fp, "vim", "", "", p->name, "");
}

void 
