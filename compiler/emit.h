#include "ast.h"
#ifndef EMIT_H
#define EMIT_H

void emit_ast(ASTNode *p, FILE *fp);
void emit(char *fp, char *command, char *options, char *main, char *input, char *output);
void emit_make(ASTNode *p, FILE *fp);
void emit_show(ASTNode *p, FILE *fp);
void emit_goto(ASTNode *p, FILE *fp);
void emit_where(ASTNode *p, FILE *fp);
void emit_match(ASTNode *p, FILE *fp);
void emit_uniques(ASTNode *p, FILE *fp);
void emit_read(ASTNode *p, FILE *fp);
void emit_out(ASTNode *p, FILE *fp);
void emit_run(ASTNode *p, FILE *fp);
void emit_count(ASTNode *p, FILE *fp);
void emit_take(ASTNode *p, FILE *fp);
void emit_rename(ASTNode *p, FILE *fp);
void emit_remove(ASTNode *p, FILE *fp);

#endif
