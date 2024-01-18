%{
int verbose = 0;
#include "ast.h"
#include "y.tab.h"
int line_no = 0;
int token_no = 0;
%}

%%
 { token_no++; }
"make" { return (T_MAKE); }
"show" { return (T_SHOW); }
"long" { return (T_LONG); }
"all" { return (T_ALL); }
"goto" { return (T_CD); }
"where" { return (T_FIND); }
"match" { return (T_GREP); }
"uniques" { return (T_UNIQ); }
"contents" { return (T_CAT); }
"read" { return (T_LESS); }
"evaluate" { return (T_CALC); }
"into" { return (T_REDIRECT); }
"by" { return (T_BY); }
"above" { return (T_ABOVE); }
"previous" { return (T_PREV); }
"number" { return (T_NUM); }
"reverse" { return (T_REV); }
"time" { return (T_TIME); }
"me" { return (T_ME); }
"open" { return (T_OPEN); }
"output" { return (T_OUTPUT); }
"run" { return (T_BASH); }
"count" { return (T_WC); }
"lines" { return (T_L); }
"bytes" { return (T_C); }
"chars" { return (T_M); }
"words" { return (T_W); }
"take" { return (T_CUT); }
"through" { return (T_THROUGH); }
"whitespace" { return (T_WHITE); }
"rename" { return (T_RENAME); }
"remove" { return (T_RM); }
"root" { return (T_ROOT); }
"file" { return (T_FILE); }
"folder" { return (T_FOLDER); }
"in" { return (T_LOC); }
"from" { return (T_FROM); }
"separated" { return (T_SEP); }
"last file" { return (T_LAST_FILE); }
"last" { return (T_LAST); }
"quiet" { return (T_QUIET); }
"ignore case" { return (T_IGNORE); }
"recursive" { return (T_RECURSE); } 
"unique" { return (T_U); }
"and" { return (T_AND); }
"pass to" { return (T_PIPE); }
\/\/.*        { if(verbose)printf("Comment"); }

.*       { if(verbose)fprintf(stderr, "User Input: %s\n",yytext);
			yylval.string=strdup(yytext); return (T_IN);}
\n       { if (verbose) fprintf(stderr, "new line %c\n",*yytext); line_no++; token_no=0;}

%%

int yywrap(void)
{ return 1; }


