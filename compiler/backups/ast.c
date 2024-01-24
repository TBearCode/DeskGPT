#include "ast.h"

ASTNode *ASTCreateNode(enum ASTtype t){
	ASTNode *p;
	if(verbose) fprintf(stderr, "Creating AST Node %d\n",t);
	p = (ASTNode *)malloc(sizeof(ASTNode));
	p->nodetype=t;
	p->s1=NULL;
	p->s2=NULL;
	p->name=NULL;
	p->value = NULL;
	return(p);
}

