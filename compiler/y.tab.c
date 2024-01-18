/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_IN = 258,
     T_MAKE = 259,
     T_SHOW = 260,
     T_CD = 261,
     T_FIND = 262,
     T_GREP = 263,
     T_UNIQ = 264,
     T_CAT = 265,
     T_LESS = 266,
     T_CALC = 267,
     T_REDIRECT = 268,
     T_BY = 269,
     T_ABOVE = 270,
     T_PREV = 271,
     T_ROOT = 272,
     T_NUM = 273,
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
     T_LAST_FILE = 307
   };
#endif
/* Tokens.  */
#define T_IN 258
#define T_MAKE 259
#define T_SHOW 260
#define T_CD 261
#define T_FIND 262
#define T_GREP 263
#define T_UNIQ 264
#define T_CAT 265
#define T_LESS 266
#define T_CALC 267
#define T_REDIRECT 268
#define T_BY 269
#define T_ABOVE 270
#define T_PREV 271
#define T_ROOT 272
#define T_NUM 273
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




/* Copy the first part of user declarations.  */
#line 1 "comp.y"

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




/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 25 "comp.y"
{
	char * string;
	ASTNode * node;
	}
/* Line 193 of yacc.c.  */
#line 227 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 240 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  81
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   108

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNRULES -- Number of states.  */
#define YYNSTATES  141

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    11,    13,    15,    17,    19,
      21,    23,    25,    27,    29,    31,    33,    35,    37,    39,
      41,    45,    49,    51,    55,    58,    63,    65,    69,    71,
      73,    75,    79,    81,    83,    85,    88,    90,    92,    94,
      96,    99,   102,   105,   107,   109,   111,   116,   123,   126,
     131,   133,   135,   137,   139,   141,   145,   147,   149,   151,
     153,   155,   161,   165,   167,   169,   171,   175,   177,   179,
     181,   183,   186,   188,   190,   193,   196,   198,   200,   203,
     208,   210,   212,   214,   217,   221,   224,   226,   228,   230,
     232,   234,   236,   238,   240,   247,   249,   251,   255,   258,
     261
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,    57,    -1,    58,    -1,    58,    46,    57,
      -1,    59,    -1,    60,    -1,    65,    -1,    67,    -1,    69,
      -1,    73,    -1,    77,    -1,    79,    -1,    80,    -1,    82,
      -1,    84,    -1,    85,    -1,    88,    -1,    90,    -1,    91,
      -1,     4,    36,     3,    -1,     4,    37,     3,    -1,     5,
      -1,     5,    14,    63,    -1,     5,    61,    -1,     5,    61,
      14,    63,    -1,    62,    -1,    62,    53,    61,    -1,    34,
      -1,    35,    -1,    64,    -1,    64,    53,    63,    -1,    18,
      -1,    19,    -1,    33,    -1,     6,    66,    -1,    17,    -1,
      15,    -1,    16,    -1,     3,    -1,     7,    68,    -1,    36,
       3,    -1,    37,     3,    -1,    20,    -1,     3,    -1,    41,
      -1,     8,     3,    54,    71,    -1,     8,     3,    38,    70,
      54,    71,    -1,     8,     3,    -1,     8,     3,    38,    70,
      -1,     3,    -1,    41,    -1,    52,    -1,    34,    -1,    72,
      -1,    72,    53,    71,    -1,    24,    -1,    36,    -1,    42,
      -1,    43,    -1,    44,    -1,     9,    38,    74,    54,    75,
      -1,     9,    38,    74,    -1,     3,    -1,    41,    -1,    52,
      -1,    76,    53,    75,    -1,    76,    -1,    48,    -1,    43,
      -1,    45,    -1,    11,    78,    -1,     3,    -1,    52,    -1,
      12,     3,    -1,    21,    81,    -1,     3,    -1,    52,    -1,
      51,    83,    -1,    51,    83,    13,     3,    -1,    34,    -1,
       3,    -1,    41,    -1,    23,     3,    -1,    24,    86,    87,
      -1,    24,    87,    -1,    25,    -1,    31,    -1,    30,    -1,
      32,    -1,    41,    -1,    52,    -1,     3,    -1,    34,    -1,
      50,    18,     3,    40,    14,    89,    -1,    47,    -1,     3,
      -1,    28,     3,     3,    -1,    49,    92,    -1,    36,     3,
      -1,    37,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    37,    37,    41,    44,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      66,    67,    70,    71,    72,    73,    76,    77,    80,    81,
      84,    86,    90,    91,    92,    95,    98,    99,   100,   101,
     104,   107,   108,   109,   110,   111,   114,   115,   116,   117,
     120,   121,   122,   123,   126,   127,   130,   131,   132,   133,
     134,   137,   138,   141,   142,   143,   146,   147,   150,   151,
     152,   155,   158,   159,   162,   165,   168,   169,   172,   173,
     176,   177,   178,   181,   184,   185,   188,   189,   190,   191,
     194,   195,   196,   197,   200,   203,   204,   207,   209,   211,
     212
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_IN", "T_MAKE", "T_SHOW", "T_CD",
  "T_FIND", "T_GREP", "T_UNIQ", "T_CAT", "T_LESS", "T_CALC", "T_REDIRECT",
  "T_BY", "T_ABOVE", "T_PREV", "T_ROOT", "T_NUM", "T_TIME", "T_ME",
  "T_OPEN", "T_ECHO", "T_BASH", "T_WC", "T_L", "T_CUT", "T_THROUGH",
  "T_RENAME", "T_RM", "T_C", "T_M", "T_W", "T_REV", "T_ALL", "T_LONG",
  "T_FILE", "T_FOLDER", "T_LOC", "T_FROM", "T_SEP", "T_LAST", "T_QUIET",
  "T_IGNORE", "T_RECURSE", "T_U", "T_AND", "T_WHITE", "T_COUNT",
  "T_REMOVE", "T_TAKE", "T_OUTPUT", "T_LAST_FILE", "\",\"", "\"-\"",
  "$accept", "Program", "CommandList", "Command", "Make", "Show",
  "ShowArgs", "ShowArg", "ShowOpts", "ShowOpt", "Goto", "Location",
  "Where", "WSubject", "Match", "GLoc", "MatchOpts", "MatchOpt", "Uniques",
  "ULoc", "UniqueOpts", "UniqueOpt", "Read", "ReadLoc", "Evaluate", "Open",
  "OpenLoc", "Output", "OutArg", "Run", "Count", "COpt", "CSubject",
  "Take", "TakeOpt", "Rename", "Remove", "RSubject", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    57,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      59,    59,    60,    60,    60,    60,    61,    61,    62,    62,
      63,    63,    64,    64,    64,    65,    66,    66,    66,    66,
      67,    68,    68,    68,    68,    68,    69,    69,    69,    69,
      70,    70,    70,    70,    71,    71,    72,    72,    72,    72,
      72,    73,    73,    74,    74,    74,    75,    75,    76,    76,
      76,    77,    78,    78,    79,    80,    81,    81,    82,    82,
      83,    83,    83,    84,    85,    85,    86,    86,    86,    86,
      87,    87,    87,    87,    88,    89,    89,    90,    91,    92,
      92
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     3,     2,     4,     1,     3,     1,     1,
       1,     3,     1,     1,     1,     2,     1,     1,     1,     1,
       2,     2,     2,     1,     1,     1,     4,     6,     2,     4,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     5,     3,     1,     1,     1,     3,     1,     1,     1,
       1,     2,     1,     1,     2,     2,     1,     1,     2,     4,
       1,     1,     1,     2,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     6,     1,     1,     3,     2,     2,
       2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     3,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,     0,     0,     0,    28,    29,    24,
      26,    39,    37,    38,    36,    35,    44,    43,     0,     0,
      45,    40,    48,     0,    72,    73,    71,    74,    76,    77,
      75,    83,    92,    86,    88,    87,    89,    93,    90,    91,
       0,    85,     0,     0,     0,    98,     0,    81,    80,    82,
      78,     1,     0,    20,    21,    32,    33,    34,    23,    30,
       0,     0,    41,    42,     0,     0,    63,    64,    65,    62,
      84,    97,    99,   100,     0,     0,     4,     0,    25,    27,
      50,    53,    51,    52,    49,    56,    57,    58,    59,    60,
      46,    54,     0,     0,    79,    31,     0,     0,    69,    70,
      68,    61,    67,     0,    47,    55,     0,    96,    95,    94,
      66
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    17,    18,    19,    20,    39,    40,    88,    89,
      21,    45,    22,    51,    23,   114,   120,   121,    24,    99,
     131,   132,    25,    56,    26,    27,    60,    28,    80,    29,
      30,    70,    71,    31,   139,    32,    33,    75
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -107
static const yytype_int8 yypact[] =
{
      51,   -25,    11,    70,     6,    20,    -4,     1,    32,     2,
      33,    -3,    45,   -21,    49,     3,    68,  -107,    23,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,    67,    74,    47,  -107,  -107,    57,
      25,  -107,  -107,  -107,  -107,  -107,  -107,  -107,    78,    85,
    -107,  -107,   -24,     0,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
      -2,  -107,    86,    87,    88,  -107,    89,  -107,  -107,  -107,
      80,  -107,    51,  -107,  -107,  -107,  -107,  -107,  -107,    41,
      47,   -16,  -107,  -107,    -1,    40,  -107,  -107,  -107,    42,
    -107,  -107,  -107,  -107,    55,    94,  -107,    47,  -107,  -107,
    -107,  -107,  -107,  -107,    44,  -107,  -107,  -107,  -107,  -107,
    -107,    46,   -35,    90,  -107,  -107,    40,    40,  -107,  -107,
    -107,  -107,    50,    14,  -107,  -107,   -35,  -107,  -107,  -107,
    -107
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -107,  -107,    24,  -107,  -107,  -107,    16,  -107,   -83,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -106,  -107,  -107,  -107,
     -31,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,    38,  -107,  -107,  -107,  -107,  -107
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      62,    62,   110,    96,    54,    58,    77,   108,   128,    46,
     129,    34,    35,   130,    94,    73,    74,   137,    37,    38,
     134,   135,    63,    52,   125,    36,    47,    64,    65,    66,
      95,    67,    67,   111,    53,    57,    61,    78,    68,    68,
     112,    97,    48,    49,    79,    37,    38,    50,    72,    69,
      69,   113,    98,    55,    59,     1,     2,     3,     4,     5,
       6,   138,     7,     8,   115,    85,    86,    76,    81,    82,
      83,    90,     9,    41,    10,    11,   116,    84,    91,    12,
      87,    92,   117,   118,   119,    42,    43,    44,    93,   101,
     102,   103,   104,   105,   107,   123,   122,   124,   126,   127,
      13,    14,    15,   136,   133,   140,   106,   109,   100
};

static const yytype_uint8 yycheck[] =
{
       3,     3,     3,     3,     3,     3,     3,    90,    43,     3,
      45,    36,    37,    48,    38,    36,    37,     3,    34,    35,
     126,   127,    25,     3,   107,    14,    20,    30,    31,    32,
      54,    34,    34,    34,    38,     3,     3,    34,    41,    41,
      41,    41,    36,    37,    41,    34,    35,    41,     3,    52,
      52,    52,    52,    52,    52,     4,     5,     6,     7,     8,
       9,    47,    11,    12,    24,    18,    19,    18,     0,    46,
       3,    14,    21,     3,    23,    24,    36,     3,    53,    28,
      33,     3,    42,    43,    44,    15,    16,    17,     3,     3,
       3,     3,     3,    13,    53,    40,    54,     3,    54,    53,
      49,    50,    51,    53,    14,   136,    82,    91,    70
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    11,    12,    21,
      23,    24,    28,    49,    50,    51,    56,    57,    58,    59,
      60,    65,    67,    69,    73,    77,    79,    80,    82,    84,
      85,    88,    90,    91,    36,    37,    14,    34,    35,    61,
      62,     3,    15,    16,    17,    66,     3,    20,    36,    37,
      41,    68,     3,    38,     3,    52,    78,     3,     3,    52,
      81,     3,     3,    25,    30,    31,    32,    34,    41,    52,
      86,    87,     3,    36,    37,    92,    18,     3,    34,    41,
      83,     0,    46,     3,     3,    18,    19,    33,    63,    64,
      14,    53,     3,     3,    38,    54,     3,    41,    52,    74,
      87,     3,     3,     3,     3,    13,    57,    53,    63,    61,
       3,    34,    41,    52,    70,    24,    36,    42,    43,    44,
      71,    72,    54,    40,     3,    63,    54,    53,    43,    45,
      48,    75,    76,    14,    71,    71,    53,     3,    47,    89,
      75
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 38 "comp.y"
    {program = (yyvsp[(1) - (1)].node);}
    break;

  case 3:
#line 41 "comp.y"
    {
		(yyval.node) = (yyvsp[(1) - (1)].node);
		}
    break;

  case 4:
#line 45 "comp.y"
    { (yyval.node) = (yyvsp[(1) - (3)].node);
	      (yyval.node)->s1 = (yyvsp[(3) - (3)].node);}
    break;

  case 5:
#line 49 "comp.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 6:
#line 50 "comp.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 7:
#line 51 "comp.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 8:
#line 52 "comp.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 9:
#line 53 "comp.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 10:
#line 54 "comp.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 11:
#line 55 "comp.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 12:
#line 56 "comp.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 13:
#line 57 "comp.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 14:
#line 58 "comp.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 15:
#line 59 "comp.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 16:
#line 60 "comp.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 17:
#line 61 "comp.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 18:
#line 62 "comp.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 19:
#line 63 "comp.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 20:
#line 66 "comp.y"
    { (yyval.node) = ASTCreateNode(A_MAKE); (yyval.node)->name = (yyvsp[(3) - (3)].string); (yyval.node)->type = "f"; }
    break;

  case 21:
#line 67 "comp.y"
    { (yyval.node) = ASTCreateNode(A_MAKE); (yyval.node)->name = (yyvsp[(3) - (3)].string); (yyval.node)->type = "d"; }
    break;

  case 22:
#line 70 "comp.y"
    { (yyval.node) = ASTCreateNode(A_SHOW); }
    break;

  case 23:
#line 71 "comp.y"
    {(yyval.node) = ASTCreateNode(A_SHOW); (yyval.node)->s2 = (yyvsp[(3) - (3)].node);}
    break;

  case 24:
#line 72 "comp.y"
    {(yyval.node) = ASTCreateNode(A_SHOW); (yyval.node)->s1 = (yyvsp[(2) - (2)].node);}
    break;

  case 25:
#line 73 "comp.y"
    {(yyval.node) = ASTCreateNode(A_SHOW); (yyval.node)->s1 = (yyvsp[(2) - (4)].node); (yyval.node)->s2 = (yyvsp[(4) - (4)].node); }
    break;

  case 26:
#line 76 "comp.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 27:
#line 77 "comp.y"
    {(yyval.node)=(yyvsp[(1) - (3)].node); (yyval.node)->s1 = (yyvsp[(3) - (3)].node);}
    break;

  case 28:
#line 80 "comp.y"
    { (yyval.node) = ASTCreateNode(A_SHOW_ARG); (yyval.node)->name = "a";}
    break;

  case 29:
#line 81 "comp.y"
    { (yyval.node) = ASTCreateNode(A_SHOW_ARG); (yyval.node)->name = "l";}
    break;

  case 30:
#line 85 "comp.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 31:
#line 87 "comp.y"
    { (yyval.node) = (yyvsp[(1) - (3)].node); (yyval.node)->s1 = (yyvsp[(3) - (3)].node);}
    break;

  case 32:
#line 90 "comp.y"
    {(yyval.node) = ASTCreateNode(A_SHOW_OPT); (yyval.node)->name = "v";}
    break;

  case 33:
#line 91 "comp.y"
    {(yyval.node) = ASTCreateNode(A_SHOW_OPT); (yyval.node)->name = "t";}
    break;

  case 34:
#line 92 "comp.y"
    {(yyval.node) = ASTCreateNode(A_SHOW_OPT); (yyval.node)->name = "r";}
    break;

  case 35:
#line 95 "comp.y"
    {(yyval.node) = ASTCreateNode(A_GOTO); (yyval.node)->s1 = (yyvsp[(2) - (2)].node);}
    break;

  case 36:
#line 98 "comp.y"
    {(yyval.node) = ASTCreateNode(A_LOC); (yyval.node)->name = "~";}
    break;

  case 37:
#line 99 "comp.y"
    {(yyval.node) = ASTCreateNode(A_LOC); (yyval.node)->name = "..";}
    break;

  case 38:
#line 100 "comp.y"
    {(yyval.node) = ASTCreateNode(A_LOC); (yyval.node)->name = "-";}
    break;

  case 39:
#line 101 "comp.y"
    {(yyval.node) = ASTCreateNode(A_LOC); (yyval.node)->name = (yyvsp[(1) - (1)].string);}
    break;

  case 40:
#line 104 "comp.y"
    {(yyval.node) = (yyvsp[(2) - (2)].node);}
    break;

  case 41:
#line 107 "comp.y"
    {(yyval.node) = ASTCreateNode(A_FIND); (yyval.node)->type = "f"; (yyval.node)->name = (yyvsp[(2) - (2)].string);}
    break;

  case 42:
#line 108 "comp.y"
    {(yyval.node) = ASTCreateNode(A_FIND); (yyval.node)->type = "d"; (yyval.node)->name = (yyvsp[(2) - (2)].string);}
    break;

  case 43:
#line 109 "comp.y"
    {(yyval.node) = ASTCreateNode(A_FIND); (yyval.node)->name = "me";}
    break;

  case 44:
#line 110 "comp.y"
    {(yyval.node) = ASTCreateNode(A_FIND); (yyval.node)->name = (yyvsp[(1) - (1)].string);}
    break;

  case 45:
#line 111 "comp.y"
    {(yyval.node) = ASTCreateNode(A_FIND); (yyval.node)->name = " | xargs -n 1 ";}
    break;

  case 46:
#line 114 "comp.y"
    {(yyval.node) = ASTCreateNode(A_GREP); (yyval.node)->name = (yyvsp[(2) - (4)].string); (yyval.node)->s2 = (yyvsp[(4) - (4)].node); }
    break;

  case 47:
#line 115 "comp.y"
    {(yyval.node) = ASTCreateNode(A_GREP); (yyval.node)->name = (yyvsp[(2) - (6)].string); (yyval.node)->s1 = (yyvsp[(4) - (6)].node); (yyval.node)->s2 = (yyvsp[(6) - (6)].node);}
    break;

  case 48:
#line 116 "comp.y"
    {(yyval.node) = ASTCreateNode(A_GREP); (yyval.node)->name = (yyvsp[(2) - (2)].string);}
    break;

  case 49:
#line 117 "comp.y"
    {(yyval.node) = ASTCreateNode(A_GREP); (yyval.node)->name = (yyvsp[(2) - (4)].string); (yyval.node)->s1 = (yyvsp[(4) - (4)].node);}
    break;

  case 50:
#line 120 "comp.y"
    {(yyval.node) = ASTCreateNode(A_GLOC); (yyval.node)->name = (yyvsp[(1) - (1)].string);}
    break;

  case 51:
#line 121 "comp.y"
    {(yyval.node) = ASTCreateNode(A_GLOC); (yyval.node)->name = " | "; }
    break;

  case 52:
#line 122 "comp.y"
    {(yyval.node) = ASTCreateNode(A_GLOC); (yyval.node)->name = " | xargs -n 1 "; }
    break;

  case 53:
#line 123 "comp.y"
    {(yyval.node) = ASTCreateNode(A_GLOC); (yyval.node)->name = "*"; }
    break;

  case 54:
#line 126 "comp.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 55:
#line 127 "comp.y"
    {(yyval.node) = (yyvsp[(1) - (3)].node); (yyval.node)->s1 = (yyvsp[(3) - (3)].node);}
    break;

  case 56:
#line 130 "comp.y"
    {(yyval.node) = ASTCreateNode(A_MATCH_OPT); (yyval.node)->name = "c";}
    break;

  case 57:
#line 131 "comp.y"
    {(yyval.node) = ASTCreateNode(A_MATCH_OPT); (yyval.node)->name = "f";}
    break;

  case 58:
#line 132 "comp.y"
    {(yyval.node) = ASTCreateNode(A_MATCH_OPT); (yyval.node)->name = "q";}
    break;

  case 59:
#line 133 "comp.y"
    {(yyval.node) = ASTCreateNode(A_MATCH_OPT); (yyval.node)->name = "i";}
    break;

  case 60:
#line 134 "comp.y"
    {(yyval.node) = ASTCreateNode(A_MATCH_OPT); (yyval.node)->name = "r";}
    break;

  case 61:
#line 137 "comp.y"
    {(yyval.node) = (yyvsp[(3) - (5)].node); (yyval.node)->s1 = (yyvsp[(5) - (5)].node);}
    break;

  case 62:
#line 138 "comp.y"
    {(yyval.node) = (yyvsp[(3) - (3)].node);}
    break;

  case 63:
#line 141 "comp.y"
    {(yyval.node) = ASTCreateNode(A_UNIQ); (yyval.node)->name = (yyvsp[(1) - (1)].string);}
    break;

  case 64:
#line 142 "comp.y"
    {(yyval.node) = ASTCreateNode(A_UNIQ); (yyval.node)->name = " | ";}
    break;

  case 65:
#line 143 "comp.y"
    {(yyval.node) = ASTCreateNode(A_UNIQ); (yyval.node)->name = " | xargs -n 1 ";}
    break;

  case 66:
#line 146 "comp.y"
    {(yyval.node) = (yyvsp[(1) - (3)].node); (yyval.node)->s1 = (yyvsp[(3) - (3)].node);}
    break;

  case 67:
#line 147 "comp.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 68:
#line 150 "comp.y"
    {(yyval.node) = ASTCreateNode(A_UNIQ_OPT); (yyval.node)->name = "c";}
    break;

  case 69:
#line 151 "comp.y"
    {(yyval.node) = ASTCreateNode(A_UNIQ_OPT); (yyval.node)->name = "i";}
    break;

  case 70:
#line 152 "comp.y"
    {(yyval.node) = ASTCreateNode(A_UNIQ_OPT); (yyval.node)->name = "u";}
    break;

  case 71:
#line 155 "comp.y"
    {(yyval.node) = (yyvsp[(2) - (2)].node);}
    break;

  case 72:
#line 158 "comp.y"
    {(yyval.node) = ASTCreateNode(A_READ); (yyval.node)->name = (yyvsp[(1) - (1)].string);}
    break;

  case 73:
#line 159 "comp.y"
    {(yyval.node) = ASTCreateNode(A_READ); (yyval.node)->name = " | xargs -n 1 ";}
    break;

  case 74:
#line 162 "comp.y"
    {(yyval.node) = ASTCreateNode(A_BC); (yyval.node)->name = (yyvsp[(2) - (2)].string);}
    break;

  case 75:
#line 165 "comp.y"
    { (yyval.node) = (yyvsp[(2) - (2)].node);}
    break;

  case 76:
#line 168 "comp.y"
    {(yyval.node)=ASTCreateNode(A_OLOC); (yyval.node)->name = (yyvsp[(1) - (1)].string);}
    break;

  case 77:
#line 169 "comp.y"
    {(yyval.node)=ASTCreateNode(A_OLOC); (yyval.node)->name = " | xargs -n 1";}
    break;

  case 78:
#line 172 "comp.y"
    {(yyval.node) = (yyvsp[(2) - (2)].node); }
    break;

  case 79:
#line 173 "comp.y"
    {(yyval.node)= (yyvsp[(2) - (4)].node); (yyval.node)->s1 = ASTCreateNode(A_DEST); (yyval.node)->s1->name = (yyvsp[(4) - (4)].string);}
    break;

  case 80:
#line 176 "comp.y"
    { (yyval.node)= ASTCreateNode(A_OUT); (yyval.node)->name = "*";}
    break;

  case 81:
#line 177 "comp.y"
    { (yyval.node) = ASTCreateNode(A_OUT); (yyval.node)->name = (yyvsp[(1) - (1)].string);}
    break;

  case 82:
#line 178 "comp.y"
    { (yyval.node) = ASTCreateNode(A_OUT); (yyval.node)->name = " | xargs -n 1 "; }
    break;

  case 83:
#line 181 "comp.y"
    { (yyval.node) = ASTCreateNode(A_RUN); (yyval.node)->name = (yyvsp[(2) - (2)].string);}
    break;

  case 84:
#line 184 "comp.y"
    { (yyval.node) = (yyvsp[(3) - (3)].node); (yyval.node)->s1 = (yyvsp[(2) - (3)].node);}
    break;

  case 85:
#line 185 "comp.y"
    { (yyval.node) = (yyvsp[(2) - (2)].node);}
    break;

  case 86:
#line 188 "comp.y"
    { (yyval.node) = ASTCreateNode(A_COPT); (yyval.node)->name = "l";}
    break;

  case 87:
#line 189 "comp.y"
    { (yyval.node) = ASTCreateNode(A_COPT); (yyval.node)->name = "m";}
    break;

  case 88:
#line 190 "comp.y"
    { (yyval.node) = ASTCreateNode(A_COPT); (yyval.node)->name = "c";}
    break;

  case 89:
#line 191 "comp.y"
    { (yyval.node) = ASTCreateNode(A_COPT); (yyval.node)->name = "w";}
    break;

  case 90:
#line 194 "comp.y"
    {(yyval.node) = ASTCreateNode(A_COUNT); (yyval.node)->name = " | ";}
    break;

  case 91:
#line 195 "comp.y"
    {(yyval.node) = ASTCreateNode(A_COUNT); (yyval.node)->name = " | xargs -n 1 ";}
    break;

  case 92:
#line 196 "comp.y"
    {(yyval.node) = ASTCreateNode(A_COUNT); (yyval.node)->name = (yyvsp[(1) - (1)].string);}
    break;

  case 93:
#line 197 "comp.y"
    {(yyval.node) = ASTCreateNode(A_COUNT); (yyval.node)->name = "*" ;}
    break;

  case 94:
#line 200 "comp.y"
    {(yyval.node) = (yyvsp[(6) - (6)].node); (yyval.node)->value = (yyvsp[(3) - (6)].string);}
    break;

  case 95:
#line 203 "comp.y"
    { (yyval.node) = ASTCreateNode(A_TAKE); (yyval.node)->name = "w";}
    break;

  case 96:
#line 204 "comp.y"
    { (yyval.node) = ASTCreateNode(A_TAKE); (yyval.node)->name = (yyvsp[(1) - (1)].string);}
    break;

  case 97:
#line 207 "comp.y"
    { (yyval.node) = ASTCreateNode(A_RENAME); (yyval.node)->name = (yyvsp[(2) - (3)].string); strcat((yyval.node)->name, ", "); strcat((yyval.node)->name,(yyvsp[(3) - (3)].string));}
    break;

  case 98:
#line 209 "comp.y"
    {(yyval.node) = (yyvsp[(2) - (2)].node);}
    break;

  case 99:
#line 211 "comp.y"
    { (yyval.node) = ASTCreateNode(A_REMOVE); (yyval.node)->name = (yyvsp[(2) - (2)].string); (yyval.node)->type = "f";}
    break;

  case 100:
#line 212 "comp.y"
    { (yyval.node) = ASTCreateNode(A_REMOVE); (yyval.node)->name = (yyvsp[(2) - (2)].string); (yyval.node)->type = "d";}
    break;


/* Line 1267 of yacc.c.  */
#line 2073 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



