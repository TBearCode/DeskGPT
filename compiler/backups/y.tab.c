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
#line 25 "comp.y" /* yacc.c:355  */

	char * string;
	ASTNode * node;
	

#line 240 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 257 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  83
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   122

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  108
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  153

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    37,    37,    42,    46,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      67,    68,    71,    72,    73,    74,    77,    78,    81,    82,
      85,    87,    91,    92,    93,    96,    99,   100,   101,   102,
     105,   108,   109,   110,   111,   112,   115,   116,   117,   118,
     121,   122,   123,   126,   127,   130,   131,   132,   133,   134,
     137,   138,   141,   142,   145,   146,   149,   150,   151,   154,
     157,   158,   161,   164,   167,   168,   171,   172,   175,   176,
     177,   178,   181,   184,   185,   188,   189,   192,   193,   194,
     195,   198,   199,   200,   201,   204,   207,   208,   211,   212,
     213,   214,   217,   218,   219,   222,   224,   226,   227
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_IN", "T_NUM", "T_MAKE", "T_SHOW",
  "T_CD", "T_FIND", "T_GREP", "T_UNIQ", "T_CAT", "T_LESS", "T_CALC",
  "T_REDIRECT", "T_BY", "T_ABOVE", "T_PREV", "T_ROOT", "T_TIME", "T_ME",
  "T_OPEN", "T_ECHO", "T_BASH", "T_WC", "T_L", "T_CUT", "T_THROUGH",
  "T_RENAME", "T_RM", "T_C", "T_M", "T_W", "T_REV", "T_ALL", "T_LONG",
  "T_FILE", "T_FOLDER", "T_LOC", "T_FROM", "T_SEP", "T_LAST", "T_QUIET",
  "T_IGNORE", "T_RECURSE", "T_U", "T_AND", "T_WHITE", "T_COUNT",
  "T_REMOVE", "T_TAKE", "T_OUTPUT", "T_LAST_FILE", "T_ELEM", "\",\"",
  "\"-\"", "$accept", "Program", "CommandList", "Command", "Make", "Show",
  "ShowArgs", "ShowArg", "ShowOpts", "ShowOpt", "Goto", "Location",
  "Where", "WSubject", "Match", "GLoc", "MatchOpts", "MatchOpt", "Uniques",
  "ULoc", "UniqueOpts", "UniqueOpt", "Read", "ReadLoc", "Evaluate", "Open",
  "OpenLoc", "Output", "OutArg", "Run", "Count", "COpts", "COpt",
  "CSubject", "Take", "TOpts", "TOpt", "TArg", "Rename", "Remove",
  "RSubject", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310
};
# endif

#define YYPACT_NINF -73

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-73)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      52,   -24,    33,    71,     6,     7,   -17,     2,    78,     3,
      80,    -3,    87,   -13,   -39,    -2,    37,   -73,    52,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,    88,    89,    11,   -73,   -73,    30,
      39,   -73,   -73,   -73,   -73,   -73,   -73,   -73,    91,    92,
     -73,   -73,   -30,     4,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
      58,    43,   -73,    95,    96,    97,   -73,   100,   -73,   -73,
     -73,   -73,    93,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,    51,    11,    35,   -73,   -73,     1,    42,   -73,   -73,
      53,    -1,   -14,   -73,   -73,   -73,    67,   106,    11,   -73,
     -73,   -73,   -73,   -73,    55,   -73,   -73,   -73,   -73,   -73,
     -73,    57,    34,   -73,   -73,     0,   -73,   -73,    42,    42,
     -73,   -73,   -73,   -73,    59,   -73,   -73,   -73,   -73,    72,
      60,   -73,   -73,    34,   101,     0,   -73,    16,   -73,   -73,
     -73,   -73,   -73
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,     0,     0,     0,    28,    29,    24,
      26,    39,    37,    38,    36,    35,    44,    43,     0,     0,
      45,    40,    48,     0,    70,    71,    69,    72,    74,    75,
      73,    82,    93,    87,    89,    88,    90,    94,    91,    92,
       0,    86,    84,     0,     0,     0,   106,     0,    79,    78,
      80,    81,    76,     1,     3,    20,    21,    32,    33,    34,
      23,    30,     0,     0,    41,    42,     0,     0,    62,    63,
      61,     0,     0,   105,   107,   108,     0,     0,     0,    25,
      27,    50,    52,    51,    49,    55,    56,    57,    58,    59,
      46,    53,     0,    83,    85,     0,    77,    31,     0,     0,
      67,    68,    66,    60,    65,   100,   101,    98,    99,     0,
      97,    47,    54,     0,     0,     0,    64,     0,    96,   103,
     104,   102,    95
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -73,   -73,    99,   -73,   -73,   -73,    22,   -73,   -72,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -57,   -73,   -73,   -73,
     -25,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,    17,   -73,    19,   -73,   -23,   -73,   -73,   -73,   -73,
     -73
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    17,    18,    19,    20,    39,    40,    90,    91,
      21,    45,    22,    51,    23,   114,   120,   121,    24,   100,
     133,   134,    25,    56,    26,    27,    60,    28,    82,    29,
      30,    70,    71,    72,    31,   139,   140,   152,    32,    33,
      76
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      62,    78,    62,   135,   111,    54,    58,    98,    96,    46,
      52,    63,    34,    35,    77,    87,    64,    65,    66,   149,
     109,    53,    63,    74,    75,    97,    47,    64,    65,    66,
      88,    67,    79,    67,   136,   112,   127,    83,    68,    80,
      68,   137,    48,    49,    89,    92,   150,    50,    36,    69,
      81,    69,   138,   113,    55,    59,    99,     1,     2,     3,
       4,     5,     6,   151,     7,     8,   115,    37,    38,    37,
      38,   141,   142,     9,    41,    10,    11,   130,   116,   131,
      12,    57,   132,    61,   117,   118,   119,    42,    43,    44,
      73,    85,    86,    93,    94,    95,   101,   102,   103,   104,
     105,    13,    14,    15,   106,   108,   125,   107,   122,   126,
     128,   129,   144,   143,   145,   110,   147,    84,   146,   124,
     123,     0,   148
};

static const yytype_int16 yycheck[] =
{
       3,     3,     3,     3,     3,     3,     3,     3,    38,     3,
       3,    25,    36,    37,    53,     4,    30,    31,    32,     3,
      92,    38,    25,    36,    37,    55,    20,    30,    31,    32,
      19,    34,    34,    34,    34,    34,   108,     0,    41,    41,
      41,    41,    36,    37,    33,    15,    30,    41,    15,    52,
      52,    52,    52,    52,    52,    52,    52,     5,     6,     7,
       8,     9,    10,    47,    12,    13,    24,    34,    35,    34,
      35,   128,   129,    21,     3,    23,    24,    43,    36,    45,
      28,     3,    48,     3,    42,    43,    44,    16,    17,    18,
       3,     3,     3,    54,     3,     3,    38,    54,     3,     3,
       3,    49,    50,    51,     4,    54,    39,    14,    55,     3,
      55,    54,    40,    54,    54,    93,    15,    18,   143,   102,
     101,    -1,   145
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     7,     8,     9,    10,    12,    13,    21,
      23,    24,    28,    49,    50,    51,    57,    58,    59,    60,
      61,    66,    68,    70,    74,    78,    80,    81,    83,    85,
      86,    90,    94,    95,    36,    37,    15,    34,    35,    62,
      63,     3,    16,    17,    18,    67,     3,    20,    36,    37,
      41,    69,     3,    38,     3,    52,    79,     3,     3,    52,
      82,     3,     3,    25,    30,    31,    32,    34,    41,    52,
      87,    88,    89,     3,    36,    37,    96,    53,     3,    34,
      41,    52,    84,     0,    58,     3,     3,     4,    19,    33,
      64,    65,    15,    54,     3,     3,    38,    55,     3,    52,
      75,    38,    54,     3,     3,     3,     4,    14,    54,    64,
      62,     3,    34,    52,    71,    24,    36,    42,    43,    44,
      72,    73,    55,    89,    87,    39,     3,    64,    55,    54,
      43,    45,    48,    76,    77,     3,    34,    41,    52,    91,
      92,    72,    72,    54,    40,    54,    76,    15,    91,     3,
      30,    47,    93
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    58,    58,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      60,    60,    61,    61,    61,    61,    62,    62,    63,    63,
      64,    64,    65,    65,    65,    66,    67,    67,    67,    67,
      68,    69,    69,    69,    69,    69,    70,    70,    70,    70,
      71,    71,    71,    72,    72,    73,    73,    73,    73,    73,
      74,    74,    75,    75,    76,    76,    77,    77,    77,    78,
      79,    79,    80,    81,    82,    82,    83,    83,    84,    84,
      84,    84,    85,    86,    86,    87,    87,    88,    88,    88,
      88,    89,    89,    89,    89,    90,    91,    91,    92,    92,
      92,    92,    93,    93,    93,    94,    95,    96,    96
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     3,     2,     4,     1,     3,     1,     1,
       1,     3,     1,     1,     1,     2,     1,     1,     1,     1,
       2,     2,     2,     1,     1,     1,     4,     6,     2,     4,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       5,     3,     1,     1,     3,     1,     1,     1,     1,     2,
       1,     1,     2,     2,     1,     1,     2,     4,     1,     1,
       1,     1,     2,     4,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     8,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     2,     2
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
#line 1454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 43 "comp.y" /* yacc.c:1646  */
    { printf("Command List Node");(yyval.node) = ASTCreateNode(A_COMMAND_LIST);
	      (yyval.node)->s1 = (yyvsp[-1].node);
	      (yyval.node)->s2 = (yyvsp[0].node);}
#line 1462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 46 "comp.y" /* yacc.c:1646  */
    { printf("Final Command Node");(yyval.node)=ASTCreateNode(A_COMMAND_LIST); (yyval.node)->s1=(yyvsp[0].node);}
#line 1468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 49 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 50 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 51 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 52 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 53 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 54 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 55 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 56 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 57 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 58 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 59 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 60 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 61 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 62 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 63 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 67 "comp.y" /* yacc.c:1646  */
    { printf("NEW NODE");(yyval.node) = ASTCreateNode(A_MAKE); printf("Setting Name");(yyval.node)->name = (yyvsp[0].string); (yyval.node)->type = "f"; printf("Make node");}
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 68 "comp.y" /* yacc.c:1646  */
    { printf("NEW NODE");(yyval.node) = ASTCreateNode(A_MAKE); (yyval.node)->name = (yyvsp[0].string); (yyval.node)->type = "d"; }
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 71 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_SHOW); }
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 72 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_SHOW); (yyval.node)->s2 = (yyvsp[0].node);}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 73 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_SHOW); (yyval.node)->s1 = (yyvsp[0].node);}
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 74 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_SHOW); (yyval.node)->s1 = (yyvsp[-2].node); (yyval.node)->s2 = (yyvsp[0].node); }
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 77 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 78 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-2].node); (yyval.node)->s1 = (yyvsp[0].node);}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 81 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_SHOW_ARG); (yyval.node)->name = "a";}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 82 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_SHOW_ARG); (yyval.node)->name = "l";}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 86 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 88 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node); (yyval.node)->s1 = (yyvsp[0].node);}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 91 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_SHOW_OPT); (yyval.node)->name = "v";}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 92 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_SHOW_OPT); (yyval.node)->name = "t";}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 93 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_SHOW_OPT); (yyval.node)->name = "r";}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 96 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_GOTO); (yyval.node)->s1 = (yyvsp[0].node);}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 99 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_LOC); (yyval.node)->name = "~";}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 100 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_LOC); (yyval.node)->name = "..";}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 101 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_LOC); (yyval.node)->name = "-";}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 102 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_LOC); (yyval.node)->name = (yyvsp[0].string);}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 105 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 108 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_FIND); (yyval.node)->type = "f"; (yyval.node)->name = (yyvsp[0].string);}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 109 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_FIND); (yyval.node)->type = "d"; (yyval.node)->name = (yyvsp[0].string);}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 110 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_FIND); (yyval.node)->name = "me";}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 111 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_FIND); (yyval.node)->name = (yyvsp[0].string);}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 112 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_FIND); (yyval.node)-> type = "last"; (yyval.node)->name = " | xargs -n 1 ";}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 115 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_GREP); (yyval.node)->name = (yyvsp[-2].string); (yyval.node)->s2 = (yyvsp[0].node); }
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 116 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_GREP); (yyval.node)->name = (yyvsp[-4].string); (yyval.node)->s1 = (yyvsp[-2].node); (yyval.node)->s2 = (yyvsp[0].node);}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 117 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_GREP); (yyval.node)->name = (yyvsp[0].string);}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 118 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_GREP); (yyval.node)->name = (yyvsp[-2].string); (yyval.node)->s1 = (yyvsp[0].node);}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 121 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_GLOC); (yyval.node)->name = (yyvsp[0].string);}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 122 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_GLOC); (yyval.node)->type = "last" ;(yyval.node)->name = " | xargs -n 1 "; }
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 123 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_GLOC); (yyval.node)->name = "*"; }
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 126 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 127 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-2].node); (yyval.node)->s1 = (yyvsp[0].node);}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 130 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_MATCH_OPT); (yyval.node)->name = "c";}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 131 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_MATCH_OPT); (yyval.node)->name = "l";}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 132 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_MATCH_OPT); (yyval.node)->name = "q";}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 133 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_MATCH_OPT); (yyval.node)->name = "i";}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 134 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_MATCH_OPT); (yyval.node)->name = "r";}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 137 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-2].node); (yyval.node)->s1 = (yyvsp[0].node);}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 138 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 141 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_UNIQ); (yyval.node)->name = (yyvsp[0].string);}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 142 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_UNIQ); (yyval.node)->type = "last"; (yyval.node)->name = " | xargs -n 1 ";}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 145 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-2].node); (yyval.node)->s1 = (yyvsp[0].node);}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 146 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 149 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_UNIQ_OPT); (yyval.node)->name = "c";}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 150 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_UNIQ_OPT); (yyval.node)->name = "i";}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 151 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_UNIQ_OPT); (yyval.node)->name = "u";}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 154 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 157 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_READ); (yyval.node)->name = (yyvsp[0].string);}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 158 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_READ); (yyval.node)->type = "last"; (yyval.node)->name = " | xargs -n 1 ";}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 161 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_BC); (yyval.node)->name = (yyvsp[0].string);}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 164 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 167 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=ASTCreateNode(A_OLOC); (yyval.node)->name = (yyvsp[0].string);}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 168 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=ASTCreateNode(A_OLOC); (yyval.node)->type = "last"; (yyval.node)->name = " | xargs -n 1";}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 171 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node); }
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 172 "comp.y" /* yacc.c:1646  */
    {(yyval.node)= (yyvsp[-2].node); (yyval.node)->s1 = ASTCreateNode(A_DEST); (yyval.node)->s1->name = (yyvsp[0].string);}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 175 "comp.y" /* yacc.c:1646  */
    { (yyval.node)= ASTCreateNode(A_OUT); (yyval.node)->name = "*";}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 176 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_OUT); (yyval.node)->name = (yyvsp[0].string);}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 177 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_OUT); (yyval.node)->type = "li"; (yyval.node)->name = " | "; }
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 178 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_OUT); (yyval.node)->type = "l"; (yyval.node)->name = " | xargs -n 1 "; }
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 181 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_RUN); (yyval.node)->name = (yyvsp[0].string);}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 184 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); (yyval.node)->s1 = (yyvsp[-2].node);}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 185 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 188 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-2].node); (yyval.node)->s1 = (yyvsp[0].node);}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 189 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 192 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_COPT); (yyval.node)->name = "l";}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 193 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_COPT); (yyval.node)->name = "m";}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 194 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_COPT); (yyval.node)->name = "c";}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 195 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_COPT); (yyval.node)->name = "w";}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 198 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_COUNT); (yyval.node)->type = "li"; (yyval.node)->name = " | ";}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 199 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_COUNT); (yyval.node)->type = "l"; (yyval.node)->name = " | xargs -n 1 ";}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 200 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_COUNT); (yyval.node)->name = (yyvsp[0].string);}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 201 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_COUNT); (yyval.node)->name = "*" ;}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 204 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node); (yyval.node)->value = (yyvsp[-5].string); (yyval.node)->s1 = (yyvsp[-3].node);}
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 207 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-2].node); (yyval.node)->s1=(yyvsp[0].node);}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 208 "comp.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 211 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_TOPT); (yyval.node)->type = "li"; (yyval.node)->name = " | ";}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 212 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_TOPT); (yyval.node)->type = "l"; (yyval.node)->name = " | xargs -n 1 ";}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 213 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_TOPT); (yyval.node)->name = (yyvsp[0].string);}
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 214 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = ASTCreateNode(A_TOPT); (yyval.node)->name = "*" ;}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 217 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_TAKE); (yyval.node)->name = "w";}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 218 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_TAKE); (yyval.node)->name = (yyvsp[0].string);}
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 219 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_TAKE); (yyval.node)->name = "c";}
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 222 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_RENAME); (yyval.node)->name = (yyvsp[-1].string); strcat((yyval.node)->name, ", "); strcat((yyval.node)->name,(yyvsp[0].string));}
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 224 "comp.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 226 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_REMOVE); (yyval.node)->name = (yyvsp[0].string); (yyval.node)->type = "f";}
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 227 "comp.y" /* yacc.c:1646  */
    { (yyval.node) = ASTCreateNode(A_REMOVE); (yyval.node)->name = (yyvsp[0].string); (yyval.node)->type = "d";}
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2096 "y.tab.c" /* yacc.c:1646  */
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
#line 229 "comp.y" /* yacc.c:1906  */


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
