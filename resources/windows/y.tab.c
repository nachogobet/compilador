
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
#line 1 "../../src/sintax.y"

#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"

FILE  *yyin; //Archivo de Entrada


/* Line 189 of yacc.c  */
#line 82 "y.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOKEN_ID = 258,
     CONST_INT = 259,
     CONST_STR = 260,
     CONST_FLOAT = 261,
     PR_MAIN = 262,
     PR_DIM = 263,
     PR_ENDIM = 264,
     PR_IGUALES = 265,
     PR_FILTER = 266,
     PR_WRITE = 267,
     PR_READ = 268,
     PR_IF = 269,
     PR_THEN = 270,
     PR_ENDIF = 271,
     PR_ELSE = 272,
     PR_NOT = 273,
     PR_WHILE = 274,
     PR_BEGIN = 275,
     PR_END = 276,
     PAR_ABRE = 277,
     PAR_CIERRA = 278,
     COR_ABRE = 279,
     COR_CIERRA = 280,
     COMA = 281,
     OP_LOG_AND = 282,
     OP_LOG_OR = 283,
     OP_LOG_NOT = 284,
     OP_SUMA = 285,
     OP_RESTA = 286,
     OP_MUL = 287,
     OP_DIV = 288,
     OP_MAYOR = 289,
     OP_MAYOR_IGUAL = 290,
     OP_MENOR = 291,
     OP_MENOR_IGUAL = 292,
     OP_DISTINTO = 293,
     OP_IGUAL_IGUAL = 294,
     OP_IGUAL = 295,
     OP_AS = 296,
     OP_DIM = 297,
     PR_FLOAT = 298,
     PR_INT = 299,
     PR_STRING = 300
   };
#endif
/* Tokens.  */
#define TOKEN_ID 258
#define CONST_INT 259
#define CONST_STR 260
#define CONST_FLOAT 261
#define PR_MAIN 262
#define PR_DIM 263
#define PR_ENDIM 264
#define PR_IGUALES 265
#define PR_FILTER 266
#define PR_WRITE 267
#define PR_READ 268
#define PR_IF 269
#define PR_THEN 270
#define PR_ENDIF 271
#define PR_ELSE 272
#define PR_NOT 273
#define PR_WHILE 274
#define PR_BEGIN 275
#define PR_END 276
#define PAR_ABRE 277
#define PAR_CIERRA 278
#define COR_ABRE 279
#define COR_CIERRA 280
#define COMA 281
#define OP_LOG_AND 282
#define OP_LOG_OR 283
#define OP_LOG_NOT 284
#define OP_SUMA 285
#define OP_RESTA 286
#define OP_MUL 287
#define OP_DIV 288
#define OP_MAYOR 289
#define OP_MAYOR_IGUAL 290
#define OP_MENOR 291
#define OP_MENOR_IGUAL 292
#define OP_DISTINTO 293
#define OP_IGUAL_IGUAL 294
#define OP_IGUAL 295
#define OP_AS 296
#define OP_DIM 297
#define PR_FLOAT 298
#define PR_INT 299
#define PR_STRING 300




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 10 "../../src/sintax.y"

int intval;
double val;
char *str_val;



/* Line 214 of yacc.c  */
#line 216 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 228 "y.tab.c"

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
#define YYFINAL  40
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   127

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  59
/* YYNRULES -- Number of states.  */
#define YYNSTATES  115

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

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
      45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,    11,    14,    17,    19,    21,    24,
      26,    28,    30,    32,    34,    36,    45,    49,    51,    60,
      64,    66,    68,    70,    73,    76,    79,    85,    93,    95,
      99,   103,   107,   110,   116,   120,   122,   126,   130,   132,
     136,   140,   142,   144,   146,   148,   150,   155,   161,   167,
     169,   173,   175,   177,   179,   181,   183,   185,   187,   189
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,    48,    -1,     7,     8,    66,     9,    49,
      -1,     7,    49,    -1,    50,    49,    -1,    50,    -1,    50,
      -1,    50,    49,    -1,    58,    -1,    62,    -1,    61,    -1,
      55,    -1,    51,    -1,    53,    -1,    10,    22,    63,    26,
      24,    52,    25,    23,    -1,    63,    26,    52,    -1,    63,
      -1,    11,    22,    59,    26,    24,    54,    25,    23,    -1,
       3,    26,    54,    -1,     3,    -1,    56,    -1,    57,    -1,
      13,     3,    -1,    12,     3,    -1,    12,     5,    -1,    14,
      59,    15,    49,    16,    -1,    14,    59,    15,    49,    17,
      49,    16,    -1,    60,    -1,    60,    27,    60,    -1,    60,
      28,    60,    -1,    63,    70,    63,    -1,    18,    63,    -1,
      19,    59,    20,    49,    21,    -1,     3,    40,    63,    -1,
      64,    -1,    63,    30,    64,    -1,    63,    31,    64,    -1,
      65,    -1,    64,    33,    65,    -1,    64,    32,    65,    -1,
       5,    -1,     4,    -1,     6,    -1,     3,    -1,    63,    -1,
      42,    24,    67,    25,    -1,     3,    25,    41,    24,    69,
      -1,     3,    26,    68,    26,    69,    -1,     3,    -1,     3,
      26,    68,    -1,    44,    -1,    43,    -1,    45,    -1,    34,
      -1,    36,    -1,    37,    -1,    35,    -1,    39,    -1,    38,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    62,    62,    68,    74,    80,    86,    92,    98,   104,
     110,   116,   122,   128,   134,   140,   146,   152,   158,   164,
     170,   176,   182,   188,   194,   200,   206,   212,   218,   224,
     230,   236,   242,   248,   254,   260,   266,   272,   278,   284,
     290,   296,   302,   308,   314,   320,   326,   332,   332,   338,
     344,   350,   356,   362,   368,   374,   380,   386,   392,   398
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOKEN_ID", "CONST_INT", "CONST_STR",
  "CONST_FLOAT", "PR_MAIN", "PR_DIM", "PR_ENDIM", "PR_IGUALES",
  "PR_FILTER", "PR_WRITE", "PR_READ", "PR_IF", "PR_THEN", "PR_ENDIF",
  "PR_ELSE", "PR_NOT", "PR_WHILE", "PR_BEGIN", "PR_END", "PAR_ABRE",
  "PAR_CIERRA", "COR_ABRE", "COR_CIERRA", "COMA", "OP_LOG_AND",
  "OP_LOG_OR", "OP_LOG_NOT", "OP_SUMA", "OP_RESTA", "OP_MUL", "OP_DIV",
  "OP_MAYOR", "OP_MAYOR_IGUAL", "OP_MENOR", "OP_MENOR_IGUAL",
  "OP_DISTINTO", "OP_IGUAL_IGUAL", "OP_IGUAL", "OP_AS", "OP_DIM",
  "PR_FLOAT", "PR_INT", "PR_STRING", "$accept", "pgm", "programa",
  "lista_sentencias", "sentencia", "iguales", "lista_expresiones",
  "filter", "lista_variables", "io", "entrada", "salida", "condicional",
  "condicion", "comparacion", "iteracion", "asignacion", "expresion",
  "termino", "factor", "declaracion_variables", "lista_variables_tipos",
  "variables", "tipo_dato", "comparador", 0
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
     295,   296,   297,   298,   299,   300
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    48,    48,    48,    49,    49,    50,
      50,    50,    50,    50,    50,    51,    52,    52,    53,    54,
      54,    55,    55,    56,    57,    57,    58,    58,    59,    59,
      59,    60,    60,    61,    62,    63,    63,    63,    64,    64,
      64,    65,    65,    65,    65,    65,    66,    67,    67,    68,
      68,    69,    69,    69,    70,    70,    70,    70,    70,    70
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     5,     2,     2,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     8,     3,     1,     8,     3,
       1,     1,     1,     2,     2,     2,     5,     7,     1,     3,
       3,     3,     2,     5,     3,     1,     3,     3,     1,     3,
       3,     1,     1,     1,     1,     1,     4,     5,     5,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     6,    13,    14,    12,    21,    22,     9,    11,    10,
       0,     0,     4,     7,     0,     0,    24,    25,    23,    44,
      42,    41,    43,     0,     0,    28,    45,    35,    38,     0,
       1,     5,    34,     0,     0,     8,    45,     0,    32,     0,
       0,     0,     0,     0,    54,    57,    55,    56,    59,    58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
      30,    45,    35,    35,    31,    38,    38,     0,     0,     0,
       3,     0,     0,    26,     0,    33,     0,     0,    46,     0,
      45,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,     0,     0,    15,    16,    19,    18,    52,
      51,    53,    47,    50,    48
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     9,    10,    22,    23,    12,    89,    13,    92,    14,
      15,    16,    17,    34,    35,    18,    19,    36,    37,    38,
      44,    79,    96,   112,    60
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -38
static const yytype_int8 yypact[] =
{
      -2,   -37,    12,    -1,    17,    11,     4,    44,    44,    55,
     -38,    24,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
      79,    35,   -38,    24,    79,    44,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,    79,    60,    18,    33,    21,   -38,    39,
     -38,   -38,    56,    70,    90,   -38,    50,    74,    56,    24,
      44,    44,    79,    79,   -38,   -38,   -38,   -38,   -38,   -38,
      79,    79,    79,    24,    98,    24,    78,    80,    49,   -38,
     -38,    43,    21,    21,    56,   -38,   -38,    82,    65,    81,
     -38,    79,   102,   -38,    24,   -38,    66,   105,   -38,    84,
      26,    85,    87,    94,    89,    88,    91,    92,    79,   102,
      93,   -38,   -15,   105,   -15,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -38,   -38,   -38,    -5,   118,   -38,    22,   -38,    20,   -38,
     -38,   -38,   -38,    -6,    42,   -38,   -38,   -20,    45,    34,
     -38,   -38,    19,    23,   -38
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -46
static const yytype_int8 yytable[] =
{
      42,     1,    39,    20,    46,     2,    41,    28,     3,     4,
       5,     6,     7,    48,    26,     1,    27,     8,    45,    47,
      21,    24,     3,     4,     5,     6,     7,     1,   109,   110,
     111,     8,    71,    71,     3,     4,     5,     6,     7,    25,
      74,    71,    71,     8,    68,    50,    51,    29,    30,    31,
      32,   -17,    98,    61,    62,    40,    52,    53,    77,    63,
      80,    90,    33,    52,    53,    83,    84,    54,    55,    56,
      57,    58,    59,    52,    53,    49,    66,    43,    90,    93,
      52,    53,    29,    30,    31,    32,    52,    53,   -45,   -45,
      86,    87,    69,    70,    64,    75,    76,    72,    73,    65,
      67,    78,    81,    85,    82,    91,    88,    94,    95,    97,
     101,    99,   100,   102,   103,   105,   108,   104,    11,   107,
     106,     0,   113,     0,     0,     0,     0,   114
};

static const yytype_int8 yycheck[] =
{
      20,     3,     8,    40,    24,     7,    11,     3,    10,    11,
      12,    13,    14,    33,     3,     3,     5,    19,    23,    25,
       8,    22,    10,    11,    12,    13,    14,     3,    43,    44,
      45,    19,    52,    53,    10,    11,    12,    13,    14,    22,
      60,    61,    62,    19,    49,    27,    28,     3,     4,     5,
       6,    25,    26,    32,    33,     0,    30,    31,    63,    20,
      65,    81,    18,    30,    31,    16,    17,    34,    35,    36,
      37,    38,    39,    30,    31,    15,    26,    42,    98,    84,
      30,    31,     3,     4,     5,     6,    30,    31,    32,    33,
      25,    26,    50,    51,    24,    61,    62,    52,    53,     9,
      26,     3,    24,    21,    24,     3,    25,    41,     3,    25,
      16,    26,    25,    24,    26,    23,    23,    26,     0,    99,
      98,    -1,   103,    -1,    -1,    -1,    -1,   104
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     7,    10,    11,    12,    13,    14,    19,    47,
      48,    50,    51,    53,    55,    56,    57,    58,    61,    62,
      40,     8,    49,    50,    22,    22,     3,     5,     3,     3,
       4,     5,     6,    18,    59,    60,    63,    64,    65,    59,
       0,    49,    63,    42,    66,    49,    63,    59,    63,    15,
      27,    28,    30,    31,    34,    35,    36,    37,    38,    39,
      70,    32,    33,    20,    24,     9,    26,    26,    49,    60,
      60,    63,    64,    64,    63,    65,    65,    49,     3,    67,
      49,    24,    24,    16,    17,    21,    25,    26,    25,    52,
      63,     3,    54,    49,    41,     3,    68,    25,    26,    26,
      25,    16,    24,    26,    26,    23,    52,    54,    23,    43,
      44,    45,    69,    68,    69
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
#line 63 "../../src/sintax.y"
    {
	puts("COMPILACION EXITOSA\n");
	puts("-------------------\n");
}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 69 "../../src/sintax.y"
    {
	puts("Código con variables\n");
	puts("-------------------\n");
}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 75 "../../src/sintax.y"
    {
	puts("Código sin variables\n");
	puts("-------------------\n");
}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 81 "../../src/sintax.y"
    {
	puts("Varias sentencias\n");
	puts("-------------------\n");
}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 87 "../../src/sintax.y"
    {
	puts("Última sentencia\n");
	puts("-------------------\n");
}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 93 "../../src/sintax.y"
    {
	puts("Una sola sentencia\n");
	puts("-------------------\n");
}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 99 "../../src/sintax.y"
    {
	puts("Varias sentencias\n");
	puts("-------------------\n");
}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 105 "../../src/sintax.y"
    {
	puts("Condicional\n");
	puts("-------------------\n");
}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 111 "../../src/sintax.y"
    {
	puts("Asignación\n");
	puts("-------------------\n");
}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 117 "../../src/sintax.y"
    {
	puts("Iteración\n");
	puts("-------------------\n");
}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 123 "../../src/sintax.y"
    {
	puts("Operación de entrada salidas\n");
	puts("-------------------\n");
}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 129 "../../src/sintax.y"
    {
	puts("Operación de iguales\n");
	puts("-------------------\n");
}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 135 "../../src/sintax.y"
    {
	puts("Operación de filters\n");
	puts("-------------------\n");
}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 141 "../../src/sintax.y"
    {
	puts("iguales : PR_IGUALES PAR_ABRE expresion COMA COR_ABRElista_expresiones COR_CIERRA PAR_CIERRA\n");
	puts("-------------------\n");
}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 147 "../../src/sintax.y"
    {
	puts("Lista de expresiones\n");
	puts("-------------------\n");
}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 153 "../../src/sintax.y"
    {
	puts("Última expresión\n");
	puts("-------------------\n");
}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 159 "../../src/sintax.y"
    {
	puts("filter : PR_FILTER PAR_ABRE condicion COMA COR_ABRE lista_variables COR_CIERRA PAR_CIERRA\n");
	puts("-------------------\n");
}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 165 "../../src/sintax.y"
    {
	puts("Lista de variables\n");
	puts("-------------------\n");
}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 171 "../../src/sintax.y"
    {
	puts("Última variable\n");
	puts("-------------------\n");
}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 177 "../../src/sintax.y"
    {
	puts("io : entrada\n");
	puts("-------------------\n");
}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 183 "../../src/sintax.y"
    {
	puts("io : salida\n");
	puts("-------------------\n");
}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 189 "../../src/sintax.y"
    {
	puts("entrada : READ id\n");
	puts("-------------------\n");
}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 195 "../../src/sintax.y"
    {
	puts("salida : PR_WRITE id\n");
	puts("-------------------\n");
}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 201 "../../src/sintax.y"
    {
	puts("salida : PR_WRITE cte\n");
	puts("-------------------\n");
}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 207 "../../src/sintax.y"
    {
	puts("Condicional sin ELSE\n");
	puts("-------------------\n");
}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 213 "../../src/sintax.y"
    {
	puts("Condicional con ELSE\n");
	puts("-------------------\n");
}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 219 "../../src/sintax.y"
    {
	puts("condicion : comparacion\n");
	puts("-------------------\n");
}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 225 "../../src/sintax.y"
    {
	puts("condicion : comparacion and comparacion\n");
	puts("-------------------\n");
}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 231 "../../src/sintax.y"
    {
	puts("condicion : comparacion or comparacion\n");
	puts("-------------------\n");
}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 237 "../../src/sintax.y"
    {
	puts("comparacion : expresion comparador expresion\n");
	puts("-------------------\n");
}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 243 "../../src/sintax.y"
    {
	puts("comparacion : PR_NOT expresion\n");
	puts("-------------------\n");
}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 249 "../../src/sintax.y"
    {
	puts("Iteración\n");
	puts("-------------------\n");
}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 255 "../../src/sintax.y"
    {
	puts("Asignación\n");
	puts("-------------------\n");
}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 261 "../../src/sintax.y"
    {
	puts("Asignación\n");
	puts("-------------------\n");
}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 267 "../../src/sintax.y"
    {
	puts("Suma\n");
	puts("-------------------\n");
}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 273 "../../src/sintax.y"
    {
	puts("Resta\n");
	puts("-------------------\n");
}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 279 "../../src/sintax.y"
    {
	puts("termino : factor\n");
	puts("-------------------\n");
}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 285 "../../src/sintax.y"
    {
	puts("División\n");
	puts("-------------------\n");
}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 291 "../../src/sintax.y"
    {
	puts("Multiplicación\n");
	puts("-------------------\n");
}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 297 "../../src/sintax.y"
    {
	puts("factor : cte\n");
	puts("-------------------\n");
}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 303 "../../src/sintax.y"
    {
	puts("factor : cte\n");
	puts("-------------------\n");
}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 309 "../../src/sintax.y"
    {
	puts("factor : cte\n");
	puts("-------------------\n");
}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 315 "../../src/sintax.y"
    {
	puts("factor : TOKEN_ID\n");
	puts("-------------------\n");
}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 321 "../../src/sintax.y"
    {
	puts("factor : expresion\n");
	puts("-------------------\n");
}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 327 "../../src/sintax.y"
    {
	puts("Declaración de variables\n");
	puts("-------------------\n");
}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 333 "../../src/sintax.y"
    {
	puts("Lista de variables\n");
	puts("-------------------\n");
}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 339 "../../src/sintax.y"
    {
	puts("variables : TOKEN_ID\n");
	puts("-------------------\n");
}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 345 "../../src/sintax.y"
    {
	puts("variables : TOKEN_ID COMA variables\n");
	puts("-------------------\n");
}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 351 "../../src/sintax.y"
    {
	puts("PR_INT\n");
	puts("-------------------\n");
}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 357 "../../src/sintax.y"
    {
	puts("PR_FLOAT\n");
	puts("-------------------\n");
}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 363 "../../src/sintax.y"
    {
	puts("PR_STRING\n");
	puts("-------------------\n");
}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 369 "../../src/sintax.y"
    {
	puts("OP_MAYOR\n");
	puts("-------------------\n");
}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 375 "../../src/sintax.y"
    {
	puts("OP_MENOR\n");
	puts("-------------------\n");
}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 381 "../../src/sintax.y"
    {
	puts("OP_MENOR_IGUAL\n");
	puts("-------------------\n");
}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 387 "../../src/sintax.y"
    {
	puts("OP_MAYOR_IGUAL\n");
	puts("-------------------\n");
}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 393 "../../src/sintax.y"
    {
	puts("OP_IGUAL_IGUAL\n");
	puts("-------------------\n");
}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 399 "../../src/sintax.y"
    {
	puts("OP_DISTINTO\n");
	puts("-------------------\n");
}
    break;



/* Line 1455 of yacc.c  */
#line 2096 "y.tab.c"
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
#line 404 "../../src/sintax.y"


//función para realizar todo lo que haga falta previo a terminar
void finally(FILE *yyin){
	fclose(yyin);
}

t_tabla_simbolos tabla_simbolos[2000];



void agregar_simbolo(char * nombre, int tipo, int valor,char * alias) ;
void agregar_simbolo(char * nombre, int tipo, int valor,char * alias) ;
void agregar_simbolo(char * nombre, int tipo, float valor,char * alias) ;
void agregar_simbolo(char * nombre, int tipo, char * valor,int longitud ,char * alias) ;


int main(int argc, char **argv ) {
	puts("Corriendo el compilador...");

	++argv, --argc; 

	if ( argc > 0 ) {
	     puts("true");
	     yyin = fopen( argv[0], "r" );
     }	else {
	     puts("false");
	     yyin = stdin;

     }


     int algo;
     while(algo = yylex()) {
		printf("%d ", algo);
     }


	finally(yyin);
	return EXIT_SUCCESS;
}

int yyerror(void)
{
	printf("Syntax Error\n");
	system ("Pause");
	exit (1);
}


