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
#line 5 "minil.y" /* yacc.c:339  */

 #include "header.h"

 struct Element {
    string name;    //variable name
    int size;       //size if array, 0 if scalar
    string localTo; //which function is this variable local to

    Element(string n, int s) {
        name = n;
        size = s;
        localTo = "";
    }
 };

 int tempCount = 0;
 string makeTemp() {
    string ret = "__temp";
    ret += to_string(tempCount);
    tempCount++;
    return ret;
 }

 int labelCount = 0;
 string makeLabel() {
    string ret = "LABEL";
    ret += to_string(labelCount);
    labelCount++;
    return ret;
 }

 void yyerror(const char *msg);
 extern int currLine;
 extern int currPos;
 int yylex();
 string code = "";
 vector<pair <string, string>> functions;   //function name, code for function
 unordered_map<string, Element> symbolTable;
 vector<Node*> nodes;
 bool error = false;

#line 108 "y.tab.c" /* yacc.c:339  */

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
    FUNCTION = 258,
    BEGIN_PARAMS = 259,
    END_PARAMS = 260,
    BEGIN_LOCALS = 261,
    END_LOCALS = 262,
    BEGIN_BODY = 263,
    END_BODY = 264,
    INTEGER = 265,
    ARRAY = 266,
    OF = 267,
    IF = 268,
    THEN = 269,
    ENDIF = 270,
    ELSE = 271,
    WHILE = 272,
    DO = 273,
    BEGINLOOP = 274,
    ENDLOOP = 275,
    CONTINUE = 276,
    READ = 277,
    WRITE = 278,
    TRUE = 279,
    FALSE = 280,
    RETURN = 281,
    IDENT = 282,
    NUMBER = 283,
    SEMICOLON = 284,
    COLON = 285,
    COMMA = 286,
    ASSIGN = 287,
    OR = 288,
    AND = 289,
    NOT = 290,
    NEQ = 291,
    EQ = 292,
    LT = 293,
    GT = 294,
    LTE = 295,
    GTE = 296,
    ADD = 297,
    SUB = 298,
    MULT = 299,
    DIV = 300,
    MOD = 301,
    UMINUS = 302,
    L_SQUARE_BRACKET = 303,
    R_SQUARE_BRACKET = 304,
    L_PAREN = 305,
    R_PAREN = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 46 "minil.y" /* yacc.c:355  */

  char* strval;
  Node* nodeval;

#line 205 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 222 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   250

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  57
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  133

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    81,    81,    82,    85,   105,   106,   117,   123,   131,
     139,   148,   159,   166,   174,   187,   204,   220,   221,   222,
     223,   224,   227,   240,   246,   252,   260,   266,   272,   278,
     300,   310,   319,   328,   337,   346,   347,   354,   355,   362,
     363,   366,   367,   375,   381,   389,   390,   391,   392,   399,
     406,   407,   410,   411,   412,   413,   414,   415
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "BEGIN_PARAMS", "END_PARAMS",
  "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY", "INTEGER",
  "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO", "BEGINLOOP",
  "ENDLOOP", "CONTINUE", "READ", "WRITE", "TRUE", "FALSE", "RETURN",
  "IDENT", "NUMBER", "SEMICOLON", "COLON", "COMMA", "ASSIGN", "OR", "AND",
  "NOT", "NEQ", "EQ", "LT", "GT", "LTE", "GTE", "ADD", "SUB", "MULT",
  "DIV", "MOD", "UMINUS", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET",
  "L_PAREN", "R_PAREN", "$accept", "Program", "Function", "DeclarationSeq",
  "StatementSeq", "Declaration", "Statement", "ReadStmt", "WriteStmt",
  "Expression", "ExpressionSeq", "ExpressionSeq1", "Bool-Expr", "Comp", YY_NULLPTR
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
     305,   306
};
# endif

#define YYPACT_NINF -40

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-40)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -40,    23,   -40,   -22,   -40,   -17,     9,   -40,    -3,    11,
      13,     1,   -40,    53,    22,   -40,     4,   -40,     5,   -40,
      48,    47,   154,    28,   -21,   -21,    61,   -40,    54,    57,
     -18,   -12,    65,    56,    58,    59,    81,   -40,   -40,     2,
     -40,   -21,   -18,   -21,   146,     7,     0,   154,    46,    51,
     -18,    60,   -18,   -18,   -40,    71,   -40,    80,    93,   111,
     -18,   -18,   -40,   -40,    73,    14,   -40,   -40,   -40,   -40,
     -40,   -40,   -18,   -18,   -18,   -18,   -18,   -18,   154,   -21,
     -21,   154,   121,   -18,   -18,   151,    60,   161,   -40,    74,
      82,   -40,   169,    60,    78,   104,   -40,   -40,    26,    26,
     -40,   -40,   -40,    60,   110,   106,   -40,   132,   129,   177,
     185,   119,   -18,   -18,   -40,   -40,   -18,   -40,   154,   -40,
     -21,   -40,   -40,   -18,   193,   201,    60,   147,    33,    60,
     -40,   -40,   -40
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     3,     0,     0,     5,     0,     0,
       0,     0,     5,     0,     0,     6,     0,     9,     0,    10,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,    18,    19,     0,    48,    49,    36,
      38,     0,     0,     0,     0,     0,     0,     0,    22,    26,
       0,    21,     0,     0,     4,     0,     7,     0,     0,     0,
       0,    41,    51,    40,     0,     0,    53,    52,    54,    55,
      56,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,     0,     8,    24,
      28,    11,     0,    43,     0,    42,    39,    50,    30,    31,
      32,    33,    34,    47,     0,    45,    46,     0,     0,     0,
       0,     0,     0,     0,    37,    35,     0,    14,     0,    16,
       0,    23,    27,     0,     0,     0,    44,     0,    17,    13,
      25,    29,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -40,   -40,   -40,   144,   -39,   143,   -31,   -40,   -40,   -15,
     -40,   -40,   -25,   -40
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     4,     8,    32,    11,    33,    34,    35,    44,
      94,    95,    45,    77
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      46,    55,     9,    37,    38,     5,    39,    40,    82,    39,
      40,    20,     6,     7,    41,    51,    62,    12,    65,    81,
      52,    78,    42,     2,    10,    42,     3,    63,    64,    43,
      15,    10,    50,    79,    80,    85,    53,    86,    87,   104,
      79,    80,   107,    13,    14,    92,    93,    79,    80,    10,
      60,    55,    61,    21,   105,   106,    22,    98,    99,   100,
     101,   102,   103,    17,    18,    97,    79,    80,   109,   110,
      74,    75,    76,    55,    54,    23,    55,    36,    24,   127,
      47,    48,    25,    26,    49,    56,    27,    28,    29,    57,
      58,    30,    31,    59,    83,   128,    55,   124,   125,    84,
      88,   126,    72,    73,    74,    75,    76,    89,   129,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      90,    91,   112,    24,    96,   117,   118,    25,    26,   115,
     113,    27,    28,    29,    24,   116,    30,    31,    25,    26,
      80,   108,    27,    28,    29,    24,   120,    30,    31,    25,
      26,   123,   119,    27,    28,    29,    16,    19,    30,    31,
      24,     0,   132,     0,    25,    26,     0,    24,    27,    28,
      29,    25,    26,    30,    31,    27,    28,    29,     0,     0,
      30,    31,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    72,    73,    74,    75,    76,     0,     0,
       0,     0,    96,    72,    73,    74,    75,    76,     0,     0,
     111,    72,    73,    74,    75,    76,     0,     0,   114,    72,
      73,    74,    75,    76,     0,     0,   121,    72,    73,    74,
      75,    76,     0,     0,   122,    72,    73,    74,    75,    76,
       0,     0,   130,    72,    73,    74,    75,    76,     0,     0,
     131
};

static const yytype_int8 yycheck[] =
{
      25,    32,     5,    24,    25,    27,    27,    28,    47,    27,
      28,     7,    29,     4,    35,    30,    41,     6,    43,    19,
      32,    14,    43,     0,    27,    43,     3,    42,    43,    50,
      29,    27,    50,    33,    34,    50,    48,    52,    53,    78,
      33,    34,    81,    30,    31,    60,    61,    33,    34,    27,
      48,    82,    50,    48,    79,    80,     8,    72,    73,    74,
      75,    76,    77,    10,    11,    51,    33,    34,    83,    84,
      44,    45,    46,   104,     9,    28,   107,    49,    13,   118,
      19,    27,    17,    18,    27,    29,    21,    22,    23,    31,
      31,    26,    27,    12,    48,   120,   127,   112,   113,    48,
      29,   116,    42,    43,    44,    45,    46,    27,   123,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      27,    10,    48,    13,    51,    15,    16,    17,    18,    51,
      48,    21,    22,    23,    13,    31,    26,    27,    17,    18,
      34,    20,    21,    22,    23,    13,    17,    26,    27,    17,
      18,    32,    20,    21,    22,    23,    12,    14,    26,    27,
      13,    -1,    15,    -1,    17,    18,    -1,    13,    21,    22,
      23,    17,    18,    26,    27,    21,    22,    23,    -1,    -1,
      26,    27,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    42,    43,    44,    45,    46,    -1,    -1,
      -1,    -1,    51,    42,    43,    44,    45,    46,    -1,    -1,
      49,    42,    43,    44,    45,    46,    -1,    -1,    49,    42,
      43,    44,    45,    46,    -1,    -1,    49,    42,    43,    44,
      45,    46,    -1,    -1,    49,    42,    43,    44,    45,    46,
      -1,    -1,    49,    42,    43,    44,    45,    46,    -1,    -1,
      49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    53,     0,     3,    54,    27,    29,     4,    55,     5,
      27,    57,     6,    30,    31,    29,    55,    10,    11,    57,
       7,    48,     8,    28,    13,    17,    18,    21,    22,    23,
      26,    27,    56,    58,    59,    60,    49,    24,    25,    27,
      28,    35,    43,    50,    61,    64,    64,    19,    27,    27,
      50,    61,    32,    48,     9,    58,    29,    31,    31,    12,
      48,    50,    64,    61,    61,    64,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    65,    14,    33,
      34,    19,    56,    48,    48,    61,    61,    61,    29,    27,
      27,    10,    61,    61,    62,    63,    51,    51,    61,    61,
      61,    61,    61,    61,    56,    64,    64,    56,    20,    61,
      61,    49,    48,    48,    49,    51,    31,    15,    16,    20,
      17,    49,    49,    32,    61,    61,    61,    56,    64,    61,
      49,    49,    15
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    54,    55,    55,    56,    56,    57,
      57,    57,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    59,    59,    59,    59,    60,    60,    60,    60,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    62,    62,    63,    63,    64,    64,    64,    64,    64,
      64,    64,    65,    65,    65,    65,    65,    65
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,    12,     0,     3,     2,     3,     3,
       3,     8,     3,     6,     5,     7,     5,     6,     1,     1,
       1,     2,     2,     5,     3,     6,     2,     5,     3,     6,
       3,     3,     3,     3,     3,     4,     1,     4,     1,     3,
       2,     0,     1,     1,     3,     3,     3,     3,     1,     1,
       3,     2,     1,     1,     1,     1,     1,     1
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
#line 81 "minil.y" /* yacc.c:1646  */
    {/*printf("Program -> epsilon\n");*/}
#line 1411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 82 "minil.y" /* yacc.c:1646  */
    {/*printf("Program -> Program Function\n");*/}
#line 1417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 86 "minil.y" /* yacc.c:1646  */
    {/*printf("Function -> FUNCTION IDENT %s SEMICOLON BEGIN_PARAMS DeclarationSeq END_PARAMS BEGIN_LOCALS DeclarationSeq END_LOCALS BEGIN_BODY StatementSeq END_BODY\n", $2);*/
                    code = "func " + string((yyvsp[-10].strval)) + "\n";
                    if((yyvsp[-7].nodeval) != NULL)
                        code = code + *((yyvsp[-7].nodeval)->code);
                    if((yyvsp[-4].nodeval) != NULL)
                        code = code + *((yyvsp[-4].nodeval)->code);
                    code = code + *((yyvsp[-1].nodeval)->code);
                    code = code + "endfunc\n";
                    for(auto& i : symbolTable) {
                        if(i.second.localTo == "") {
                            i.second.localTo = string((yyvsp[-10].strval));
                            
                        }
                    }
                    functions.push_back(make_pair(string((yyvsp[-10].strval)), code));
                    code = "";
                }
#line 1439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 105 "minil.y" /* yacc.c:1646  */
    {/*printf("DeclarationSeq -> epsilon\n");*/}
#line 1445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 106 "minil.y" /* yacc.c:1646  */
    {/*printf("DeclarationSeq -> DeclarationSeq Declaration SEMICOLON\n");*/
                                                            Node* temp = new Node();
                                                            nodes.push_back(temp);
                                                            (yyval.nodeval) = temp;
                                                            if((yyvsp[-2].nodeval) != NULL)
                                                                (yyval.nodeval)->code = new string(*((yyvsp[-2].nodeval)->code) + *((yyvsp[-1].nodeval)->code));
                                                            else
                                                                (yyval.nodeval)->code = new string(*((yyvsp[-1].nodeval)->code));
                                                        }
#line 1459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 117 "minil.y" /* yacc.c:1646  */
    {/*printf("StatementSeq -> Statement SEMICOLON\n");*/
                                                        Node* temp = new Node();
                                                        nodes.push_back(temp);
                                                        (yyval.nodeval) = temp;
                                                        (yyval.nodeval)->code = new string(*((yyvsp[-1].nodeval)->code));
                                                    }
#line 1470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 123 "minil.y" /* yacc.c:1646  */
    {/*printf("StatementSeq -> StatementSeq Statement SEMICOLON\n");*/
                                                        Node* temp = new Node();
                                                        nodes.push_back(temp);
                                                        (yyval.nodeval) = temp;
                                                        (yyval.nodeval)->code = new string(*((yyvsp[-2].nodeval)->code) + *((yyvsp[-1].nodeval)->code));
                                                    }
#line 1481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 131 "minil.y" /* yacc.c:1646  */
    {/*printf("ScalarDeclaration -> IDENT COLON INTEGER\n");*/
                                                        Element temp(string((yyvsp[-2].strval)), 0);
                                                        symbolTable.insert(make_pair(string((yyvsp[-2].strval)), temp));
                                                        Node* tempnode = new Node();
                                                        nodes.push_back(tempnode);
                                                        (yyval.nodeval) = tempnode;
                                                        (yyval.nodeval)->code = new string(". " + string((yyvsp[-2].strval)) + "\n");
                                            }
#line 1494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 139 "minil.y" /* yacc.c:1646  */
    {/*printf("ScalarDeclaration -> IDENT COMMA ScalarDeclaration\n");*/
                                                        Element temp(string((yyvsp[-2].strval)), 0);
                                                        symbolTable.insert(make_pair(string((yyvsp[-2].strval)), temp));
                                                        Node* tempnode = new Node();
                                                        nodes.push_back(tempnode);
                                                        (yyval.nodeval) = tempnode;
                                                        (yyval.nodeval)->code = new string(". " + string((yyvsp[-2].strval)) + "\n");
                                                        *((yyval.nodeval)->code) += *((yyvsp[0].nodeval)->code);
                                            }
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 148 "minil.y" /* yacc.c:1646  */
    {/*printf("VectorDeclaration -> IDENT COLON ARRAY LEFT_BRACKET NUMBER RIGHT_BRACKET OF INTEGER\n");*/
                                                                                                    Element temp(string((yyvsp[-7].strval)), stoi((yyvsp[-3].strval)));
                                                                                                    symbolTable.insert(make_pair(string((yyvsp[-7].strval)), temp));
                                                                                                    Node* tempnode = new Node();
                                                                                                    nodes.push_back(tempnode);
                                                                                                    (yyval.nodeval) = tempnode;
                                                                                                    (yyval.nodeval)->code = new string(".[] " + string((yyvsp[-7].strval)) + ", " + string((yyvsp[-3].strval)) + "\n");
                                                                                            }
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 159 "minil.y" /* yacc.c:1646  */
    {/*printf("Statement -> Var ASSIGN Expression\n");*/
                                                                        Node* temp = new Node();
                                                                        nodes.push_back(temp);
                                                                        (yyval.nodeval) = temp;
                                                                        (yyval.nodeval)-> code = new string(*((yyvsp[0].nodeval)->code));
                                                                        *((yyval.nodeval)->code) += "= " + string((yyvsp[-2].strval)) + ", " + *((yyvsp[0].nodeval)->value) + "\n";
                                                                    }
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 166 "minil.y" /* yacc.c:1646  */
    {/*printf("Statement -> Var ASSIGN Expression\n");*/
                                                                                                Node* temp = new Node();
                                                                                                nodes.push_back(temp);
                                                                                                (yyval.nodeval) = temp;
                                                                                                (yyval.nodeval)->code = new string(*((yyvsp[-3].nodeval)->code));
                                                                                                *((yyval.nodeval)->code) += *((yyvsp[0].nodeval)->code);
                                                                                                *((yyval.nodeval)->code) += "[]= " + string((yyvsp[-5].strval)) + ", " + *((yyvsp[-3].nodeval)->value) + ", " + *((yyvsp[0].nodeval)->value) + "\n";
                                                                                            }
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 174 "minil.y" /* yacc.c:1646  */
    {/*printf("Statement -> IF Bool-Expr THEN StatementSeq ENDIF\n");*/
                                                                        Node* temp = new Node();
                                                                        nodes.push_back(temp);
                                                                        (yyval.nodeval) = temp;
                                                                        string truelabel = makeLabel();
                                                                        string falselabel = makeLabel();
                                                                        string mycode = "?:= " + truelabel + ", " + *((yyvsp[-3].nodeval)->value) + "\n";
                                                                        mycode += ":= " + falselabel + "\n";
                                                                        mycode += ": " + truelabel + "\n";
                                                                        mycode += *((yyvsp[-1].nodeval)->code);
                                                                        mycode += ": " + falselabel + "\n";
                                                                        (yyval.nodeval)->code = new string(mycode);
                                                                    }
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 187 "minil.y" /* yacc.c:1646  */
    {/*printf("Statement -> IF Bool-Expr THEN StatementSeq ELSE StatementSeq ENDIF\n");*/
                                                                                    Node* temp = new Node();
                                                                                    nodes.push_back(temp);
                                                                                    (yyval.nodeval) = temp;
                                                                                    string iflabel = makeLabel();
                                                                                    string elselabel = makeLabel();
                                                                                    string endlabel = makeLabel();
                                                                                    string mycode = "?:= " + iflabel + ", " + *((yyvsp[-5].nodeval)->value) + "\n";
                                                                                    mycode += ":= " + elselabel + "\n";
                                                                                    mycode += ": " + iflabel + "\n";
                                                                                    mycode += *((yyvsp[-3].nodeval)->code);
                                                                                    mycode += ":= " + endlabel + "\n";
                                                                                    mycode += ": " + elselabel +"\n";
                                                                                    mycode += *((yyvsp[-1].nodeval)->code);
                                                                                    mycode += ": " + endlabel + "\n";
                                                                                    (yyval.nodeval)->code = new string(mycode);
                                                                                }
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 204 "minil.y" /* yacc.c:1646  */
    {/*printf("Statement -> WHILE Bool-Expr BEGINLOOP StatementSeq ENDLOOP\n");*/
                                                                        /*Node* temp = new Node();
                                                                        nodes.push_back(temp);
                                                                        $$ = temp;
                                                                        string startlabel = makeLabel();
                                                                        string looplabel = makeLabel();
                                                                        string endlabel = makeLabel();
                                                                        string mycode = ": " + startlabel + "\n";
                                                                        mycode += "?:= " + looplabel + *($2->value) + "\n";
                                                                        mycode += ":= " + endlabel + "\n";
                                                                        mycode += ": " + looplabel + "\n";
                                                                        mycode += *($4->code);
                                                                        mycode += ":= " + startlabel + "\n";
                                                                        mycode += ": " + endlabel + "\n";
                                                                        $$->code = new string(mycode);*/
                                                                    }
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 220 "minil.y" /* yacc.c:1646  */
    {/*printf("Statement -> DO BEGINLOOP StatementSeq ENDLOOP WHILE Bool-Expr\n");*/}
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 221 "minil.y" /* yacc.c:1646  */
    {/*printf("Statement -> ReadStmt\n");*/}
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 222 "minil.y" /* yacc.c:1646  */
    {/*printf("Statement -> WriteStmt\n");*/}
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 223 "minil.y" /* yacc.c:1646  */
    {/*printf("Statement -> CONTINUE\n");*/}
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 224 "minil.y" /* yacc.c:1646  */
    {/*printf("Statement -> RETURN Expression\n");*/}
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 227 "minil.y" /* yacc.c:1646  */
    {/*printf("ReadStmt -> READ IDENT\n");*/
                                                                                    Node* temp = new Node();
                                                                                    nodes.push_back(temp);
                                                                                    (yyval.nodeval) = temp;
                                                                                    (yyval.nodeval)->code = new string(".< " + string((yyvsp[0].strval)) + "\n");
                                                                                    /*unordered_map<string,Element>::const_iterator got = symbolTable.find(string($2));
                                                                                    if(got == symbolTable.end()) {
                                                                                        error = true;
                                                                                        cout << "ERROR: variable " + string($2) + " used but not declared.\n";
                                                                                    } else {
                                                                                        got->second.value = 
                                                                                    }*/
                                                                                }
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 240 "minil.y" /* yacc.c:1646  */
    {/*printf("ReadStmt -> READ IDENT L_SQUARE_BRACKET Expression R_SQUARE_BRACKET\n");*/
                                                                                    Node* temp = new Node();
                                                                                    nodes.push_back(temp);
                                                                                    (yyval.nodeval) = temp;
                                                                                    (yyval.nodeval)->code = new string(".[]< " + string((yyvsp[-3].strval)) + ", " + *((yyvsp[-1].nodeval)->value) + "\n");
                                                                                }
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 246 "minil.y" /* yacc.c:1646  */
    {/*printf("ReadStmt -> ReadStmt COMMA IDENT\n");*/
                                                                                    Node* temp = new Node();
                                                                                    nodes.push_back(temp);
                                                                                    (yyval.nodeval) = temp;
                                                                                    (yyval.nodeval)->code = new string(".< " + string((yyvsp[0].strval)) + "\n");
                                                                                }
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 252 "minil.y" /* yacc.c:1646  */
    {/*printf("ReadStmt -> ReadStmt COMMA IDENT L_SQUARE_BRACKET Expression R_SQUARE_BRACKET\n");*/
                                                                                        Node* temp = new Node();
                                                                                        nodes.push_back(temp);
                                                                                        (yyval.nodeval) = temp;
                                                                                        (yyval.nodeval)->code = new string(".[]< " + string((yyvsp[-3].strval)) + ", " + *((yyvsp[-1].nodeval)->value) + "\n");
                                                                                    }
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 260 "minil.y" /* yacc.c:1646  */
    {/*printf("WriteStmt -> WRITE IDENT\n");*/
                                                                                    Node* temp = new Node();
                                                                                    nodes.push_back(temp);
                                                                                    (yyval.nodeval) = temp; 
                                                                                    (yyval.nodeval)->code = new string(".> " + string((yyvsp[0].strval)) + "\n");
                                                                                }
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 266 "minil.y" /* yacc.c:1646  */
    {/*printf("WriteStmt -> WRITE IDENT L_SQUARE_BRACKET Expression R_SQUARE_BRACKET\n");*/
                                                                                    Node* temp = new Node();
                                                                                    nodes.push_back(temp);
                                                                                    (yyval.nodeval) = temp;  
                                                                                    (yyval.nodeval)->code = new string(".[]> " + string((yyvsp[-3].strval)) + ", " + *((yyvsp[-1].nodeval)->value) + "\n");
                                                                                }
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 272 "minil.y" /* yacc.c:1646  */
    {/*printf("WriteStmt -> WriteStmt COMMA IDENT\n");*/
                                                                                    Node* temp = new Node();
                                                                                    nodes.push_back(temp);
                                                                                    (yyval.nodeval) = temp;  
                                                                                    (yyval.nodeval)->code = new string(".> " + string((yyvsp[0].strval)) + "\n");
                                                                                }
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 278 "minil.y" /* yacc.c:1646  */
    {/*printf("WriteStmt -> WriteStmt COMMA IDENT L_SQUARE_BRACKET Expression R_SQUARE_BRACKET\n");*/
                                                                                            Node* temp = new Node();
                                                                                            nodes.push_back(temp);
                                                                                            (yyval.nodeval) = temp;  
                                                                                            (yyval.nodeval)->code = new string(".[]> " + string((yyvsp[-3].strval)) + ", " + *((yyvsp[-1].nodeval)->value) + "\n");
                                                                                        }
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 300 "minil.y" /* yacc.c:1646  */
    {/*printf("Expression -> Expression ADD Expr\n");*/
                                                    Node* temp = new Node();
                                                    nodes.push_back(temp);
                                                    (yyval.nodeval) = temp;
                                                    string* mytemp = new string(makeTemp());
                                                    (yyval.nodeval)->code = new string(*((yyvsp[-2].nodeval)->code) + *((yyvsp[0].nodeval)->code));
                                                    *((yyval.nodeval)->code) += ". " + *mytemp + "\n";
                                                    *((yyval.nodeval)->code) += "+ " + *mytemp + ", " + *((yyvsp[-2].nodeval)->value) + ", " + *((yyvsp[0].nodeval)->value) + "\n";
                                                    (yyval.nodeval)->value = mytemp;
                                                }
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 310 "minil.y" /* yacc.c:1646  */
    {/*printf("Expression -> Expression SUB Expr\n");*/
                                                    Node* temp = new Node();
                                                    nodes.push_back(temp);
                                                    (yyval.nodeval) = temp;
                                                    string* mytemp = new string(makeTemp());
                                                    (yyval.nodeval)->code = new string(". " + *mytemp + "\n");
                                                    *((yyval.nodeval)->code) += "- " + *mytemp + ", " + *((yyvsp[-2].nodeval)->value) + ", " + *((yyvsp[0].nodeval)->value) + "\n";
                                                    (yyval.nodeval)->value = mytemp;
                                                }
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 319 "minil.y" /* yacc.c:1646  */
    {/*printf("Expr -> Expr MULT Term\n");*/
                                                    Node* temp = new Node();
                                                    nodes.push_back(temp);
                                                    (yyval.nodeval) = temp;
                                                    string* mytemp = new string(makeTemp());
                                                    (yyval.nodeval)->code = new string(". " + *mytemp + "\n");
                                                    *((yyval.nodeval)->code) += "* " + *mytemp + ", " + *((yyvsp[-2].nodeval)->value) + ", " + *((yyvsp[0].nodeval)->value) + "\n";
                                                    (yyval.nodeval)->value = mytemp;
                                                }
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 328 "minil.y" /* yacc.c:1646  */
    {/*printf("Expr -> Expr DIV Term\n");*/
                                                    Node* temp = new Node();
                                                    nodes.push_back(temp);
                                                    (yyval.nodeval) = temp;
                                                    string* mytemp = new string(makeTemp());
                                                    (yyval.nodeval)->code = new string(". " + *mytemp + "\n");
                                                    *((yyval.nodeval)->code) += "/ " + *mytemp + ", " + *((yyvsp[-2].nodeval)->value) + ", " + *((yyvsp[0].nodeval)->value) + "\n";
                                                    (yyval.nodeval)->value = mytemp; 
                                                }
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 337 "minil.y" /* yacc.c:1646  */
    {/*printf("Expr -> Expr MOD Term\n");*/
                                                    Node* temp = new Node();
                                                    nodes.push_back(temp);
                                                    (yyval.nodeval) = temp;
                                                    string* mytemp = new string(makeTemp());
                                                    (yyval.nodeval)->code = new string(". " + *mytemp + "\n");
                                                    *((yyval.nodeval)->code) += "% " + *mytemp + ", " + *((yyvsp[-2].nodeval)->value) + ", " + *((yyvsp[0].nodeval)->value) + "\n";
                                                    (yyval.nodeval)->value = mytemp; 
                                                }
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 346 "minil.y" /* yacc.c:1646  */
    {/*printf("Term -> IDENT %s L_PAREN ExpressionSeq R_PAREN\n", $1);*/}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 347 "minil.y" /* yacc.c:1646  */
    {/*printf("Term -> Var\n");*/
                                                            Node* temp = new Node();
                                                            nodes.push_back(temp);
                                                            (yyval.nodeval) = temp;
                                                            (yyval.nodeval)->value = new string((yyvsp[0].strval));
                                                            (yyval.nodeval)->code = new string("");
                                                        }
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 354 "minil.y" /* yacc.c:1646  */
    {/*printf("Term -> Var\n");*/}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 355 "minil.y" /* yacc.c:1646  */
    {/*printf("Term -> NUMBER %s\n", $1);*/
                                                            Node* temp = new Node();
                                                            nodes.push_back(temp);
                                                            (yyval.nodeval) = temp;
                                                            (yyval.nodeval)->value = new string((yyvsp[0].strval));
                                                            (yyval.nodeval)->code = new string("");
                                                        }
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 362 "minil.y" /* yacc.c:1646  */
    {/*printf("Term -> L_PAREN Expression R_PAREN\n");*/}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 363 "minil.y" /* yacc.c:1646  */
    {/*printf("Term -> UMINUS Term\n");*/}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 366 "minil.y" /* yacc.c:1646  */
    {/*printf("ExpressionSeq -> epsilon\n");*/}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 367 "minil.y" /* yacc.c:1646  */
    {/*printf("ExpressionSeq -> ExpressionSeq1\n");*/
                                        Node* temp = new Node();
                                        nodes.push_back(temp);
                                        (yyval.nodeval) = temp;
                                        (yyval.nodeval)->code = new string(*((yyvsp[0].nodeval)->code));
                                    }
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 375 "minil.y" /* yacc.c:1646  */
    {/*printf("ExpressionSeq1 -> Expression\n");*/
                                                        Node* temp = new Node();
                                                        nodes.push_back(temp);
                                                        (yyval.nodeval) = temp;
                                                        (yyval.nodeval)->code = new string(*((yyvsp[0].nodeval)->code));
                                                    }
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 381 "minil.y" /* yacc.c:1646  */
    {/*printf("ExpressionSeq1 -> ExpressionSeq1 COMMA Expression\n");*/
                                                        Node* temp = new Node();
                                                        nodes.push_back(temp);
                                                        (yyval.nodeval) = temp;
                                                        (yyval.nodeval)->code = new string(*((yyvsp[-2].nodeval)->code) + *((yyvsp[0].nodeval)->code));
                                                    }
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 389 "minil.y" /* yacc.c:1646  */
    {/*printf("Bool-Expr -> Bool-Expr OR Relation-And-Expr\n");*/}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 390 "minil.y" /* yacc.c:1646  */
    {/*printf("Relation-And-Expr -> Relation-And-Expr AND Relation-Expr\n");*/}
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 391 "minil.y" /* yacc.c:1646  */
    {/*printf("Relation-Expr -> Expression Comp Expression\n");*/}
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 392 "minil.y" /* yacc.c:1646  */
    {/*printf("Relation-Expr -> TRUE\n");*/
                                                    Node* temp = new Node();
                                                    nodes.push_back(temp);
                                                    (yyval.nodeval) = temp;
                                                    (yyval.nodeval)->value = new string("1");
                                                    (yyval.nodeval)->code = new string("");
                                                }
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 399 "minil.y" /* yacc.c:1646  */
    {/*printf("Relation-Expr -> FALSE\n");*/
                                                    Node* temp = new Node();
                                                    nodes.push_back(temp);
                                                    (yyval.nodeval) = temp;
                                                    (yyval.nodeval)-> value = new string("0");
                                                    (yyval.nodeval)->code = new string("");
                                                }
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 406 "minil.y" /* yacc.c:1646  */
    {/*printf("Relation-Expr -> L_PAREN Bool-Expr R_PAREN\n");*/}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 407 "minil.y" /* yacc.c:1646  */
    {/*printf("Relation-Expr -> NOT Relation-Expr\n");*/}
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 410 "minil.y" /* yacc.c:1646  */
    {/*printf("Comp -> EQ\n");*/}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 411 "minil.y" /* yacc.c:1646  */
    {/*printf("Comp -> NEQ\n");*/}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 412 "minil.y" /* yacc.c:1646  */
    {/*printf("Comp -> LT\n");*/}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 413 "minil.y" /* yacc.c:1646  */
    {/*printf("Comp -> GT\n");*/}
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 414 "minil.y" /* yacc.c:1646  */
    {/*printf("Comp -> LTE\n");*/}
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 415 "minil.y" /* yacc.c:1646  */
    {/*printf("Comp -> GTE\n");*/}
#line 1980 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1984 "y.tab.c" /* yacc.c:1646  */
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
#line 418 "minil.y" /* yacc.c:1906  */


int main( int argc, char* argv[] ) {  
    // Allow for command-line specification of source file
    if ( argc > 1  &&  freopen( argv[1], "r", stdin) == NULL ) {
        cout << argv[0] << ": file " << argv[1]; 
        cout << " cannot be opened.\n";
        exit( 1 );
    }
    string compilerName;
    compilerName = argv[0];           // For use in error messages
    yyparse();                                // build syntax tree
    for(auto i : symbolTable) {
        cout << "var:" << i.first << " size:" << i.second.size << " localto:" <<i.second.localTo << endl;
    }
    if(!error) {
        for(auto s : functions) {
            // cout << "function: " << s.first << endl;
            cout << s.second;
        }
    }
    for(Node* n : nodes) {
        delete n;
    }
    //string xxx = makeTemp();
}


void yyerror(const char *msg) {
   printf("** Line %d, position %d: %s\n", currLine, currPos, msg);
}
