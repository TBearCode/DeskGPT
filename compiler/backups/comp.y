%{
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "emit.h"
#include "ast.h"

extern int line_no;
extern int token_no;

int yylex();


void  yyerror (s)
	char *s;
{
	printf("%s at line no : %d token no: %d \n",s,line_no,token_no);
}


%}

%start Program

%union {
	char * string;
	ASTNode * node;
	}

%token <string> T_IN T_NUM
%token T_MAKE T_SHOW T_CD T_FIND T_GREP T_UNIQ T_CAT T_LESS T_CALC T_REDIRECT T_BY T_ABOVE T_PREV T_ROOT T_TIME T_ME T_OPEN T_ECHO T_BASH T_WC T_L T_CUT T_THROUGH T_RENAME T_RM T_C T_M T_W T_REV T_ALL T_LONG T_FILE T_FOLDER T_LOC T_FROM T_SEP T_LAST T_QUIET T_IGNORE T_RECURSE T_U T_AND T_WHITE T_COUNT T_REMOVE T_TAKE T_OUTPUT T_LAST_FILE T_ELEM 

%type <node> CommandList Command Make Show Goto Where Match Uniques Read Evaluate Open Output Run Count Take Rename Remove WSubject CSubject RSubject ShowOpts ShowArgs ShowOpt ShowArg Location COpt OutArg MatchOpts GLoc MatchOpt ULoc UniqueOpts UniqueOpt ReadLoc OpenLoc TOpts TOpt TArg COpts

%%

Program : CommandList
	{
	program = $1;}
	;

CommandList :Command CommandList
	     { printf("Command List Node");$$ = ASTCreateNode(A_COMMAND_LIST);
	      $$->s1 = $1;
	      $$->s2 = $2;}
	    |Command { printf("Final Command Node");$$=ASTCreateNode(A_COMMAND_LIST); $$->s1=$1;}
	    ;

Command : Make { $$ = $1; }
	| Show{ $$ = $1; }
	| Goto{ $$ = $1; }
	| Where{ $$ = $1; }
	| Match{ $$ = $1; }
	| Uniques{ $$ = $1; }
	| Read{ $$ = $1; }
	| Evaluate { $$ = $1; }
	| Open{ $$ = $1; }
	| Output{ $$ = $1; }
	| Run{ $$ = $1; }
	| Count{ $$ = $1; }
	| Take { $$ = $1; }
	| Rename{ $$ = $1; }
	| Remove{ $$ = $1; }
//	| Replace{ $$ = $1; } //not implemented
	;

Make : T_MAKE T_FILE T_IN { printf("NEW NODE");$$ = ASTCreateNode(A_MAKE); printf("Setting Name");$$->name = $3; $$->type = "f"; printf("Make node");}
     | T_MAKE T_FOLDER T_IN { printf("NEW NODE");$$ = ASTCreateNode(A_MAKE); $$->name = $3; $$->type = "d"; }
     ;

Show : T_SHOW { $$ = ASTCreateNode(A_SHOW); }
     | T_SHOW T_BY ShowOpts {$$ = ASTCreateNode(A_SHOW); $$->s2 = $3;}
     | T_SHOW ShowArgs {$$ = ASTCreateNode(A_SHOW); $$->s1 = $2;}
     | T_SHOW ShowArgs T_BY ShowOpts {$$ = ASTCreateNode(A_SHOW); $$->s1 = $2; $$->s2 = $4; }
     ;

ShowArgs : ShowArg {$$ = $1;}
	 | ShowArg "," ShowArgs {$$=$1; $$->s1 = $3;}
	 ;

ShowArg : T_ALL { $$ = ASTCreateNode(A_SHOW_ARG); $$->name = "a";}
	| T_LONG { $$ = ASTCreateNode(A_SHOW_ARG); $$->name = "l";}
	;

ShowOpts : ShowOpt
		{ $$ = $1;}
	 | ShowOpt "," ShowOpts
	 	{ $$ = $1; $$->s1 = $3;}
	 ;

ShowOpt : T_NUM {$$ = ASTCreateNode(A_SHOW_OPT); $$->name = "v";}
	| T_TIME {$$ = ASTCreateNode(A_SHOW_OPT); $$->name = "t";}
	| T_REV {$$ = ASTCreateNode(A_SHOW_OPT); $$->name = "r";}
	;

Goto : T_CD Location {$$ = ASTCreateNode(A_GOTO); $$->s1 = $2;}
     ;

Location : T_ROOT {$$ = ASTCreateNode(A_LOC); $$->name = "~";}
	 | T_ABOVE {$$ = ASTCreateNode(A_LOC); $$->name = "..";}
	 | T_PREV{$$ = ASTCreateNode(A_LOC); $$->name = "-";}
	 | T_IN{$$ = ASTCreateNode(A_LOC); $$->name = $1;}
	 ;

Where : T_FIND WSubject {$$ = $2;}
      ;

WSubject : T_FILE T_IN {$$ = ASTCreateNode(A_FIND); $$->type = "f"; $$->name = $2;}
	| T_FOLDER T_IN {$$ = ASTCreateNode(A_FIND); $$->type = "d"; $$->name = $2;}
	| T_ME {$$ = ASTCreateNode(A_FIND); $$->name = "me";}
	| T_IN {$$ = ASTCreateNode(A_FIND); $$->name = $1;}
	| T_LAST {$$ = ASTCreateNode(A_FIND); $$-> type = "last"; $$->name = " | xargs -n 1 ";}
	;

Match : T_GREP T_IN "-" MatchOpts {$$ = ASTCreateNode(A_GREP); $$->name = $2; $$->s2 = $4; }
      | T_GREP T_IN T_LOC GLoc "-" MatchOpts {$$ = ASTCreateNode(A_GREP); $$->name = $2; $$->s1 = $4; $$->s2 = $6;}
      | T_GREP T_IN  {$$ = ASTCreateNode(A_GREP); $$->name = $2;}
      | T_GREP T_IN T_LOC GLoc {$$ = ASTCreateNode(A_GREP); $$->name = $2; $$->s1 = $4;}
      ;

GLoc : T_IN {$$ = ASTCreateNode(A_GLOC); $$->name = $1;}
     | T_LAST_FILE {$$ = ASTCreateNode(A_GLOC); $$->type = "last" ;$$->name = " | xargs -n 1 "; }
     | T_ALL {$$ = ASTCreateNode(A_GLOC); $$->name = "*"; }
     ;

MatchOpts : MatchOpt {$$ = $1;}
	  | MatchOpt "," MatchOpts {$$ = $1; $$->s1 = $3;}
	  ;

MatchOpt : T_WC {$$ = ASTCreateNode(A_MATCH_OPT); $$->name = "c";}
	 | T_FILE {$$ = ASTCreateNode(A_MATCH_OPT); $$->name = "l";}
	 | T_QUIET{$$ = ASTCreateNode(A_MATCH_OPT); $$->name = "q";}
	 | T_IGNORE{$$ = ASTCreateNode(A_MATCH_OPT); $$->name = "i";}
	 | T_RECURSE{$$ = ASTCreateNode(A_MATCH_OPT); $$->name = "r";}
	 ;

Uniques : T_UNIQ T_LOC ULoc "-" UniqueOpts {$$ = $3; $$->s1 = $5;}
        | T_UNIQ T_LOC ULoc  {$$ = $3;}
	;

ULoc : T_IN {$$ = ASTCreateNode(A_UNIQ); $$->name = $1;} 
     | T_LAST_FILE {$$ = ASTCreateNode(A_UNIQ); $$->type = "last"; $$->name = " | xargs -n 1 ";}
     ;

UniqueOpts : UniqueOpt "," UniqueOpts {$$ = $1; $$->s1 = $3;}
	   | UniqueOpt {$$ = $1;}
	   ;

UniqueOpt : T_COUNT {$$ = ASTCreateNode(A_UNIQ_OPT); $$->name = "c";}
	  | T_IGNORE {$$ = ASTCreateNode(A_UNIQ_OPT); $$->name = "i";}
	  | T_U {$$ = ASTCreateNode(A_UNIQ_OPT); $$->name = "u";}
	  ;

Read : T_LESS ReadLoc {$$ = $2;}
     ;

ReadLoc : T_IN {$$ = ASTCreateNode(A_READ); $$->name = $1;}
	| T_LAST_FILE {$$ = ASTCreateNode(A_READ); $$->type = "last"; $$->name = " | xargs -n 1 ";}
	;

Evaluate : T_CALC T_IN {$$ = ASTCreateNode(A_BC); $$->name = $2;}
         ;

Open : T_OPEN OpenLoc { $$ = $2;}
     ;

OpenLoc : T_IN {$$=ASTCreateNode(A_OLOC); $$->name = $1;}
	| T_LAST_FILE {$$=ASTCreateNode(A_OLOC); $$->type = "last"; $$->name = " | xargs -n 1";}
	;

Output : T_OUTPUT OutArg {$$ = $2; }
       | T_OUTPUT OutArg T_REDIRECT T_IN {$$= $2; $$->s1 = ASTCreateNode(A_DEST); $$->s1->name = $4;}
       ;

OutArg : T_ALL { $$= ASTCreateNode(A_OUT); $$->name = "*";}
       | T_IN { $$ = ASTCreateNode(A_OUT); $$->name = $1;}
       | T_LAST { $$ = ASTCreateNode(A_OUT); $$->type = "li"; $$->name = " | "; }
       | T_LAST_FILE { $$ = ASTCreateNode(A_OUT); $$->type = "l"; $$->name = " | xargs -n 1 "; }
       ;

Run : T_BASH T_IN { $$ = ASTCreateNode(A_RUN); $$->name = $2;}
    ;

Count : T_WC COpts T_LOC CSubject { $$ = $4; $$->s1 = $2;}
      | T_WC CSubject { $$ = $2;}
      ;

COpts : COpt "," COpts {$$=$1; $$->s1 = $3;}
      | COpt {$$=$1;}
      ;

COpt : T_L { $$ = ASTCreateNode(A_COPT); $$->name = "l";}
     | T_M{ $$ = ASTCreateNode(A_COPT); $$->name = "m";}
     | T_C{ $$ = ASTCreateNode(A_COPT); $$->name = "c";}
     | T_W{ $$ = ASTCreateNode(A_COPT); $$->name = "w";}
     ;

CSubject : T_LAST {$$ = ASTCreateNode(A_COUNT); $$->type = "li"; $$->name = " | ";}
	 | T_LAST_FILE {$$ = ASTCreateNode(A_COUNT); $$->type = "l"; $$->name = " | xargs -n 1 ";}
	 | T_IN{$$ = ASTCreateNode(A_COUNT); $$->name = $1;}
	 | T_ALL{$$ = ASTCreateNode(A_COUNT); $$->name = "*" ;}
	 ;

Take : T_TAKE T_ELEM T_NUM T_FROM TOpts T_SEP T_BY TArg {$$ = $8; $$->value = $3; $$->s1 = $5;}
     ;

TOpts : TOpt "," TOpts {$$=$1; $$->s1=$3;}
      | TOpt {$$=$1;}
      ;

TOpt : T_LAST {$$ = ASTCreateNode(A_TOPT); $$->type = "li"; $$->name = " | ";}
     | T_LAST_FILE {$$ = ASTCreateNode(A_TOPT); $$->type = "l"; $$->name = " | xargs -n 1 ";}
     | T_IN{$$ = ASTCreateNode(A_TOPT); $$->name = $1;}
     | T_ALL{$$ = ASTCreateNode(A_TOPT); $$->name = "*" ;}
     ;

TArg : T_WHITE { $$ = ASTCreateNode(A_TAKE); $$->name = "w";}
        | T_IN { $$ = ASTCreateNode(A_TAKE); $$->name = $1;}
	| T_C { $$ = ASTCreateNode(A_TAKE); $$->name = "c";}
	;

Rename : T_RENAME T_IN T_IN { $$ = ASTCreateNode(A_RENAME); $$->name = $2; strcat($$->name, ", "); strcat($$->name,$3);}
       ;
Remove : T_REMOVE RSubject {$$ = $2;}
       ;
RSubject : T_FILE T_IN { $$ = ASTCreateNode(A_REMOVE); $$->name = $2; $$->type = "f";}
	 | T_FOLDER T_IN { $$ = ASTCreateNode(A_REMOVE); $$->name = $2; $$->type = "d";}
	 ;
%%

int main(int argc, char *argv[]){
	FILE *fp = NULL;
	char s[100];

	for (int i = 0; i < argc; i++){
		if(strcmp("-w",argv[i])==0){
			strcpy(s,argv[i+1]);
			strcat(s,".sh");
			fp = fopen(s,"w");
			if(!fp){
				fprintf(stderr,"Unable to write to file: %s\n",s);
				exit(1);
			}
		}
	}
	char *a = "";
	printf("%s\n",a);
	if(!fp) fprintf(stderr,"NO FILE");	
	yyparse();
	emit_ast(program,fp);
	fclose(fp);
}
