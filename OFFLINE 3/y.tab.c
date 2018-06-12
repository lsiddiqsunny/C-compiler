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
#line 1 "parser.y" /* yacc.c:339  */

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include "1505069_SymbolTable.h"
//#define YYSTYPE SymbolInfo*


using namespace std;

int yyparse(void);
int yylex(void);
extern FILE *yyin;
FILE *fp;
FILE *error=fopen("error.txt","w");
FILE *parsertext= fopen("parsertext.txt","w");
int line_count=1;
int error_count=0;


SymbolTable *table=new SymbolTable(100,parsertext);
vector<SymbolInfo*>para_list;
vector<SymbolInfo*>dec_list;
vector<SymbolInfo*>arg_list;


void yyerror(char *s)
{
	fprintf(stderr,"Line no %d : %s\n",line_count,s);

}




#line 104 "y.tab.c" /* yacc.c:339  */

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
    IF = 258,
    ELSE = 259,
    FOR = 260,
    WHILE = 261,
    DO = 262,
    BREAK = 263,
    INT = 264,
    FLOAT = 265,
    CHAR = 266,
    DOUBLE = 267,
    VOID = 268,
    RETURN = 269,
    SWITCH = 270,
    CASE = 271,
    DEFAULT = 272,
    CONTINUE = 273,
    CONST_INT = 274,
    CONST_FLOAT = 275,
    CONST_CHAR = 276,
    ADDOP = 277,
    MULOP = 278,
    INCOP = 279,
    RELOP = 280,
    ASSIGNOP = 281,
    LOGICOP = 282,
    BITOP = 283,
    NOT = 284,
    DECOP = 285,
    LPAREN = 286,
    RPAREN = 287,
    LCURL = 288,
    RCURL = 289,
    LTHIRD = 290,
    RTHIRD = 291,
    COMMA = 292,
    SEMICOLON = 293,
    STRING = 294,
    ID = 295,
    PRINTLN = 296,
    LOWER_THAN_ELSE = 297
  };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define FOR 260
#define WHILE 261
#define DO 262
#define BREAK 263
#define INT 264
#define FLOAT 265
#define CHAR 266
#define DOUBLE 267
#define VOID 268
#define RETURN 269
#define SWITCH 270
#define CASE 271
#define DEFAULT 272
#define CONTINUE 273
#define CONST_INT 274
#define CONST_FLOAT 275
#define CONST_CHAR 276
#define ADDOP 277
#define MULOP 278
#define INCOP 279
#define RELOP 280
#define ASSIGNOP 281
#define LOGICOP 282
#define BITOP 283
#define NOT 284
#define DECOP 285
#define LPAREN 286
#define RPAREN 287
#define LCURL 288
#define RCURL 289
#define LTHIRD 290
#define RTHIRD 291
#define COMMA 292
#define SEMICOLON 293
#define STRING 294
#define ID 295
#define PRINTLN 296
#define LOWER_THAN_ELSE 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 52 "parser.y" /* yacc.c:355  */

        SymbolInfo* symbolinfo;
		vector<string>*s;

#line 233 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 250 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   186

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  121

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    61,    61,    65,    70,    76,    79,    83,    89,   104,
     114,   114,   136,   136,   152,   157,   162,   167,   174,   180,
     188,   207,   210,   213,   218,   223,   228,   234,   242,   246,
     252,   257,   262,   267,   272,   277,   282,   286,   290,   296,
     300,   306,   321,   354,   359,   377,   383,   401,   407,   426,
     433,   433,   447,   454,   485,   496,   507,   516,   522,   556,
     561,   567,   573,   579,   587,   591,   594,   599
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "FOR", "WHILE", "DO",
  "BREAK", "INT", "FLOAT", "CHAR", "DOUBLE", "VOID", "RETURN", "SWITCH",
  "CASE", "DEFAULT", "CONTINUE", "CONST_INT", "CONST_FLOAT", "CONST_CHAR",
  "ADDOP", "MULOP", "INCOP", "RELOP", "ASSIGNOP", "LOGICOP", "BITOP",
  "NOT", "DECOP", "LPAREN", "RPAREN", "LCURL", "RCURL", "LTHIRD", "RTHIRD",
  "COMMA", "SEMICOLON", "STRING", "ID", "PRINTLN", "LOWER_THAN_ELSE",
  "$accept", "start", "program", "unit", "func_declaration",
  "func_definition", "$@1", "$@2", "parameter_list", "compound_statement",
  "var_declaration", "type_specifier", "declaration_list", "statements",
  "statement", "expression_statement", "variable", "expression",
  "logic_expression", "rel_expression", "simple_expression", "$@3", "term",
  "unary_expression", "factor", "argument_list", "arguments", YY_NULLPTR
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
     295,   296,   297
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
static const yytype_int16 yypact[] =
{
      53,   -73,   -73,   -73,    15,    53,   -73,   -73,   -73,   -73,
     -14,   -73,   -73,    -1,    10,     3,     9,    -3,   -73,    11,
     -15,    14,    28,    40,   -73,    45,    41,    53,   -73,   -73,
      65,    67,   -73,   -73,    45,    48,    54,    60,    62,    64,
      63,   -73,   -73,    63,    63,    63,   -73,   -73,    25,    66,
     -73,   -73,    59,   106,   -73,   -73,    -6,    68,   -73,    75,
      49,    81,   -73,   -73,   -73,   -73,   -73,    63,    21,    63,
      72,    -5,   -73,   -73,    82,    63,    63,    73,    83,   -73,
     -73,   -73,    63,   -73,   -73,    63,   -73,    63,    63,    85,
      21,    89,   -73,   -73,   -73,    90,    86,    88,    95,   -73,
     -73,    63,   107,   -73,   145,    63,   145,   -73,    63,   -73,
      92,    81,   127,   100,   -73,   -73,   -73,   145,   145,   -73,
     -73
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    21,    22,    23,     0,     2,     4,     6,     7,     5,
       0,     1,     3,    26,     0,     0,     0,     0,    20,    12,
       0,    17,     0,    24,     9,     0,    10,     0,    16,    27,
       0,     0,    13,     8,     0,    15,     0,     0,     0,     0,
       0,    60,    61,     0,     0,     0,    19,    39,    41,     0,
      32,    30,     0,     0,    28,    31,    57,     0,    43,    45,
      47,    49,    52,    56,    11,    14,    25,     0,     0,     0,
       0,    57,    54,    55,     0,    65,     0,     0,    26,    18,
      29,    62,     0,    63,    40,     0,    50,     0,     0,     0,
       0,     0,    38,    59,    67,     0,    64,     0,     0,    44,
      46,     0,    48,    53,     0,     0,     0,    58,     0,    42,
       0,    51,    34,     0,    36,    66,    37,     0,     0,    35,
      33
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -73,   -73,   -73,   128,   -73,   -73,   -73,   -73,   -73,   -11,
      46,     6,   -73,   -73,   -49,   -63,   -43,   -38,   -72,    51,
      47,   -73,    37,   -35,   -73,   -73,   -73
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,     7,     8,    34,    25,    20,    50,
      51,    52,    14,    53,    54,    55,    56,    57,    58,    59,
      60,   101,    61,    62,    63,    95,    96
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      71,    71,    70,    94,    80,    90,    10,    74,    72,    73,
      99,    10,     1,     2,    32,    11,     3,    26,    81,    81,
      82,    21,    27,    64,    83,    83,    13,   105,    22,    89,
      15,    91,    71,    35,    16,    19,   115,    23,    97,    71,
      41,    42,    71,    43,    71,    71,     9,    17,    18,    24,
      44,     9,    45,   103,    28,   112,    75,   114,    71,    47,
      76,    48,     1,     2,    29,    71,     3,   113,   119,   120,
      37,    86,    38,    39,    87,    30,     1,     2,    31,    33,
       3,    40,    41,    42,    36,    43,    41,    42,    65,    43,
      66,    67,    44,    68,    45,    69,    44,    77,    45,    78,
      31,    46,    85,    48,    88,    47,    84,    48,    49,    37,
      92,    38,    39,    98,    93,     1,     2,   104,    16,     3,
      40,   106,   107,   108,   109,    41,    42,   110,    43,    86,
     116,   117,   118,    12,   102,    44,   100,    45,   111,    31,
      79,     0,     0,     0,    47,     0,    48,    49,    37,     0,
      38,    39,     0,     0,     1,     2,     0,     0,     3,    40,
       0,     0,     0,     0,    41,    42,     0,    43,     0,     0,
       0,     0,     0,     0,    44,     0,    45,     0,    31,     0,
       0,     0,     0,    47,     0,    48,    49
};

static const yytype_int8 yycheck[] =
{
      43,    44,    40,    75,    53,    68,     0,    45,    43,    44,
      82,     5,     9,    10,    25,     0,    13,    32,    24,    24,
      26,    15,    37,    34,    30,    30,    40,    90,    19,    67,
      31,    69,    75,    27,    35,    32,   108,    40,    76,    82,
      19,    20,    85,    22,    87,    88,     0,    37,    38,    38,
      29,     5,    31,    88,    40,   104,    31,   106,   101,    38,
      35,    40,     9,    10,    36,   108,    13,   105,   117,   118,
       3,    22,     5,     6,    25,    35,     9,    10,    33,    38,
      13,    14,    19,    20,    19,    22,    19,    20,    40,    22,
      36,    31,    29,    31,    31,    31,    29,    31,    31,    40,
      33,    34,    27,    40,    23,    38,    38,    40,    41,     3,
      38,     5,     6,    40,    32,     9,    10,    32,    35,    13,
      14,    32,    32,    37,    36,    19,    20,    32,    22,    22,
      38,     4,    32,     5,    87,    29,    85,    31,   101,    33,
      34,    -1,    -1,    -1,    38,    -1,    40,    41,     3,    -1,
       5,     6,    -1,    -1,     9,    10,    -1,    -1,    13,    14,
      -1,    -1,    -1,    -1,    19,    20,    -1,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,    -1,
      -1,    -1,    -1,    38,    -1,    40,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    10,    13,    44,    45,    46,    47,    48,    53,
      54,     0,    46,    40,    55,    31,    35,    37,    38,    32,
      51,    54,    19,    40,    38,    50,    32,    37,    40,    36,
      35,    33,    52,    38,    49,    54,    19,     3,     5,     6,
      14,    19,    20,    22,    29,    31,    34,    38,    40,    41,
      52,    53,    54,    56,    57,    58,    59,    60,    61,    62,
      63,    65,    66,    67,    52,    40,    36,    31,    31,    31,
      60,    59,    66,    66,    60,    31,    35,    31,    40,    34,
      57,    24,    26,    30,    38,    27,    22,    25,    23,    60,
      58,    60,    38,    32,    61,    68,    69,    60,    40,    61,
      62,    64,    63,    66,    32,    58,    32,    32,    37,    36,
      32,    65,    57,    60,    57,    61,    38,     4,    32,    57,
      57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    46,    46,    47,    47,
      49,    48,    50,    48,    51,    51,    51,    51,    52,    52,
      53,    54,    54,    54,    55,    55,    55,    55,    56,    56,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    58,
      58,    59,    59,    60,    60,    61,    61,    62,    62,    63,
      64,    63,    65,    65,    66,    66,    66,    67,    67,    67,
      67,    67,    67,    67,    68,    68,    69,    69
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     6,     5,
       0,     7,     0,     6,     4,     3,     2,     1,     3,     2,
       3,     1,     1,     1,     3,     6,     1,     4,     1,     2,
       1,     1,     1,     7,     5,     7,     5,     5,     3,     1,
       2,     1,     4,     1,     3,     1,     3,     1,     3,     1,
       0,     4,     1,     3,     2,     2,     1,     1,     4,     3,
       1,     1,     2,     2,     1,     0,     3,     1
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
#line 61 "parser.y" /* yacc.c:1646  */
    {	}
#line 1427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 65 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : program->program unit\n\n",line_count);
						fprintf(parsertext,"%s %s\n\n",(yyvsp[-1].symbolinfo)->get_name().c_str(),(yyvsp[0].symbolinfo)->get_name().c_str()); 
						(yyval.symbolinfo)->set_name((yyvsp[-1].symbolinfo)->get_name()+(yyvsp[0].symbolinfo)->get_name());
						}
#line 1436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 70 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : program->unit\n\n",line_count);
	fprintf(parsertext,"%s\n\n",(yyvsp[0].symbolinfo)->get_name().c_str());
	(yyval.symbolinfo)->set_name((yyvsp[0].symbolinfo)->get_name());
	}
#line 1445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 76 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : unit->var_declaration\n\n",line_count);
						fprintf(parsertext,"%s\n\n",(yyvsp[0].symbolinfo)->get_name().c_str()); 
						(yyval.symbolinfo)->set_name((yyvsp[0].symbolinfo)->get_name()+"\n");}
#line 1453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 79 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : unit->func_declaration\n\n",line_count);
	 					fprintf(parsertext,"%s\n\n",(yyvsp[0].symbolinfo)->get_name().c_str()); 
						 (yyval.symbolinfo)->set_name((yyvsp[0].symbolinfo)->get_name()+"\n");
						}
#line 1462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 83 "parser.y" /* yacc.c:1646  */
    { fprintf(parsertext,"Line at %d : unit->func_definition\n\n",line_count);
	 					 fprintf(parsertext,"%s\n\n",(yyvsp[0].symbolinfo)->get_name().c_str());
						 (yyval.symbolinfo)->set_name((yyvsp[0].symbolinfo)->get_name()+"\n");
						 }
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 89 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : func_declaration->type_specifier ID LPAREN parameter_list RPAREN SEMICOLON\n\n",line_count);
		fprintf(parsertext,"%s %s(%s);\n\n",(yyvsp[-5].symbolinfo)->get_name().c_str(),(yyvsp[-4].symbolinfo)->get_name().c_str(),(yyvsp[-2].symbolinfo)->get_name().c_str());
		SymbolInfo *s=table->lookup((yyvsp[-4].symbolinfo)->get_name());
				if(s==0){
					table->Insert((yyvsp[-4].symbolinfo)->get_name(),"ID","Function");
				} 
				s=table->lookup((yyvsp[-4].symbolinfo)->get_name());
				s->set_isFunction();
				for(int i=0;i<para_list.size();i++){
					s->get_isFunction()->add_number_of_parameter(para_list[i]->get_name(),para_list[i]->get_dectype());
					//cout<<para_list[i]->get_dectype()<<endl;
				}
				para_list.clear();s->get_isFunction()->set_return_type((yyvsp[-5].symbolinfo)->get_name());
		(yyval.symbolinfo)->set_name((yyvsp[-5].symbolinfo)->get_name()+" "+(yyvsp[-4].symbolinfo)->get_name()+"("+(yyvsp[-2].symbolinfo)->get_name()+");");
		}
#line 1491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 104 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : func_declaration->type_specifier ID LPAREN RPAREN SEMICOLON\n\n",line_count);
				fprintf(parsertext,"%s %s();\n\n",(yyvsp[-4].symbolinfo)->get_name().c_str(),(yyvsp[-3].symbolinfo)->get_name().c_str());
				SymbolInfo *s=table->lookup((yyvsp[-3].symbolinfo)->get_name());
				if(s==0){
					table->Insert((yyvsp[-3].symbolinfo)->get_name(),"ID","Function");
				}
				(yyval.symbolinfo)->set_name((yyvsp[-4].symbolinfo)->get_name()+" "+(yyvsp[-3].symbolinfo)->get_name()+"();");
		}
#line 1504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 114 "parser.y" /* yacc.c:1646  */
    {
				SymbolInfo *s=table->lookup((yyvsp[-3].symbolinfo)->get_name());
				if(s==0){
					table->InsertPrev((yyvsp[-3].symbolinfo)->get_name(),"ID","Function");
					} 
				}
#line 1515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 120 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : func_definition->type_specifier ID LPAREN parameter_list RPAREN compound_statement \n\n",line_count);
				fprintf(parsertext,"%s %s(%s) %s \n\n",(yyvsp[-6].symbolinfo)->get_name().c_str(),(yyvsp[-5].symbolinfo)->get_name().c_str(),(yyvsp[-3].symbolinfo)->get_name().c_str(),(yyvsp[0].symbolinfo)->get_name().c_str());
				SymbolInfo *s=table->lookup((yyvsp[-5].symbolinfo)->get_name());
				if(s==0){
					table->InsertPrev((yyvsp[-5].symbolinfo)->get_name(),"ID","Function");
				}
				s=table->lookup((yyvsp[-5].symbolinfo)->get_name());
				s->set_isFunction();
				//cout<<s->get_isFunction()->get_number_of_parameter()<<endl;
				for(int i=0;i<para_list.size();i++){
					s->get_isFunction()->add_number_of_parameter(para_list[i]->get_name(),para_list[i]->get_dectype());
					//cout<<para_list[i]->get_dectype()<<endl;
				}
				para_list.clear();s->get_isFunction()->set_return_type((yyvsp[-6].symbolinfo)->get_name());
				(yyval.symbolinfo)->set_name((yyvsp[-6].symbolinfo)->get_name()+" "+(yyvsp[-5].symbolinfo)->get_name()+"("+(yyvsp[-3].symbolinfo)->get_name()+")"+(yyvsp[0].symbolinfo)->get_name());
				}
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 136 "parser.y" /* yacc.c:1646  */
    { SymbolInfo *s=table->lookup((yyvsp[-2].symbolinfo)->get_name());
											if(s==0){
												table->InsertPrev((yyvsp[-2].symbolinfo)->get_name(),"ID","Function");
											}
											s=table->lookup((yyvsp[-2].symbolinfo)->get_name());
											s->set_isFunction();
											(yyvsp[-3].symbolinfo)->set_name((yyvsp[-3].symbolinfo)->get_name()+" "+(yyvsp[-2].symbolinfo)->get_name()+"()");
											}
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 143 "parser.y" /* yacc.c:1646  */
    {
											fprintf(parsertext,"Line at %d : func_definition->type_specifier ID LPAREN RPAREN compound_statement\n\n",line_count);
											fprintf(parsertext,"%s %s\n\n",(yyvsp[-5].symbolinfo)->get_name().c_str(),(yyvsp[0].symbolinfo)->get_name().c_str());
											(yyval.symbolinfo)->set_name((yyvsp[-5].symbolinfo)->get_name()+(yyvsp[0].symbolinfo)->get_name());
			
					}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 152 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : parameter_list->parameter_list COMMA type_specifier ID\n\n",line_count);
															fprintf(parsertext,"%s,%s %s\n\n",(yyvsp[-3].symbolinfo)->get_name().c_str(),(yyvsp[-1].symbolinfo)->get_name().c_str(),(yyvsp[0].symbolinfo)->get_name().c_str());
															 para_list.push_back(new SymbolInfo((yyvsp[0].symbolinfo)->get_name(),"ID",(yyvsp[-1].symbolinfo)->get_name()));
															(yyval.symbolinfo)->set_name((yyvsp[-3].symbolinfo)->get_name()+","+(yyvsp[-1].symbolinfo)->get_name()+" "+(yyvsp[0].symbolinfo)->get_name());
															}
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 157 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : parameter_list->parameter_list COMMA type_specifier\n\n",line_count);
											fprintf(parsertext,"%s,%s\n\n",(yyvsp[-2].symbolinfo)->get_name().c_str(),(yyvsp[0].symbolinfo)->get_name().c_str());
											(yyval.symbolinfo)->set_name((yyvsp[-2].symbolinfo)->get_name()+","+(yyvsp[0].symbolinfo)->get_name());

											}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 162 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : parameter_list->type_specifier ID\n\n",line_count);
		 					fprintf(parsertext,"%s %s\n\n",(yyvsp[-1].symbolinfo)->get_name().c_str(),(yyvsp[0].symbolinfo)->get_name().c_str());
							para_list.push_back(new SymbolInfo((yyvsp[0].symbolinfo)->get_name(),"ID",(yyvsp[-1].symbolinfo)->get_name()));
		 					(yyval.symbolinfo)->set_name((yyvsp[-1].symbolinfo)->get_name()+" "+(yyvsp[0].symbolinfo)->get_name());
							}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 167 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : parameter_list->type_specifier\n\n",line_count);
			fprintf(parsertext,"%s \n\n",(yyvsp[0].symbolinfo)->get_name().c_str());
			(yyval.symbolinfo)->set_name((yyvsp[0].symbolinfo)->get_name()+" ");
		}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 174 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : compound_statement->LCURL statements RCURL\n\n",line_count);
											fprintf(parsertext,"{%s}\n\n",(yyvsp[-1].symbolinfo)->get_name().c_str());
											(yyval.symbolinfo)->set_name("{\n"+(yyvsp[-1].symbolinfo)->get_name()+"\n}");
											table->printall();
											table->Exit_Scope();
											}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 180 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : compound_statement->LCURL RCURL\n\n",line_count);
			 				fprintf(parsertext,"{}\n\n");
			 				(yyval.symbolinfo)->set_name("{}");
							table->printall();
							table->Exit_Scope();
			 }
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 188 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : var_declaration->type_specifier declaration_list SEMICOLON\n\n",line_count);
															fprintf(parsertext,"%s %s;\n\n",(yyvsp[-2].symbolinfo)->get_name().c_str(),(yyvsp[-1].symbolinfo)->get_name().c_str());
															for(int i=0;i<dec_list.size();i++){
																if(table->lookupcurrent(dec_list[i]->get_name())){
																	 error_count++;
																	fprintf(error,"Error at Line No.%d:  Multiple Declaration of %s \n\n",line_count,dec_list[i]->get_name().c_str());
																	continue;
																}
																if(dec_list[i]->get_type().size()==3){
																	dec_list[i]->set_type(dec_list[i]->get_type().substr(0,dec_list[i]->get_type().size () - 1));
																	table->Insert(dec_list[i]->get_name(),dec_list[i]->get_type(),(yyvsp[-2].symbolinfo)->get_name()+"array");
																}else
																table->Insert(dec_list[i]->get_name(),dec_list[i]->get_type(),(yyvsp[-2].symbolinfo)->get_name());
															}
															dec_list.clear();
															(yyval.symbolinfo)->set_name((yyvsp[-2].symbolinfo)->get_name()+" "+(yyvsp[-1].symbolinfo)->get_name()+";");
															}
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 207 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : type_specifier	: INT\n\n",line_count);fprintf(parsertext,"int \n\n");
				(yyval.symbolinfo)->set_name("int ");
				}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 210 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : type_specifier	: FLOAT\n\n",line_count);fprintf(parsertext,"float \n\n");
		 (yyval.symbolinfo)->set_name("float ");
		 }
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 213 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : type_specifier	: VOID\n\n",line_count);fprintf(parsertext,"void \n\n");
		 (yyval.symbolinfo)->set_name("void ");
		 }
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 218 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : declaration_list->declaration_list COMMA ID\n\n",line_count);
											fprintf(parsertext,"%s,%s\n\n",(yyvsp[-2].symbolinfo)->get_name().c_str(),(yyvsp[0].symbolinfo)->get_name().c_str());
												dec_list.push_back(new SymbolInfo((yyvsp[0].symbolinfo)->get_name(),"ID"));
											(yyval.symbolinfo)->set_name((yyvsp[-2].symbolinfo)->get_name()+","+(yyvsp[0].symbolinfo)->get_name());
											}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 223 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : declaration_list->declaration_list COMMA ID LTHIRD CONST_INT RTHIRD\n\n",line_count);
		   														fprintf(parsertext,"%s,%s[%s]\n\n",(yyvsp[-5].symbolinfo)->get_name().c_str(),(yyvsp[-3].symbolinfo)->get_name().c_str(),(yyvsp[-1].symbolinfo)->get_name().c_str());
																dec_list.push_back(new SymbolInfo((yyvsp[-3].symbolinfo)->get_name(),"IDa"));
																(yyval.symbolinfo)->set_name((yyvsp[-5].symbolinfo)->get_name()+","+(yyvsp[-3].symbolinfo)->get_name()+"["+(yyvsp[-1].symbolinfo)->get_name()+"]");
																   }
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 228 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : declaration_list->ID\n\n",line_count);
		   fprintf(parsertext,"%s\n\n",(yyvsp[0].symbolinfo)->get_name().c_str());
		   	dec_list.push_back(new SymbolInfo((yyvsp[0].symbolinfo)->get_name(),"ID"));
			(yyval.symbolinfo)->set_name((yyvsp[0].symbolinfo)->get_name());
		
		   }
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 234 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : declaration_list->ID LTHIRD CONST_INT RTHIRD\n\n",line_count);
		   fprintf(parsertext,"%s[%s]\n\n",(yyvsp[-3].symbolinfo)->get_name().c_str(),(yyvsp[-1].symbolinfo)->get_name().c_str());
		   	dec_list.push_back(new SymbolInfo((yyvsp[-3].symbolinfo)->get_name(),"IDa"));
		   	(yyval.symbolinfo)->set_name((yyvsp[-3].symbolinfo)->get_name()+"["+(yyvsp[-1].symbolinfo)->get_name()+"]");

		   }
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 242 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : statements->statement\n\n",line_count);
						fprintf(parsertext,"%s\n\n",(yyvsp[0].symbolinfo)->get_name().c_str()); 
						(yyval.symbolinfo)->set_name((yyvsp[0].symbolinfo)->get_name());
						}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 246 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : statements->statements statement\n\n",line_count);
	   						fprintf(parsertext,"%s %s\n\n",(yyvsp[-1].symbolinfo)->get_name().c_str(),(yyvsp[0].symbolinfo)->get_name().c_str()); 
							   (yyval.symbolinfo)->set_name((yyvsp[-1].symbolinfo)->get_name()+"\n"+(yyvsp[0].symbolinfo)->get_name()); 
							   }
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 252 "parser.y" /* yacc.c:1646  */
    { fprintf(parsertext,"Line at %d : statement -> var_declaration\n\n",line_count);
							fprintf(parsertext,"%s\n\n",(yyvsp[0].symbolinfo)->get_name().c_str());
							(yyval.symbolinfo)->set_name((yyvsp[0].symbolinfo)->get_name()); 

							}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 257 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : statement -> expression_statement\n\n",line_count);
	  						fprintf(parsertext,"%s\n\n",(yyvsp[0].symbolinfo)->get_name().c_str()); 
							(yyval.symbolinfo)->set_name((yyvsp[0].symbolinfo)->get_name()); 

							  }
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 262 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : statement->compound_statement\n\n",line_count);
	  						fprintf(parsertext,"%s\n\n",(yyvsp[0].symbolinfo)->get_name().c_str()); 
							 (yyval.symbolinfo)->set_name((yyvsp[0].symbolinfo)->get_name()); 
 
							  }
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 267 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : statement ->FOR LPAREN expression_statement expression_statement expression RPAREN statement\n\n",line_count);
	  																					fprintf(parsertext,"for(%s %s %s)\n%s \n\n",(yyvsp[-4].symbolinfo)->get_name().c_str(),(yyvsp[-3].symbolinfo)->get_name().c_str(),(yyvsp[-2].symbolinfo)->get_name().c_str(),(yyvsp[0].symbolinfo)->get_name().c_str());
																						  (yyval.symbolinfo)->set_name("for("+(yyvsp[-4].symbolinfo)->get_name()+(yyvsp[-3].symbolinfo)->get_name()+(yyvsp[-2].symbolinfo)->get_name()+")\n"+(yyvsp[-2].symbolinfo)->get_name()); 

																						  }
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 272 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : statement->IF LPAREN expression RPAREN statement\n\n",line_count);
	  																fprintf(parsertext,"if(%s)\n%s\n\n",(yyvsp[-2].symbolinfo)->get_name().c_str(),(yyvsp[0].symbolinfo)->get_name().c_str());
																	(yyval.symbolinfo)->set_name("if("+(yyvsp[-2].symbolinfo)->get_name()+")\n"+(yyvsp[0].symbolinfo)->get_name()); 

																	  }
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 277 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : statement->IF LPAREN expression RPAREN statement ELSE statement\n\n",line_count);
	  														fprintf(parsertext,"if(%s)\n%s\n else \n %s\n\n",(yyvsp[-4].symbolinfo)->get_name().c_str(),(yyvsp[-2].symbolinfo)->get_name().c_str(),(yyvsp[0].symbolinfo)->get_name().c_str());
															(yyval.symbolinfo)->set_name("if("+(yyvsp[-4].symbolinfo)->get_name()+")\n"+(yyvsp[-2].symbolinfo)->get_name()+" else \n"+(yyvsp[0].symbolinfo)->get_name()); 
															}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 282 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : statement->WHILE LPAREN expression RPAREN statement\n\n",line_count);
	  											fprintf(parsertext,"while(%s)\n%s\n\n",(yyvsp[-2].symbolinfo)->get_name().c_str(),(yyvsp[0].symbolinfo)->get_name().c_str());
												  (yyval.symbolinfo)->set_name("while("+(yyvsp[-2].symbolinfo)->get_name()+")\n"+(yyvsp[0].symbolinfo)->get_name()); 
												  }
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 286 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : statement->PRINTLN LPAREN ID RPAREN SEMICOLON\n\n",line_count);
	  										fprintf(parsertext,"\n (%s);\n\n",(yyvsp[-2].symbolinfo)->get_name().c_str());
											  (yyval.symbolinfo)->set_name("\n("+(yyvsp[-2].symbolinfo)->get_name()+")"); 
											  }
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 290 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : statement->RETURN expression SEMICOLON\n\n",line_count);
	  								fprintf(parsertext,"return %s;\n\n",(yyvsp[-1].symbolinfo)->get_name().c_str());
									(yyval.symbolinfo)->set_name("return "+(yyvsp[-1].symbolinfo)->get_name()+";"); 
									}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 296 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : expression_statement->SEMICOLON\n\n",line_count);
									fprintf(parsertext,";\n\n"); 
									(yyval.symbolinfo)->set_name(";"); 
									}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 300 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : expression_statement->expression SEMICOLON\n\n",line_count);
									fprintf(parsertext,"%s;\n\n",(yyvsp[-1].symbolinfo)->get_name().c_str());
										(yyval.symbolinfo)->set_name((yyvsp[-1].symbolinfo)->get_name()+";"); 
									}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 306 "parser.y" /* yacc.c:1646  */
    {
					fprintf(parsertext,"Line at %d : variable->ID\n\n",line_count);
					fprintf(parsertext,"%s\n\n",(yyvsp[0].symbolinfo)->get_name().c_str());
					if(table->lookup((yyvsp[0].symbolinfo)->get_name())==0){
						 error_count++;
						fprintf(error,"Error at Line No.%d:  Undeclared Variable: %s \n\n",line_count,(yyvsp[0].symbolinfo)->get_name().c_str());
					
					}
					if(table->lookup((yyvsp[0].symbolinfo)->get_name())!=0){
						//cout<<line_count<<" "<<$<symbolinfo>1->get_name()<<" "<<table->lookup($<symbolinfo>1->get_name())->get_dectype()<<endl;
						(yyval.symbolinfo)->set_dectype(table->lookup((yyvsp[0].symbolinfo)->get_name())->get_dectype()); 
					}
						(yyval.symbolinfo)->set_name((yyvsp[0].symbolinfo)->get_name()); 
						
					}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 321 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : variable->ID LTHIRD expression RTHIRD\n\n",line_count);
	 								fprintf(parsertext,"%s[%s]\n\n",(yyvsp[-3].symbolinfo)->get_name().c_str(),(yyvsp[-1].symbolinfo)->get_name().c_str());
									if(table->lookup((yyvsp[-3].symbolinfo)->get_name())==0){
										error_count++;
										fprintf(error,"Error at Line No.%d:  Undeclared Variable: %s \n\n",line_count,(yyvsp[-3].symbolinfo)->get_name().c_str());
									}
									if((yyvsp[-1].symbolinfo)->get_dectype()=="float "){
										 error_count++;
										fprintf(error,"Error at Line No.%d:  Non-integer Array Index  \n\n",line_count);
									}
									if(table->lookup((yyvsp[-3].symbolinfo)->get_name())!=0){
										//cout<<line_count<<" "<<table->lookup($<symbolinfo>1->get_name())->get_dectype()<<endl;
										if(table->lookup((yyvsp[-3].symbolinfo)->get_name())->get_dectype()!="int array" && table->lookup((yyvsp[-3].symbolinfo)->get_name())->get_dectype()!="float array")
										{
									
											error_count++;
											fprintf(error,"Error at Line No.%d:  Type Mismatch \n\n",line_count);	
										}
										
										if(table->lookup((yyvsp[-3].symbolinfo)->get_name())->get_dectype()=="int array"){

											(yyvsp[-3].symbolinfo)->set_dectype("int ");
										}
										if(table->lookup((yyvsp[-3].symbolinfo)->get_name())->get_dectype()=="float array"){
											(yyvsp[-3].symbolinfo)->set_dectype("float ");
										}
										(yyval.symbolinfo)->set_dectype((yyvsp[-3].symbolinfo)->get_dectype()); 
										
									}
									(yyval.symbolinfo)->set_name((yyvsp[-3].symbolinfo)->get_name()+"["+(yyvsp[-1].symbolinfo)->get_name()+"]");  
									
									}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 354 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : expression->logic_expression\n\n",line_count);
 								fprintf(parsertext,"%s\n\n",(yyvsp[0].symbolinfo)->get_name().c_str());
								 	(yyval.symbolinfo)->set_name((yyvsp[0].symbolinfo)->get_name()); 
									(yyval.symbolinfo)->set_dectype((yyvsp[0].symbolinfo)->get_dectype()); 
								 }
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 359 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : expression->variable ASSIGNOP logic_expression\n\n",line_count);
	   										fprintf(parsertext,"%s=%s\n\n",(yyvsp[-2].symbolinfo)->get_name().c_str(),(yyvsp[0].symbolinfo)->get_name().c_str());
											   if((yyvsp[0].symbolinfo)->get_dectype()=="void "){
												error_count++;
												fprintf(error,"Error at Line No.%d:  Type MIsmatch \n\n",line_count);
												(yyval.symbolinfo)->set_dectype("int "); 
											}else if(table->lookup((yyvsp[-2].symbolinfo)->get_name())!=0) {
												//cout<<line_count<<" "<<table->lookup($<symbolinfo>1->get_name())->get_dectype()<<endl;
												//cout<<line_count<<" "<<table->lookup($<symbolinfo>1->get_name())->get_dectype()<<""<<$<symbolinfo>3->get_dectype()<<endl;
												if(table->lookup((yyvsp[-2].symbolinfo)->get_name())->get_dectype()!=(yyvsp[0].symbolinfo)->get_dectype()){
													 error_count++;
													fprintf(error,"Error at Line No.%d: Type Mismatch \n\n",line_count);
												}
											}
											(yyval.symbolinfo)->set_name((yyvsp[-2].symbolinfo)->get_name()+"="+(yyvsp[0].symbolinfo)->get_name());  

											}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 377 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : logic_expression->rel_expression\n\n",line_count);
										fprintf(parsertext,"%s\n\n",(yyvsp[0].symbolinfo)->get_name().c_str());
										(yyval.symbolinfo)->set_name((yyvsp[0].symbolinfo)->get_name()); 
										(yyval.symbolinfo)->set_dectype((yyvsp[0].symbolinfo)->get_dectype()); 

										}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 383 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : logic_expression->rel_expression LOGICOP rel_expression\n\n",line_count);
		 											fprintf(parsertext,"%s%s%s\n\n",(yyvsp[-2].symbolinfo)->get_name().c_str(),(yyvsp[-1].symbolinfo)->get_name().c_str(),(yyvsp[0].symbolinfo)->get_name().c_str());
													 if((yyvsp[-2].symbolinfo)->get_dectype()=="void "||(yyvsp[0].symbolinfo)->get_dectype()=="void "){
														error_count++;
														fprintf(error,"Error at Line No.%d:  Type MIsmatch \n\n",line_count);
														(yyval.symbolinfo)->set_dectype("int "); 
													}else  if((yyvsp[-2].symbolinfo)->get_dectype()=="float " ||(yyvsp[0].symbolinfo)->get_dectype()=="float "){
											 			error_count++;
														// cout<<$<symbolinfo>1->get_name()<<" "<<$<symbolinfo>3->get_name()<<endl;
														fprintf(error,"Error at Line No.%d:  Type Mismatch \n\n",line_count);

										 			} 
										 			(yyval.symbolinfo)->set_dectype("int "); 
		 											(yyval.symbolinfo)->set_name((yyvsp[-2].symbolinfo)->get_name()+(yyvsp[-1].symbolinfo)->get_name()+(yyvsp[0].symbolinfo)->get_name());  

												}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 401 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : rel_expression->simple_expression\n\n",line_count);
									fprintf(parsertext,"%s\n\n",(yyvsp[0].symbolinfo)->get_name().c_str());
									(yyval.symbolinfo)->set_name((yyvsp[0].symbolinfo)->get_name()); 
									 (yyval.symbolinfo)->set_dectype((yyvsp[0].symbolinfo)->get_dectype()); 
									 
									}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 407 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : rel_expression->simple_expression RELOP simple_expression\n\n",line_count);
													fprintf(parsertext,"%s%s%s\n\n",(yyvsp[-2].symbolinfo)->get_name().c_str(),(yyvsp[-1].symbolinfo)->get_name().c_str(),(yyvsp[0].symbolinfo)->get_name().c_str());
													if((yyvsp[-2].symbolinfo)->get_dectype()=="void "||(yyvsp[0].symbolinfo)->get_dectype()=="void "){
														error_count++;
														fprintf(error,"Error at Line No.%d:  Type MIsmatch \n\n",line_count);
														(yyval.symbolinfo)->set_dectype("int "); 
												}else if((yyvsp[-2].symbolinfo)->get_dectype()=="float " ||(yyvsp[0].symbolinfo)->get_dectype()=="float "){
											 			error_count++;
														// cout<<$<symbolinfo>1->get_name()<<" "<<$<symbolinfo>3->get_name()<<endl;
														fprintf(error,"Error at Line No.%d:  Type Mismatch \n\n",line_count);

										 				} 
										 			(yyval.symbolinfo)->set_dectype("int "); 
													
													(yyval.symbolinfo)->set_name((yyvsp[-2].symbolinfo)->get_name()+(yyvsp[-1].symbolinfo)->get_name()+(yyvsp[0].symbolinfo)->get_name());  

													}
#line 1985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 426 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : simple_expression->term\n\n",line_count);
							fprintf(parsertext,"%s\n\n",(yyvsp[0].symbolinfo)->get_name().c_str());
							(yyval.symbolinfo)->set_dectype((yyvsp[0].symbolinfo)->get_dectype());
							(yyval.symbolinfo)->set_name((yyvsp[0].symbolinfo)->get_name());  
							 

							}
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 433 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].symbolinfo)->set_name((yyvsp[-1].symbolinfo)->get_name()+(yyvsp[0].symbolinfo)->get_name());}
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 433 "parser.y" /* yacc.c:1646  */
    { fprintf(parsertext,"Line at %d : simple_expression->simple_expression ADDOP term\n\n",line_count);
		  								fprintf(parsertext,"%s%s\n\n",(yyvsp[-3].symbolinfo)->get_name().c_str(),(yyvsp[0].symbolinfo)->get_name().c_str());
										//cout<<$<symbolinfo>4->get_dectype()<<endl;
										if((yyvsp[-3].symbolinfo)->get_dectype()=="void "||(yyvsp[0].symbolinfo)->get_dectype()=="void "){
												error_count++;
												fprintf(error,"Error at Line No.%d:  Type MIsmatch \n\n",line_count);
												(yyval.symbolinfo)->set_dectype("int "); 
										}else if((yyvsp[-3].symbolinfo)->get_dectype()=="float " ||(yyvsp[0].symbolinfo)->get_dectype()=="float ")
											(yyval.symbolinfo)->set_dectype("float ");
										else  (yyval.symbolinfo)->set_dectype("int ");
										 	(yyval.symbolinfo)->set_name((yyvsp[-3].symbolinfo)->get_name()+(yyvsp[0].symbolinfo)->get_name());  
										  }
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 447 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : term->unary_expression\n\n",line_count);
							fprintf(parsertext,"%s\n\n",(yyvsp[0].symbolinfo)->get_name().c_str()); 
							(yyval.symbolinfo)->set_dectype((yyvsp[0].symbolinfo)->get_dectype()); 
							
							(yyval.symbolinfo)->set_name((yyvsp[0].symbolinfo)->get_name()); 
							
							}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 454 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : term->term MULOP unary_expression\n\n",line_count);
	 								fprintf(parsertext,"%s%s%s\n\n",(yyvsp[-2].symbolinfo)->get_name().c_str(),(yyvsp[-1].symbolinfo)->get_name().c_str(),(yyvsp[0].symbolinfo)->get_name().c_str());
									 if((yyvsp[-2].symbolinfo)->get_dectype()=="void "||(yyvsp[0].symbolinfo)->get_dectype()=="void "){
											error_count++;
											fprintf(error,"Error at Line No.%d:  Type MIsmatch \n\n",line_count);
											(yyval.symbolinfo)->set_dectype("int "); 
									}else if((yyvsp[-1].symbolinfo)->get_name()=="%"){
										 if((yyvsp[-2].symbolinfo)->get_dectype()!="int " ||(yyvsp[0].symbolinfo)->get_dectype()!="int "){
											 error_count++;
											fprintf(error,"Error at Line No.%d:  Integer operand on modulus operator  \n\n",line_count);

										 } 
										 (yyval.symbolinfo)->set_dectype("int "); 
										
									 }
									else if((yyvsp[-1].symbolinfo)->get_name()=="/"){
										 if((yyvsp[-2].symbolinfo)->get_dectype()=="int " && (yyvsp[0].symbolinfo)->get_dectype()=="int ")
										 (yyval.symbolinfo)->set_dectype("int "); 
										 else (yyval.symbolinfo)->set_dectype("float "); 
										
									 }
									 else{
										  if((yyvsp[-2].symbolinfo)->get_dectype()=="float " || (yyvsp[0].symbolinfo)->get_dectype()=="float ")
										 (yyval.symbolinfo)->set_dectype("float "); 
										 else (yyval.symbolinfo)->set_dectype("int "); 
									 }
									(yyval.symbolinfo)->set_name((yyvsp[-2].symbolinfo)->get_name()+(yyvsp[-1].symbolinfo)->get_name()+(yyvsp[0].symbolinfo)->get_name()); 
								
									 }
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 485 "parser.y" /* yacc.c:1646  */
    { fprintf(parsertext,"Line at %d : unary_expression->ADDOP unary_expression\n\n",line_count);
											fprintf(parsertext,"%s%s\n\n",(yyvsp[-1].symbolinfo)->get_name().c_str(),(yyvsp[0].symbolinfo)->get_name().c_str());
											if((yyvsp[0].symbolinfo)->get_dectype()=="void "||(yyvsp[0].symbolinfo)->get_dectype()=="float "){
												error_count++;
												fprintf(error,"Error at Line No.%d:  Type MIsmatch \n\n",line_count);
												(yyval.symbolinfo)->set_dectype("int "); 
											}else 
											 (yyval.symbolinfo)->set_dectype((yyvsp[0].symbolinfo)->get_dectype()); 	
											 (yyval.symbolinfo)->set_name((yyvsp[-1].symbolinfo)->get_name()+(yyvsp[0].symbolinfo)->get_name()); 
										
										}
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 496 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : unary_expression->NOT unary_expression\n\n",line_count);
				fprintf(parsertext,"!%s\n\n",(yyvsp[0].symbolinfo)->get_name().c_str()); 
				if((yyvsp[0].symbolinfo)->get_dectype()=="void "||(yyvsp[0].symbolinfo)->get_dectype()=="float "){
					error_count++;
					fprintf(error,"Error at Line No.%d:  Type MIsmatch \n\n",line_count);
					(yyval.symbolinfo)->set_dectype("int "); 
				}else 
				(yyval.symbolinfo)->set_dectype((yyvsp[0].symbolinfo)->get_dectype());  
		 		(yyval.symbolinfo)->set_name("!"+(yyvsp[0].symbolinfo)->get_name()); 
		 
		 }
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 507 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : unary_expression->factor\n\n",line_count);
		 		fprintf(parsertext,"%s\n\n",(yyvsp[0].symbolinfo)->get_name().c_str()); 
				// cout<<$<symbolinfo>1->get_dectype()<<endl;
				
				(yyval.symbolinfo)->set_name((yyvsp[0].symbolinfo)->get_name()); 
				
		 }
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 516 "parser.y" /* yacc.c:1646  */
    { fprintf(parsertext,"Line at %d : factor->variable\n\n",line_count);
					fprintf(parsertext,"%s\n\n",(yyvsp[0].symbolinfo)->get_name().c_str());
					(yyval.symbolinfo)->set_dectype((yyvsp[0].symbolinfo)->get_dectype()); 
					(yyval.symbolinfo)->set_name((yyvsp[0].symbolinfo)->get_name()); 
					
					}
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 522 "parser.y" /* yacc.c:1646  */
    { fprintf(parsertext,"Line at %d : factor->ID LPAREN argument_list RPAREN\n\n",line_count);
									fprintf(parsertext,"%s(%s)\n\n",(yyvsp[-3].symbolinfo)->get_name().c_str(),(yyvsp[-1].symbolinfo)->get_name().c_str());
									SymbolInfo* s=table->lookup((yyvsp[-3].symbolinfo)->get_name());
									if(s==0){
										error_count++;
										fprintf(error,"Error at Line No.%d:  Undeclared Function \n\n",line_count);
										(yyval.symbolinfo)->set_dectype("int "); 
									}
									else{
										int num=s->get_isFunction()->get_number_of_parameter();
									//	cout<<num<<endl;
										(yyval.symbolinfo)->set_dectype(s->get_isFunction()->get_return_type());
										if(num!=arg_list.size()){
											error_count++;
											fprintf(error,"Error at Line No.%d:  Invalid number of arguments \n\n",line_count);

										}
										else{
											//cout<<s->get_isFunction()->get_return_type()<<endl;
											vector<string>para_list=s->get_isFunction()->get_paralist();
											vector<string>para_type=s->get_isFunction()->get_paratype();
											for(int i=0;i<arg_list.size();i++){
												if(arg_list[i]->get_dectype()!=para_type[i]){
													error_count++;
													fprintf(error,"Error at Line No.%d: Type MIsmatch \n\n",line_count);
													break;
												}
											}

										}
									}

									(yyval.symbolinfo)->set_name((yyvsp[-3].symbolinfo)->get_name()+"("+(yyvsp[-1].symbolinfo)->get_name()+")"); 
									}
#line 2160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 556 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : factor->LPAREN expression RPAREN\n\n",line_count);
								fprintf(parsertext,"(%s)\n\n",(yyvsp[-1].symbolinfo)->get_name().c_str()); 
								(yyval.symbolinfo)->set_dectype((yyvsp[-1].symbolinfo)->get_dectype()); 
								(yyval.symbolinfo)->set_name("("+(yyvsp[-1].symbolinfo)->get_name()+")"); 
								}
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 561 "parser.y" /* yacc.c:1646  */
    { fprintf(parsertext,"Line at %d : factor->CONST_INT\n\n",line_count);
				fprintf(parsertext,"%s\n\n",(yyvsp[0].symbolinfo)->get_name().c_str());
				(yyval.symbolinfo)->set_dectype("int "); 	
				(yyval.symbolinfo)->set_name((yyvsp[0].symbolinfo)->get_name()); 
			
				}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 567 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : factor->CONST_FLOAT\n\n",line_count);
					fprintf(parsertext,"%s\n\n",(yyvsp[0].symbolinfo)->get_name().c_str()); 
					(yyval.symbolinfo)->set_dectype("float "); 	
					(yyval.symbolinfo)->set_name((yyvsp[0].symbolinfo)->get_name()); 
				
					}
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 573 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : factor->variable INCOP\n\n",line_count);
					fprintf(parsertext,"%s++\n\n",(yyvsp[-1].symbolinfo)->get_name().c_str()); 
					(yyval.symbolinfo)->set_dectype((yyvsp[-1].symbolinfo)->get_dectype());
					(yyval.symbolinfo)->set_name((yyvsp[-1].symbolinfo)->get_name()+"++"); 
					 
					 }
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 579 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : factor->variable DECOP\n\n",line_count);
					fprintf(parsertext,"%s--\n\n",(yyvsp[-1].symbolinfo)->get_name().c_str());
					  (yyval.symbolinfo)->set_dectype((yyvsp[-1].symbolinfo)->get_dectype()); 
					  (yyval.symbolinfo)->set_name((yyvsp[-1].symbolinfo)->get_name()+"--"); 
					 
					 }
#line 2214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 587 "parser.y" /* yacc.c:1646  */
    { fprintf(parsertext,"Line at %d : argument_list->arguments\n\n",line_count);
							fprintf(parsertext,"%s\n\n",(yyvsp[0].symbolinfo)->get_name().c_str());
							 (yyval.symbolinfo)->set_name((yyvsp[0].symbolinfo)->get_name());
							}
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 591 "parser.y" /* yacc.c:1646  */
    { (yyval.symbolinfo)->set_name("");}
#line 2229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 594 "parser.y" /* yacc.c:1646  */
    { fprintf(parsertext,"Line at %d : arguments->arguments COMMA logic_expression \n\n",line_count);
											fprintf(parsertext,"%s,%s\n\n",(yyvsp[-2].symbolinfo)->get_name().c_str(),(yyvsp[0].symbolinfo)->get_name().c_str());
											arg_list.push_back((yyvsp[0].symbolinfo));
											(yyval.symbolinfo)->set_name((yyvsp[-2].symbolinfo)->get_name()+","+(yyvsp[0].symbolinfo)->get_name());
											}
#line 2239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 599 "parser.y" /* yacc.c:1646  */
    {fprintf(parsertext,"Line at %d : arguments->logic_expression\n\n",line_count);
		  					fprintf(parsertext,"%s\n\n",(yyvsp[0].symbolinfo)->get_name().c_str()); 
							arg_list.push_back(new SymbolInfo((yyvsp[0].symbolinfo)->get_name(),(yyvsp[0].symbolinfo)->get_type(),(yyvsp[0].symbolinfo)->get_dectype()));
							// cout<<$<symbolinfo>1->get_dectype()<<endl;
		  					(yyval.symbolinfo)->set_name((yyvsp[0].symbolinfo)->get_name());
							
		  }
#line 2251 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2255 "y.tab.c" /* yacc.c:1646  */
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
#line 607 "parser.y" /* yacc.c:1906  */

int main(int argc,char *argv[])
{

	if((fp=fopen(argv[1],"r"))==NULL)
	{
		printf("Cannot Open Input File.\n");
		return 0;
	}
	yyin=fp;
	table->Enter_Scope();
	yyparse();
	fprintf(parsertext," Symbol Table : \n\n");
	table->printall();
	fprintf(parsertext,"Total Lines : %d \n\n",line_count);
	fprintf(parsertext,"Total Errors : %d \n\n",error_count);
	fprintf(error,"Total Errors : %d \n\n",error_count);

	fclose(fp);
	fclose(parsertext);
	fclose(error);

	return 0;
}


