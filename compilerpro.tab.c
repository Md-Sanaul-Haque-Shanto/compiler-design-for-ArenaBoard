
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "compilerpro.y"

	#include<stdio.h>
	#include<conio.h>
	#include<string.h>
	#include<math.h>
	
	int yylex();
	int yyparse();
	int yyerror(char *s);
	
	#define YYDEBUG 1
	#define mx 1024
	
	char vars[mx][mx];
	int type_Var[mx];
	int value_Int[mx];
	double value_Double[mx];
	char* value_String[mx];

	int varCnt = 0;

	int check(char *s){
		for(int i=0;i<varCnt;i++){
			if(strcmp(s,vars[i])==0){
				return i;
			}
		}
		return -1;
	}


/* Line 189 of yacc.c  */
#line 105 "compilerpro.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     DOUBLE = 259,
     STRING = 260,
     MAIN = 261,
     END = 262,
     START = 263,
     VAR = 264,
     T_INT = 265,
     T_DOUBLE = 266,
     T_CHAR = 267,
     INCREMENT = 268,
     DECREMENT = 269,
     FACT = 270,
     WHILE = 271,
     FROM = 272,
     TO = 273,
     INC = 274,
     PRINT = 275,
     SWITCH = 276,
     CASE = 277,
     DEFAULT = 278,
     BREAK = 279,
     SIN = 280,
     COS = 281,
     TAN = 282,
     LOG10 = 283,
     LOG = 284,
     MAX = 285,
     MIN = 286,
     PRIME = 287,
     then = 288,
     IF = 289,
     ELSE = 290,
     G_EQUAL = 291,
     L_EQUAL = 292,
     N_EQUAL = 293,
     EQUAL = 294
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 32 "compilerpro.y"

	int integer;
	double floating;
	char* string;



/* Line 214 of yacc.c  */
#line 188 "compilerpro.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 200 "compilerpro.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   493

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNRULES -- Number of states.  */
#define YYNSTATES  174

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    46,     2,     2,
      49,    50,    44,    42,    52,    43,     2,    45,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    51,    48,
      36,    53,    37,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    47,     2,     2,     2,     2,     2,
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
      35,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     8,     9,    12,    14,    17,    20,    26,
      36,    45,    57,    66,    75,    83,    85,    88,    92,   100,
     107,   110,   113,   116,   120,   122,   126,   128,   132,   134,
     138,   140,   144,   146,   150,   152,   154,   156,   158,   162,
     166,   170,   174,   178,   182,   186,   190,   194,   198,   202,
     206,   211,   216,   221,   226,   231,   238,   245,   250
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      55,     0,    -1,     6,     8,    56,     7,    -1,    -1,    56,
      57,    -1,    48,    -1,    68,    48,    -1,    61,    48,    -1,
      20,    49,     9,    50,    48,    -1,    17,     3,    18,     3,
      19,     3,     8,    68,     7,    -1,    34,    49,    68,    50,
       8,    68,    48,     7,    -1,    34,    68,     8,    68,    48,
       7,    35,     8,    68,    48,     7,    -1,    16,     9,    13,
      36,     3,     8,    68,     7,    -1,    16,     9,    14,    37,
       3,     8,    68,     7,    -1,    21,    49,    68,    50,     8,
      58,     7,    -1,    59,    -1,    59,    60,    -1,    59,    42,
      59,    -1,    22,     3,    51,    68,    48,    24,    48,    -1,
      23,    51,    68,    48,    24,    48,    -1,    10,    62,    -1,
      11,    64,    -1,    12,    66,    -1,    62,    52,    63,    -1,
      63,    -1,     9,    53,    68,    -1,     9,    -1,    64,    52,
      65,    -1,    65,    -1,     9,    53,    68,    -1,     9,    -1,
      66,    52,    67,    -1,    67,    -1,     9,    53,     5,    -1,
       9,    -1,     3,    -1,     4,    -1,     9,    -1,    68,    42,
      68,    -1,    68,    43,    68,    -1,    68,    44,    68,    -1,
      68,    45,    68,    -1,    68,    47,    68,    -1,    68,    46,
      68,    -1,    68,    37,    68,    -1,    68,    36,    68,    -1,
      68,    41,    68,    -1,    68,    40,    68,    -1,    68,    39,
      68,    -1,    68,    38,    68,    -1,    25,    49,    68,    50,
      -1,    26,    49,    68,    50,    -1,    27,    49,    68,    50,
      -1,    28,    49,    68,    50,    -1,    29,    49,    68,    50,
      -1,    30,    49,    68,    52,    68,    50,    -1,    31,    49,
      68,    52,    68,    50,    -1,    32,    49,    68,    50,    -1,
      15,    49,    68,    50,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    60,    60,    63,    64,    67,    68,    70,    72,    90,
      96,   105,   114,   127,   140,   144,   145,   148,   149,   152,
     156,   158,   160,   164,   165,   168,   184,   202,   203,   206,
     222,   240,   242,   245,   261,   279,   281,   283,   300,   302,
     304,   306,   308,   310,   320,   322,   324,   326,   328,   330,
     332,   337,   342,   347,   352,   357,   367,   378,   395
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "DOUBLE", "STRING", "MAIN", "END",
  "START", "VAR", "T_INT", "T_DOUBLE", "T_CHAR", "INCREMENT", "DECREMENT",
  "FACT", "WHILE", "FROM", "TO", "INC", "PRINT", "SWITCH", "CASE",
  "DEFAULT", "BREAK", "SIN", "COS", "TAN", "LOG10", "LOG", "MAX", "MIN",
  "PRIME", "then", "IF", "ELSE", "'<'", "'>'", "G_EQUAL", "L_EQUAL",
  "N_EQUAL", "EQUAL", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "';'",
  "'('", "')'", "':'", "','", "'='", "$accept", "program", "begin",
  "statement", "B", "C", "D", "declaration", "INTID", "INT_ID", "DOUBLEID",
  "DOUBLE_ID", "CHARID", "CHAR_ID", "expres", 0
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
     285,   286,   287,   288,   289,   290,    60,    62,   291,   292,
     293,   294,    43,    45,    42,    47,    37,    94,    59,    40,
      41,    58,    44,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    56,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    58,    58,    59,    59,    60,
      61,    61,    61,    62,    62,    63,    63,    64,    64,    65,
      65,    66,    66,    67,    67,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     2,     1,     2,     2,     5,     9,
       8,    11,     8,     8,     7,     1,     2,     3,     7,     6,
       2,     2,     2,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     4,     4,     4,     4,     6,     6,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,     1,     0,    35,    36,     2,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     4,     0,
       0,    26,    20,    24,    30,    21,    28,    34,    22,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    45,    44,    49,    48,    47,    46,    38,    39,    40,
      41,    43,    42,    25,    23,    29,    27,    33,    31,    58,
       0,     0,     0,     0,     0,    50,    51,    52,    53,    54,
       0,     0,    57,     0,     0,     0,     0,     0,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    15,
      55,    56,     0,     0,     0,     0,     0,     0,    14,     0,
       0,    16,     0,     0,    12,    13,     0,     0,     0,    17,
      10,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    18,    19
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,    28,   138,   139,   151,    29,    32,    33,
      35,    36,    38,    39,    30
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -42
static const yytype_int16 yypact[] =
{
       9,     8,    17,   -42,   -42,   130,   -42,   -42,   -42,   -42,
      20,    33,    35,     0,    42,    47,     4,     5,     6,     7,
      10,    11,    12,    13,    14,    16,    43,   -42,   -42,    18,
     380,    23,    15,   -42,    36,    45,   -42,    40,    46,   -42,
      87,    -6,    39,    90,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,   169,   -42,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,   -42,    87,
      20,    87,    33,    95,    35,   215,    65,    66,   101,    55,
     230,   245,   260,   275,   290,   305,   181,   198,   320,   335,
      87,   -41,   -41,   -41,   -41,   -41,   -41,   -34,   -34,    60,
      60,    60,    60,   157,   -42,   157,   -42,   -42,   -42,   -42,
     107,   108,   102,    74,   115,   -42,   -42,   -42,   -42,   -42,
      87,    87,   -42,   116,   393,   117,   118,   124,   -42,   106,
     350,   365,    87,   122,    87,    87,   135,   127,   131,   -14,
     -42,   -42,   406,   109,    41,   129,    87,    97,   -42,    98,
     106,   -42,   146,   155,   -42,   -42,   145,    87,    87,   -42,
     -42,    87,   -42,   419,   432,   445,   156,   205,   147,   182,
     183,   -42,   -42,   -42
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -42,   -42,   -42,   -42,   -42,    29,   -42,   -42,   -42,   162,
     -42,   174,   -42,   173,   -26
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      54,    62,    63,    64,    65,    66,    67,    76,    77,   149,
      64,    65,    66,    67,    75,     1,     3,     4,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,   150,    31,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,    34,   103,    37,   105,     6,     7,   154,    40,
      42,    41,     9,    43,    44,    45,    46,    78,    13,    47,
      48,    49,    50,    51,   124,    52,    55,    70,    18,    19,
      20,    21,    22,    23,    24,    25,    69,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    71,
       6,     7,    53,    73,   130,   131,     9,    72,    74,    79,
     107,   110,    13,   111,   112,   113,   142,    67,   144,   145,
     125,   126,    18,    19,    20,    21,    22,    23,    24,    25,
     156,   127,   128,   129,   132,   134,   135,   136,   137,   143,
     147,   163,   164,     6,     7,   165,   155,     8,   148,     9,
      10,    11,    12,   146,   153,    13,    14,    15,   157,   158,
      16,    17,   162,   160,   171,    18,    19,    20,    21,    22,
      23,    24,    25,   161,    26,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    90,    27,   159,
     169,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,   170,
     172,   173,   104,   120,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,   106,   108,     0,     0,
     121,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,     0,     0,   109,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,     0,     0,
     114,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,     0,     0,   115,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,     0,     0,
     116,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,     0,     0,   117,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,     0,     0,
     118,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,     0,     0,   119,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,     0,     0,
     122,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,     0,     0,   123,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,     0,     0,
     140,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,     0,     0,   141,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,   133,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,   152,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,   166,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
     167,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,   168
};

static const yytype_int16 yycheck[] =
{
      26,    42,    43,    44,    45,    46,    47,    13,    14,    23,
      44,    45,    46,    47,    40,     6,     8,     0,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    42,     9,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,     9,    69,     9,    71,     3,     4,     7,    49,
       3,     9,     9,    49,    49,    49,    49,    18,    15,    49,
      49,    49,    49,    49,    90,    49,    48,    52,    25,    26,
      27,    28,    29,    30,    31,    32,    53,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    53,
       3,     4,    49,    53,   120,   121,     9,    52,    52,     9,
       5,    36,    15,    37,     3,    50,   132,    47,   134,   135,
       3,     3,    25,    26,    27,    28,    29,    30,    31,    32,
     146,    19,    48,     8,     8,     8,     8,     3,    22,     7,
       3,   157,   158,     3,     4,   161,     7,     7,     7,     9,
      10,    11,    12,     8,    35,    15,    16,    17,    51,    51,
      20,    21,     7,     7,     7,    25,    26,    27,    28,    29,
      30,    31,    32,     8,    34,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,     8,    48,   150,
      24,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    24,
      48,    48,    70,    52,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    72,    74,    -1,    -1,
      52,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    50,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      50,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    50,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      50,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    50,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      50,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    50,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      50,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    50,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      50,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    50,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    55,     8,     0,    56,     3,     4,     7,     9,
      10,    11,    12,    15,    16,    17,    20,    21,    25,    26,
      27,    28,    29,    30,    31,    32,    34,    48,    57,    61,
      68,     9,    62,    63,     9,    64,    65,     9,    66,    67,
      49,     9,     3,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    68,    48,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    53,
      52,    53,    52,    53,    52,    68,    13,    14,    18,     9,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
       8,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    63,    68,    65,     5,    67,    50,
      36,    37,     3,    50,    50,    50,    50,    50,    50,    50,
      52,    52,    50,    50,    68,     3,     3,    19,    48,     8,
      68,    68,     8,    48,     8,     8,     3,    22,    58,    59,
      50,    50,    68,     7,    68,    68,     8,     3,     7,    23,
      42,    60,    48,    35,     7,     7,    68,    51,    51,    59,
       7,     8,     7,    68,    68,    68,    48,    48,    48,    24,
      24,     7,    48,    48
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1455 of yacc.c  */
#line 60 "compilerpro.y"
    {printf("\nprogram end\n\n");;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 63 "compilerpro.y"
    {printf("program beagan.\n");;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 67 "compilerpro.y"
    {;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 68 "compilerpro.y"
    {;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 70 "compilerpro.y"
    {printf("variable declared.\n");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 72 "compilerpro.y"
    {
													int chk = check((yyvsp[(3) - (5)].string));
													if(chk==-1){
														printf("Unavailabe");
													}
													else{
														if(type_Var[chk]==0){
															printf("%s is an Integer.Value of %s is: %d\n",(yyvsp[(3) - (5)].string),(yyvsp[(3) - (5)].string),value_Int[chk]);
														}
														else if(type_Var[chk]==1){
															printf("%s is a Double.Value of %s is: %.4lf\n",(yyvsp[(3) - (5)].string),(yyvsp[(3) - (5)].string),value_Double[chk]);
														}
														else{
															printf("%s is a String.Value of %s is: %s\n",(yyvsp[(3) - (5)].string),(yyvsp[(3) - (5)].string),value_String[chk]);
														}
													}
												;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 90 "compilerpro.y"
    {
													for(int i=(yyvsp[(2) - (9)].integer); i<=(yyvsp[(4) - (9)].integer);i+=(yyvsp[(6) - (9)].integer)){
														printf("expression in %dth : %.4lf\n",i,(yyvsp[(8) - (9)].floating));
													}
												;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 96 "compilerpro.y"
    {
														if((yyvsp[(3) - (8)].floating)){
															printf("Value of expression in if block is %.4lf\n",(yyvsp[(5) - (8)].integer));
														}
														else{
															printf("Could not enter if block\n");
														}
													;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 105 "compilerpro.y"
    {
														if((yyvsp[(2) - (11)].floating)){
															printf("Value of expression in if block is %.4lf\n",(yyvsp[(4) - (11)].floating));
														}
														else{
															printf("Value of expression in else block is %.4lf\n",(yyvsp[(9) - (11)].floating));
														}
													;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 114 "compilerpro.y"
    {
													int ix = check((yyvsp[(2) - (8)].string));
													if(ix==-1 || type_Var[ix]>0){
															printf("Error in incrementing: non integer value.\n");
														}
													else{
														int val = value_Int[ix];
														while(val++<(yyvsp[(5) - (8)].integer)){
															printf("Inside while loop.\nValue of expression: %.4lf\n",(yyvsp[(7) - (8)].floating));
														}
													}
												;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 127 "compilerpro.y"
    {
														int ix = check((yyvsp[(2) - (8)].string));
														if(ix==-1 || type_Var[ix]>0){
															printf("Can't increment non integer value");
														}
														else{
															int val = value_Int[ix];
															while(val-->(yyvsp[(5) - (8)].integer)){
																printf("Inside while loop.\nValue of expression:%.4lf\n",(yyvsp[(7) - (8)].floating));
															}
														}
													;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 140 "compilerpro.y"
    {;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 149 "compilerpro.y"
    {;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 152 "compilerpro.y"
    {;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 168 "compilerpro.y"
    {
											int ix = check((yyvsp[(1) - (3)].string));
											if(ix==-1){
												ix = varCnt;
												strcpy(vars[ix],(yyvsp[(1) - (3)].string));
												varCnt++;
												value_Int[ix] = (int)(yyvsp[(3) - (3)].floating);
												type_Var[ix] = 0;
												printf("%s is stored at index :%d: with value :%d\n",(yyvsp[(1) - (3)].string),ix,value_Int[ix]);
											}
											else{
												printf("%s is already Declared\n",(yyvsp[(1) - (3)].string));
											}
											
										;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 184 "compilerpro.y"
    {
											int ix = check((yyvsp[(1) - (1)].string));
											if(ix==-1){
												ix = varCnt;
												strcpy(vars[ix],(yyvsp[(1) - (1)].string));
												varCnt++;
												value_Int[ix] = 0;
												type_Var[ix] = 0;
												printf("%s is stored at index :%d: with value :%d\n",(yyvsp[(1) - (1)].string),ix,value_Int[ix]);
											}
											else{
												printf("%s is already Declared\n",(yyvsp[(1) - (1)].string));
											}
											
										;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 206 "compilerpro.y"
    {
											int ix = check((yyvsp[(1) - (3)].string));
											if(ix==-1){
												ix = varCnt;
												strcpy(vars[ix],(yyvsp[(1) - (3)].string));
												varCnt++;
												value_Double[ix] = (yyvsp[(3) - (3)].floating);
												type_Var[ix] = 1;
												printf("%s is stored at index :%d: with value :%.6lf\n",(yyvsp[(1) - (3)].string),ix,value_Double[ix]);
											}
											else{
												printf("%s is already Declared\n",(yyvsp[(1) - (3)].string));
											}
											
										;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 222 "compilerpro.y"
    {
											int ix = check((yyvsp[(1) - (1)].string));
											if(ix==-1){
												ix = varCnt;
												strcpy(vars[ix],(yyvsp[(1) - (1)].string));
												varCnt++;
												value_Double[ix] = 0;
												type_Var[ix] = 1;
												printf("%s is stored at index :%d: with value :%.6lf\n",(yyvsp[(1) - (1)].string),ix,value_Double[ix]);
											}
											else{
												printf("%s is already Declared\n",(yyvsp[(1) - (1)].string));
											}
											
										;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 245 "compilerpro.y"
    {
											int ix = check((yyvsp[(1) - (3)].string));
											if(ix==-1){
												ix = varCnt;
												strcpy(vars[ix],(yyvsp[(1) - (3)].string));
												varCnt++;
												value_String[ix] = (yyvsp[(3) - (3)].string);
												type_Var[ix] = 2;
												printf("%s is stored at index :%d: with value :%s\n",(yyvsp[(1) - (3)].string),ix,value_String[ix]);
											}
											else{
												printf("%s is already Declared\n",(yyvsp[(1) - (3)].string));
											}
											
										;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 261 "compilerpro.y"
    {
											int ix = check((yyvsp[(1) - (1)].string));
											if(ix==-1){
												ix = varCnt;
												strcpy(vars[ix],(yyvsp[(1) - (1)].string));
												varCnt++;
												value_String[ix] = "";
												type_Var[ix] = 2;
												printf("%s is stored at index :%d: with value :%s\n",(yyvsp[(1) - (1)].string),ix,value_String[ix]);
											}
											else{
												printf("%s is already Declared\n",(yyvsp[(1) - (1)].string));
											}
											
										;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 279 "compilerpro.y"
    {(yyval.floating) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 281 "compilerpro.y"
    {(yyval.floating) = (yyvsp[(1) - (1)].floating);;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 283 "compilerpro.y"
    {
											int ix = check((yyvsp[(1) - (1)].string));
											if(ix==-1){
												printf("No such variable\n");
											}
											else{
												if(type_Var[ix]==0)
													(yyval.floating) = value_Int[ix];
												else if(type_Var[ix]==1){
													(yyval.floating) = value_Double[ix];
												}
												else{
													printf("Can't assign string to numeric values\n");
												}
											}
										;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 300 "compilerpro.y"
    {(yyval.floating) = (yyvsp[(1) - (3)].floating) + (yyvsp[(3) - (3)].floating);;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 302 "compilerpro.y"
    {(yyval.floating) = (yyvsp[(1) - (3)].floating) - (yyvsp[(3) - (3)].floating);;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 304 "compilerpro.y"
    {(yyval.floating) = (yyvsp[(1) - (3)].floating) * (yyvsp[(3) - (3)].floating);;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 306 "compilerpro.y"
    {(yyval.floating) = (yyvsp[(1) - (3)].floating) / (yyvsp[(3) - (3)].floating);;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 308 "compilerpro.y"
    {(yyval.floating) = powl((yyvsp[(1) - (3)].floating),(yyvsp[(3) - (3)].floating));;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 310 "compilerpro.y"
    {
								int x1 = ceil((yyvsp[(1) - (3)].floating));
								int x2 = floor((yyvsp[(1) - (3)].floating));
								int y1 = ceil((yyvsp[(3) - (3)].floating));
								int y2 = floor((yyvsp[(3) - (3)].floating));
								if(x1==x2 && y1==y2){
									(yyval.floating) = (int) (yyvsp[(1) - (3)].floating) % (int) (yyvsp[(3) - (3)].floating);
								}
							;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 320 "compilerpro.y"
    {(yyval.floating) = ((yyvsp[(1) - (3)].floating) > (yyvsp[(3) - (3)].floating));;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 322 "compilerpro.y"
    {(yyval.floating) = ((yyvsp[(1) - (3)].floating) < (yyvsp[(3) - (3)].floating));;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 324 "compilerpro.y"
    {(yyval.floating) = ((yyvsp[(1) - (3)].floating) ==(yyvsp[(3) - (3)].floating));;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 326 "compilerpro.y"
    {(yyval.floating) = ((yyvsp[(1) - (3)].floating)!=(yyvsp[(3) - (3)].floating));;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 328 "compilerpro.y"
    {(yyval.floating) = ((yyvsp[(1) - (3)].floating)<=(yyvsp[(3) - (3)].floating));;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 330 "compilerpro.y"
    {(yyval.floating) = ((yyvsp[(1) - (3)].floating)<=(yyvsp[(3) - (3)].floating));;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 332 "compilerpro.y"
    {
														float x = sin((yyvsp[(3) - (4)].floating)*3.1416/180);
														printf("Value of Sin is %f.\n",x); (yyval.floating)=sin((yyvsp[(3) - (4)].floating)*3.1416/180);
													;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 337 "compilerpro.y"
    {
														float x = cos((yyvsp[(3) - (4)].floating)*3.1416/180);
														printf("Value of Cos is %f.\n",x); (yyval.floating)=cos((yyvsp[(3) - (4)].floating)*3.1416/180);
													;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 342 "compilerpro.y"
    {
														float x = tan((yyvsp[(3) - (4)].floating)*3.1416/180);
														printf("Value of Tan is %f.\n",x); (yyval.floating)=tan((yyvsp[(3) - (4)].floating)*3.1416/180);
													;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 347 "compilerpro.y"
    {
														float x = (log((yyvsp[(3) - (4)].floating)*1.0)/log(10.0));
														printf("Value of Log10 is %f.\n",x); (yyval.floating)=(log((yyvsp[(3) - (4)].floating)*1.0)/log(10.0));
													;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 352 "compilerpro.y"
    {
														float x = (log((yyvsp[(3) - (4)].floating)));
														printf("Value of Log is %f.\n",x); (yyval.floating)=(log((yyvsp[(3) - (4)].floating)));
													;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 357 "compilerpro.y"
    {
														int a = (yyvsp[(3) - (6)].floating);
														int b = (yyvsp[(5) - (6)].floating);
														if(a>b){
															printf("%d is greater.\n",a);
														}
														else{
															printf("%d is greater.\n",b);
														}
													;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 367 "compilerpro.y"
    {
														int a = (yyvsp[(3) - (6)].floating);
														int b = (yyvsp[(5) - (6)].floating);
														if(a<b){
															printf("%d is smaller.\n",a);
														}
														else{
															printf("%d is smaller.\n",b);
														}
													;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 378 "compilerpro.y"
    {
														int i = 2;
														int x = (yyvsp[(3) - (4)].floating);
														int chk = 0;
														for(i=2;i<=x/2;i++)
														{
															if(x%i==0)
															{
																printf("%d is not prime.\n",x);
																chk = 1;
																break;
															}
														}
														if(!chk) printf("%d is prime.\n",x);
														
													;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 395 "compilerpro.y"
    {
														int x = (yyvsp[(3) - (4)].floating);
														if(x==0) printf("\nFactorial of %d is 1.\n",x);
														else{
															int ans=1,i;
															for(i=2;i<=x;i++)
																ans*=i;
															printf("\nFactorial of %d is %d.\n",x,ans);
														}
													;}
    break;



/* Line 1455 of yacc.c  */
#line 2117 "compilerpro.tab.c"
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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



/* Line 1675 of yacc.c  */
#line 407 "compilerpro.y"




