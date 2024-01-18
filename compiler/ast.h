#include <stdlib.h>
#include<stdio.h>

#ifndef AST_H
#define AST_H
extern int verbose;

enum ASTtype {
	A_COMMAND_LIST,
	A_SHOW_OPT,
	A_SHOW_ARG,
	A_MAKE,
	A_SHOW,
	A_GOTO,
	A_WHERE,
	A_MATCH,
	A_UNIQUES,
	A_READ,
	A_EVALUATE,
	A_OPEN,
	A_OUTPUT,
	A_RUN,
	A_COUNT,
	A_TAKE,
	A_RENAME,
	A_REMOVE,
	A_LOC,
	A_FIND,
	A_GREP,
	A_GLOC,
	A_MATCH_OPT,
	A_UNIQ,
	A_UNIQ_OPT,
	A_BC,
	A_OLOC,
	A_OUT,
	A_COPT,
	A_DEST



};

typedef struct ASTNodeType{
	enum ASTtype nodetype;
	char * name;
	char * type;
	char *  value;
//	char * arg1;
//	char * arg2;
//	char * arg3;
	struct ASTNodeType *s1, *s2;
	}ASTNode;

ASTNode *ASTCreateNode(enum ASTtype t);

ASTNode *program;
#endif
