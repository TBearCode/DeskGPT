#Bash Compiler


all: compiler

compiler: comp.l comp.y ast.c ast.h emit.c emit.h
	lex comp.l
	yacc -d comp.y
	gcc ast.c emit.c lex.yy.c y.tab.c -o compiler
clean:
	rm compiler

