/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "comp.y" /* yacc.c:339  */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "emit.h"
#include "ast.h"

extern int line_no;
extern int token_no;

int yylex();
int cl = 0;

void  yyerror (s)
	char *s;
{
	printf("%s at line no : %d token no: %d \n",s,line_no,token_no);
}



#line 88 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
    T_TIME = 273,
    T_ME = 274,
    T_OPEN = 275,
    T_ECHO = 276,
    T_BASH = 277,
    T_WC = 278,
    T_L = 279,
    T_CUT = 280,
    T_THROUGH = 281,
    T_RENAME = 282,
    T_RM = 283,
    T_C = 284,
    T_M = 285,
    T_W = 286,
    T_REV = 287,
    T_ALL = 288,
    T_LONG = 289,
    T_FILE = 290,
    T_FOLDER = 291,
    T_LOC = 292,
    T_FROM = 293,
    T_SEP = 294,
    T_LAST = 295,
    T_QUIET = 296,
    T_IGNORE = 297,
    T_RECURSE = 298,
    T_U = 299,
    T_AND = 300,
    T_WHITE = 301,
    T_COUNT = 302,
    T_REMOVE = 303,
    T_TAKE = 304,
    T_OUTPUT = 305,
    T_LAST_FILE = 306,
    T_ELEM = 307,
    T_CLEAR = 308,
    T_REPLACE = 309,
    T_OVERWRITE = 310,
    T_SED = 311,
    T_IP = 312,
    T_SUB = 313,
    T_SORT = 314,
    T_DELETE = 315,
    T_NUM = 316
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
#define T_TIME 273
#define T_ME 274
#define T_OPEN 275
#define T_ECHO 276
#define T_BASH 277
#define T_WC 278
#define T_L 279
#define T_CUT 280
#define T_THROUGH 281
#define T_RENAME 282
#define T_RM 283
#define T_C 284
#define T_M 285
#define T_W 286
#define T_REV 287
#define T_ALL 288
#define T_LONG 289
#define T_FILE 290
#define T_FOLDER 291
#define T_LOC 292
#define T_FROM 293
#define T_SEP 294
#define T_LAST 295
#define T_QUIET 296
#define T_IGNORE 297
#define T_RECURSE 298
#define T_U 299
#define T_AND 300
#define T_WHITE 301
#define T_COUNT 302
#define T_REMOVE 303
#define T_TAKE 304
#define T_OUTPUT 305
#define T_LAST_FILE 306
#define T_ELEM 307
#define T_CLEAR 308
#define T_REPLACE 309
#define T_OVERWRITE 310
#define T_SED 311
#define T_IP 312
#define T_SUB 313
#define T_SORT 314
#define T_DELETE 315
#define T_NUM 316

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 25 "comp.y" /* yacc.c:355  */

	char * string;
	ASTNode * node;
	

#line 256 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 273 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  95
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   159

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  179

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    62,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    63,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    37,    37,    42,    46,    51,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    72,    75,    76,    79,    80,    81,    82,
      85,    86,    89,    90,    93,    95,    99,   100,   101,   104,
     107,   108,   109,   110,   113,   116,   117,   118,   119,   120,
     123,   124,   125,   126,   129,   130,   131,   134,   135,   138,
     139,   140,   141,   142,   143,   146,   147,   150,   151,   154,
     155,   158,   159,   160,   163,   166,   167,   170,   173,   176,
     177,   180,   181,   184,   185,   186,   187,   190,   193,   194,
     197,   198,   201,   202,   203,   204,   207,   208,   209,   210,
     213,   216,   217,   220,   221,   222,   223,   226,   227,   228,
     231,   233,   235,   236,   238,   241,   249,   251,   255,   256,
     257,   258,   261,   262,   265,   266,   267
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_IN", "T_MAKE", "T_SHOW", "T_CD",
  "T_FIND", "T_GREP", "T_UNIQ", "T_CAT", "T_LESS", "T_CALC", "T_REDIRECT",
  "T_BY", "T_ABOVE", "T_PREV", "T_ROOT", "T_TIME", "T_ME", "T_OPEN",
  "T_ECHO", "T_BASH", "T_WC", "T_L", "T_CUT", "T_THROUGH", "T_RENAME",
  "T_RM", "T_C", "T_M", "T_W", "T_REV", "T_ALL", "T_LONG", "T_FILE",
  "T_FOLDER", "T_LOC", "T_FROM", "T_SEP", "T_LAST", "T_QUIET", "T_IGNORE",
  "T_RECURSE", "T_U", "T_AND", "T_WHITE", "T_COUNT", "T_REMOVE", "T_TAKE",
  "T_OUTPUT", "T_LAST_FILE", "T_ELEM", "T_CLEAR", "T_REPLACE",
  "T_OVERWRITE", "T_SED", "T_IP", "T_SUB", "T_SORT", "T_DELETE", "T_NUM",
  "'&'", "':'", "$accept", "Program", "CommandList", "Command", "Make",
  "Show", "ShowArgs", "ShowArg", "ShowOpts", "ShowOpt", "Goto", "Location",
  "Where", "WSubject", "Match", "GLoc", "MatchOpts", "MatchOpt", "Uniques",
  "ULoc", "UniqueOpts", "UniqueOpt", "Read", "ReadLoc", "Evaluate", "Open",
  "OpenLoc", "Output", "OutArg", "Run", "Count", "COpts", "COpt",
  "CSubject", "Take", "TOpts", "TOpt", "TArg", "Rename", "Remove",
  "RSubject", "Clear", "Replace", "Sort", "SObj", "SOpts", "SOpt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,    38,    58
};
# endif

#define YYPACT_NINF -99

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-99)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      32,   -22,    82,   106,    84,     8,   -16,    13,    25,    20,
      27,    43,   -18,    42,    62,    28,   -99,    87,    29,    65,
     -99,    -3,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
      89,    99,    17,   -99,   -99,    90,    52,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   114,   122,   -99,   -99,   -10,    26,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,    92,    64,   -99,    69,
     129,   133,   134,   -99,   -99,   -99,   -99,   -99,   125,   136,
     -99,   -99,   -99,   -99,   126,   -99,    32,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,    79,    17,    67,   -99,   -99,    15,
      70,   -99,   -99,   -32,    30,   104,   139,   -99,   -99,   -99,
     140,   107,    57,   -99,    17,   -99,   -99,   -99,   -99,   -99,
      83,   -99,   -99,   -99,   -99,   -99,   -99,   -99,    85,   -99,
     -99,   -99,   -99,    86,   -99,   -99,   111,   -99,   142,   -99,
     -99,   -99,   -99,    88,   -99,    70,    70,   -32,    55,   -99,
      57,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   112,    91,
     -99,   138,    55,    81,   -99,   -99,   -99,   -99,   -99
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   114,     0,     0,     0,
       2,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,     0,     0,    32,    33,    28,    30,    43,    41,    42,
      40,    39,    48,    47,     0,     0,    49,    44,    52,     0,
      75,    76,    74,    77,    79,    80,    78,    87,    98,    92,
      94,    93,    95,    99,    96,    97,     0,    91,    89,     0,
       0,     0,     0,   111,    84,    83,    85,    86,    81,     0,
     120,   121,   119,   118,   117,     1,     0,     3,    24,    25,
      37,    38,    36,    27,    34,     0,     0,    45,    46,     0,
       0,    67,    68,    66,     0,     0,     0,   110,   112,   113,
       0,     0,     0,     4,     0,    29,    31,    54,    56,    55,
      53,    59,    60,    61,    62,    63,    64,    50,    57,    72,
      73,    71,    65,    70,    88,    90,     0,    82,     0,   125,
     126,   124,   116,   123,    35,     0,     0,     0,     0,   115,
       0,    51,    58,    69,   105,   106,   103,   104,     0,   102,
     122,     0,     0,     0,   101,   108,   109,   107,   100
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -99,   -99,   -21,   -99,   -99,   -99,    48,   -99,   -98,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -48,   -99,   -99,   -99,
      -2,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,    41,   -99,    44,   -99,   -15,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,    -1,   -99
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    20,    21,    22,    23,    45,    46,   103,   104,
      24,    51,    25,    57,    26,   130,   137,   138,    27,   113,
     142,   143,    28,    62,    29,    30,    66,    31,    88,    32,
      33,    76,    77,    78,    34,   168,   169,   178,    35,    36,
      83,    37,    38,    39,    94,   152,   153
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      97,     1,     2,     3,     4,     5,     6,   125,     7,     8,
     139,    58,   140,    40,    41,   141,    60,     9,   127,    10,
      11,    59,    12,    64,    13,    14,   154,   109,    63,   111,
      67,    84,    90,    68,    79,   100,     1,     2,     3,     4,
       5,     6,    96,     7,     8,    80,    68,    15,   128,   101,
      16,    17,     9,   110,    10,    11,    18,    12,   164,    13,
      14,    85,    91,    73,    61,    95,   129,    69,    86,    92,
      74,    65,    70,    71,    72,   123,    73,   112,   102,    87,
      93,    75,    15,    74,   175,    16,    17,    52,   165,   149,
      89,    18,    98,   131,    75,   166,    42,    81,    82,   150,
      43,    44,    99,    53,   105,   132,   167,   161,   162,    47,
     176,   133,   134,   135,   106,    43,    44,   107,   151,    54,
      55,    48,    49,    50,    56,   108,   115,   177,    69,   114,
     116,   136,   117,    70,    71,    72,   118,   119,   120,   121,
     122,   124,   146,   147,   148,   159,   155,   156,   157,   158,
     160,   171,   173,   172,   126,   163,   145,   174,   144,   170
};

static const yytype_uint8 yycheck[] =
{
      21,     4,     5,     6,     7,     8,     9,   105,    11,    12,
      42,     3,    44,    35,    36,    47,     3,    20,     3,    22,
      23,    37,    25,     3,    27,    28,   124,    37,     3,     3,
       3,     3,     3,     3,    52,    18,     4,     5,     6,     7,
       8,     9,    45,    11,    12,     3,     3,    50,    33,    32,
      53,    54,    20,    63,    22,    23,    59,    25,     3,    27,
      28,    33,    33,    33,    51,     0,    51,    24,    40,    40,
      40,    51,    29,    30,    31,    96,    33,    51,    61,    51,
      51,    51,    50,    40,     3,    53,    54,     3,    33,    32,
       3,    59,     3,    23,    51,    40,    14,    35,    36,    42,
      33,    34,     3,    19,    14,    35,    51,   155,   156,     3,
      29,    41,    42,    43,    62,    33,    34,     3,    61,    35,
      36,    15,    16,    17,    40,     3,    62,    46,    24,    37,
      61,    61,     3,    29,    30,    31,     3,     3,    13,     3,
      14,    62,     3,     3,    37,     3,    63,    62,    62,    38,
      62,    39,    14,    62,   106,   157,   115,   172,   114,   160
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    11,    12,    20,
      22,    23,    25,    27,    28,    50,    53,    54,    59,    65,
      66,    67,    68,    69,    74,    76,    78,    82,    86,    88,
      89,    91,    93,    94,    98,   102,   103,   105,   106,   107,
      35,    36,    14,    33,    34,    70,    71,     3,    15,    16,
      17,    75,     3,    19,    35,    36,    40,    77,     3,    37,
       3,    51,    87,     3,     3,    51,    90,     3,     3,    24,
      29,    30,    31,    33,    40,    51,    95,    96,    97,    52,
       3,    35,    36,   104,     3,    33,    40,    51,    92,     3,
       3,    33,    40,    51,   108,     0,    45,    66,     3,     3,
      18,    32,    61,    72,    73,    14,    62,     3,     3,    37,
      63,     3,    51,    83,    37,    62,    61,     3,     3,     3,
      13,     3,    14,    66,    62,    72,    70,     3,    33,    51,
      79,    23,    35,    41,    42,    43,    61,    80,    81,    42,
      44,    47,    84,    85,    97,    95,     3,     3,    37,    32,
      42,    61,   109,   110,    72,    63,    62,    62,    38,     3,
      62,    80,    80,    84,     3,    33,    40,    51,    99,   100,
     109,    39,    62,    14,    99,     3,    29,    46,   101
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    66,    66,    66,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    68,    68,    69,    69,    69,    69,
      70,    70,    71,    71,    72,    72,    73,    73,    73,    74,
      75,    75,    75,    75,    76,    77,    77,    77,    77,    77,
      78,    78,    78,    78,    79,    79,    79,    80,    80,    81,
      81,    81,    81,    81,    81,    82,    82,    83,    83,    84,
      84,    85,    85,    85,    86,    87,    87,    88,    89,    90,
      90,    91,    91,    92,    92,    92,    92,    93,    94,    94,
      95,    95,    96,    96,    96,    96,    97,    97,    97,    97,
      98,    99,    99,   100,   100,   100,   100,   101,   101,   101,
     102,   103,   104,   104,   105,   106,   107,   107,   108,   108,
     108,   108,   109,   109,   110,   110,   110
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     1,     3,     2,     4,
       1,     3,     1,     1,     1,     3,     1,     1,     1,     2,
       1,     1,     1,     1,     2,     2,     2,     1,     1,     1,
       4,     6,     2,     4,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     4,     3,     1,     1,     3,
       1,     1,     1,     1,     2,     1,     1,     2,     2,     1,
       1,     2,     4,     1,     1,     1,     1,     2,     4,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       9,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     2,     2,     1,     5,     4,     2,     1,     1,
       1,     1,     3,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 38 "comp.y" /* yacc.c:1646  */
    {
	program = (yyvsp[0].node);}
#line 1490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 43 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_COMMAND_LIST);
	      (yyval.node)->s1 = (yyvsp[-1].node);
	      (yyval.node)->s2 = (yyvsp[0].node);}
#line 1498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 47 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=ASTCreateNode(A_COMMAND_LIST);
		 (yyval.node)->s1 = (yyvsp[-2].node);
		 (yyval.node)->s2 = (yyvsp[0].node);
		 }
#line 1507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 51 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=ASTCreateNode(A_COMMAND_LIST); (yyval.node)->s1=(yyvsp[0].node);}
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 54 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 55 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 56 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 57 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 58 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 59 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 60 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 61 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 62 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 63 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 64 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 65 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 66 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 67 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 68 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 69 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 70 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 72 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 75 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_MAKE);(yyval.node)->name = (yyvsp[0].string); (yyval.node)->type = "f";}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 76 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_MAKE); (yyval.node)->name = (yyvsp[0].string); (yyval.node)->type = "d"; }
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 79 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_SHOW); }
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 80 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_SHOW); (yyval.node)->s2 = (yyvsp[0].node);}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 81 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_SHOW); (yyval.node)->s1 = (yyvsp[0].node);}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 82 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_SHOW); (yyval.node)->s1 = (yyvsp[-2].node); (yyval.node)->s2 = (yyvsp[0].node); }
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 85 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 86 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-2].node); (yyval.node)->s1 = (yyvsp[0].node);}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 89 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_SHOW_ARG); (yyval.node)->name = "a";}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 90 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_SHOW_ARG); (yyval.node)->name = "l";}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 94 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 96 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node); (yyval.node)->s1 = (yyvsp[0].node);}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 99 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_SHOW_OPT); (yyval.node)->name = "v";}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 100 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_SHOW_OPT); (yyval.node)->name = "t";}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 101 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_SHOW_OPT); (yyval.node)->name = "r";}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 104 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_GOTO); (yyval.node)->s1 = (yyvsp[0].node);}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 107 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_LOC); (yyval.node)->name = "~";}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 108 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_LOC); (yyval.node)->name = "..";}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 109 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_LOC); (yyval.node)->name = "-";}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 110 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_LOC); (yyval.node)->name = (yyvsp[0].string);}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 113 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 116 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_FIND); (yyval.node)->type = "f"; (yyval.node)->name = (yyvsp[0].string);}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 117 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_FIND); (yyval.node)->type = "d"; (yyval.node)->name = (yyvsp[0].string);}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 118 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_FIND); (yyval.node)->name = "me";}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 119 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_FIND); (yyval.node)->name = (yyvsp[0].string);}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 120 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_FIND); (yyval.node)-> type = "l"; (yyval.node)->name = " | xargs -n 1 ";}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 123 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_GREP); (yyval.node)->name = (yyvsp[-2].string); (yyval.node)->s2 = (yyvsp[0].node); }
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 124 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_GREP); (yyval.node)->name = (yyvsp[-4].string); (yyval.node)->s1 = (yyvsp[-2].node); (yyval.node)->s2 = (yyvsp[0].node);}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 125 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_GREP); (yyval.node)->name = (yyvsp[0].string);}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 126 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_GREP); (yyval.node)->name = (yyvsp[-2].string); (yyval.node)->s1 = (yyvsp[0].node);}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 129 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_GLOC); (yyval.node)->name = (yyvsp[0].string);}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 130 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_GLOC); (yyval.node)->type = "l" ;(yyval.node)->name = " | xargs -n 1 "; }
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 131 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_GLOC); (yyval.node)->name = "*"; }
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 134 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 135 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-2].node); (yyval.node)->s1 = (yyvsp[0].node);}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 138 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_MATCH_OPT); (yyval.node)->name = "c";}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 139 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_MATCH_OPT); (yyval.node)->name = "l";}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 140 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_MATCH_OPT); (yyval.node)->name = "q";}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 141 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_MATCH_OPT); (yyval.node)->name = "i";}
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 142 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_MATCH_OPT); (yyval.node)->name = "r";}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 143 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_MATCH_OPT); (yyval.node)->name = "n";}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 146 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node); (yyval.node)->s1 = (yyvsp[0].node);}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 147 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 150 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_UNIQ); (yyval.node)->name = (yyvsp[0].string);}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 151 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_UNIQ); (yyval.node)->type = "l"; (yyval.node)->name = " | xargs -n 1 ";}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 154 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-2].node); (yyval.node)->s1 = (yyvsp[0].node);}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 155 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 158 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_UNIQ_OPT); (yyval.node)->name = "c";}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 159 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_UNIQ_OPT); (yyval.node)->name = "i";}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 160 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_UNIQ_OPT); (yyval.node)->name = "u";}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 163 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 166 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_READ); (yyval.node)->name = (yyvsp[0].string);}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 167 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_READ); (yyval.node)->type = "l"; (yyval.node)->name = " | xargs -n 1 ";}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 170 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_BC); (yyval.node)->name = (yyvsp[0].string);}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 173 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 176 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=ASTCreateNode(A_OLOC); (yyval.node)->name = (yyvsp[0].string);}
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 177 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=ASTCreateNode(A_OLOC); (yyval.node)->type = "l"; (yyval.node)->name = " | xargs -n 1";}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 180 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node); }
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 181 "comp.y" /* yacc.c:1646  */
    {(yyval.node)= (yyvsp[-2].node); (yyval.node)->s1 = ASTCreateNode(A_DEST); (yyval.node)->s1->name = (yyvsp[0].string);}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 184 "comp.y" /* yacc.c:1646  */
    { (yyval.node)= ASTCreateNode(A_OUT); (yyval.node)->name = "*";}
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 185 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_OUT); (yyval.node)->name = (yyvsp[0].string);}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 186 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_OUT); (yyval.node)->type = "li"; (yyval.node)->name = " | "; }
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 187 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_OUT); (yyval.node)->type = "l"; (yyval.node)->name = " | xargs -n 1 "; }
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 190 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_RUN); (yyval.node)->name = (yyvsp[0].string);}
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 193 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); (yyval.node)->s1 = (yyvsp[-2].node);}
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 194 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 197 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-2].node); (yyval.node)->s1 = (yyvsp[0].node);}
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 198 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 201 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_COPT); (yyval.node)->name = "l";}
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 202 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_COPT); (yyval.node)->name = "m";}
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 203 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_COPT); (yyval.node)->name = "c";}
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 204 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_COPT); (yyval.node)->name = "w";}
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 207 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_COUNT); (yyval.node)->type = "li"; (yyval.node)->name = " | ";}
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 208 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_COUNT); (yyval.node)->type = "l"; (yyval.node)->name = " | xargs -n 1 ";}
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 209 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_COUNT); (yyval.node)->name = (yyvsp[0].string);}
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 210 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_COUNT); (yyval.node)->name = "*" ;}
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 213 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node); (yyval.node)->value = (yyvsp[-5].string); (yyval.node)->s1 = (yyvsp[-3].node);}
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 216 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-2].node); (yyval.node)->s1=(yyvsp[0].node);}
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 217 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 220 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_TOPT); (yyval.node)->type = "li"; (yyval.node)->name = " | ";}
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 221 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_TOPT); (yyval.node)->type = "l"; (yyval.node)->name = " | xargs -n 1 ";}
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 222 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_TOPT); (yyval.node)->name = (yyvsp[0].string);}
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 223 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_TOPT); (yyval.node)->name = "*" ;}
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 226 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_TAKE); (yyval.node)->name = "w";}
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 227 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_TAKE); (yyval.node)->name = (yyvsp[0].string);}
#line 2131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 228 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_TAKE); (yyval.node)->name = "c";}
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 231 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_RENAME); (yyval.node)->name = (yyvsp[-1].string); strcat((yyval.node)->name, " "); strcat((yyval.node)->name,(yyvsp[0].string));}
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 233 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 235 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_REMOVE); (yyval.node)->name = (yyvsp[0].string); (yyval.node)->type = "f";}
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 236 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_REMOVE); (yyval.node)->name = (yyvsp[0].string); (yyval.node)->type = "d";}
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 238 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_CLEAR); }
#line 2167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 242 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=ASTCreateNode(A_REPLACE);
	   (yyval.node)->s1 = ASTCreateNode(A_GREP);
	   (yyval.node)->name = (yyvsp[0].string);
	   (yyval.node)->s1->name = (yyvsp[-3].string);
	   (yyval.node)->s1->value = (yyvsp[-2].string);
	}
#line 2178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 250 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-2].node); (yyval.node)->s1 = (yyvsp[0].node);}
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 252 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 255 "comp.y" /* yacc.c:1646  */
    { (yyval.node)=ASTCreateNode(A_SORT); (yyval.node)->type="li"; (yyval.node)->name=" | xargs -n 1";}
#line 2196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 256 "comp.y" /* yacc.c:1646  */
    { (yyval.node)=ASTCreateNode(A_SORT); (yyval.node)->type="l"; (yyval.node)->name= " | ";}
#line 2202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 257 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=ASTCreateNode(A_SORT); (yyval.node)->name = (yyvsp[0].string);}
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 258 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=ASTCreateNode(A_SORT); (yyval.node)->name = "*";}
#line 2214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 261 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-2].node);(yyval.node)->s1 = (yyvsp[0].node);}
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 262 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 265 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=ASTCreateNode(A_SOPT); (yyval.node)->name = "n";}
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 266 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=ASTCreateNode(A_SOPT); (yyval.node)->name = "r";}
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 267 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=ASTCreateNode(A_SOPT); (yyval.node)->name = "f";}
#line 2244 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2248 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 278 "comp.y" /* yacc.c:1906  */


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
		if(strcmp("-c",argv[i])==0){
			cl = 1;
			}
			
	}
	if(!fp) fprintf(stderr,"NO FILE");	
	yyparse();
	emit_ast(program,fp);
	fclose(fp);
}
