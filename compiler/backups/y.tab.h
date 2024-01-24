/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_IN = 258,
    T_NUM = 259,
    T_MAKE = 260,
    T_SHOW = 261,
    T_CD = 262,
    T_FIND = 263,
    T_GREP = 264,
    T_UNIQ = 265,
    T_CAT = 266,
    T_LESS = 267,
    T_CALC = 268,
    T_REDIRECT = 269,
    T_BY = 270,
    T_ABOVE = 271,
    T_PREV = 272,
    T_ROOT = 273,
    T_TIME = 274,
    T_ME = 275,
    T_OPEN = 276,
    T_ECHO = 277,
    T_BASH = 278,
    T_WC = 279,
    T_L = 280,
    T_CUT = 281,
    T_THROUGH = 282,
    T_RENAME = 283,
    T_RM = 284,
    T_C = 285,
    T_M = 286,
    T_W = 287,
    T_REV = 288,
    T_ALL = 289,
    T_LONG = 290,
    T_FILE = 291,
    T_FOLDER = 292,
    T_LOC = 293,
    T_FROM = 294,
    T_SEP = 295,
    T_LAST = 296,
    T_QUIET = 297,
    T_IGNORE = 298,
    T_RECURSE = 299,
    T_U = 300,
    T_AND = 301,
    T_WHITE = 302,
    T_COUNT = 303,
    T_REMOVE = 304,
    T_TAKE = 305,
    T_OUTPUT = 306,
    T_LAST_FILE = 307,
    T_ELEM = 308
  };
#endif
/* Tokens.  */
#define T_IN 258
#define T_NUM 259
#define T_MAKE 260
#define T_SHOW 261
#define T_CD 262
#define T_FIND 263
#define T_GREP 264
#define T_UNIQ 265
#define T_CAT 266
#define T_LESS 267
#define T_CALC 268
#define T_REDIRECT 269
#define T_BY 270
#define T_ABOVE 271
#define T_PREV 272
#define T_ROOT 273
#define T_TIME 274
#define T_ME 275
#define T_OPEN 276
#define T_ECHO 277
#define T_BASH 278
#define T_WC 279
#define T_L 280
#define T_CUT 281
#define T_THROUGH 282
#define T_RENAME 283
#define T_RM 284
#define T_C 285
#define T_M 286
#define T_W 287
#define T_REV 288
#define T_ALL 289
#define T_LONG 290
#define T_FILE 291
#define T_FOLDER 292
#define T_LOC 293
#define T_FROM 294
#define T_SEP 295
#define T_LAST 296
#define T_QUIET 297
#define T_IGNORE 298
#define T_RECURSE 299
#define T_U 300
#define T_AND 301
#define T_WHITE 302
#define T_COUNT 303
#define T_REMOVE 304
#define T_TAKE 305
#define T_OUTPUT 306
#define T_LAST_FILE 307
#define T_ELEM 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 25 "comp.y" /* yacc.c:1909  */

	char * string;
	ASTNode * node;
	

#line 166 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
