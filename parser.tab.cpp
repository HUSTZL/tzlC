/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 3 "parser.ypp"

#include "def.h"
extern int ErrorCharNum;
extern int yylineno;
extern char *yytext;
extern FILE *yyin;
void yyerror(const char* fmt, ...);
extern "C" int yylex();
#define SavePosition t->Line=yylloc.first_line;t->Column=yylloc.first_column
typedef struct YYLVAL {
       int                  type_int;
	float                type_float;
	char                 type_id[32];

	ProgAST                     *program;
	vector <ExtDefAST *>        ExtDefList;  	    //外部定义（外部变量、函数）列表
       ExtDefAST                   *ExtDef;
       vector <VarDecAST*>         ExtDecList;        //外部、局部变量列表
       TypeAST                     *Specifier;
       VarDecAST                   *VarDec;
       CompStmAST                  *CompSt;
	vector <ParamAST *>         ParamList;         //形参列表
	ParamAST                    *ParamDec;

	vector <StmAST *>           StmList;
	StmAST                      *Stmt;
	vector <DefAST *>           DefList;
	DefAST                      *Def;
       vector <VarDecAST *>        DecList;
       VarDecAST                   *Dec;
       ExpAST                      *Exp;
	vector <ExpAST *>           Args;       	       //实参列表
       CaseStmAST                  *Case;
       vector <CaseStmAST *>       CaseList;
}YYLVAL;
#define YYSTYPE YYLVAL


#line 110 "parser.tab.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_ID = 4,                         /* ID  */
  YYSYMBOL_TYPE = 5,                       /* TYPE  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_DPLUS = 7,                      /* DPLUS  */
  YYSYMBOL_DMINUS = 8,                     /* DMINUS  */
  YYSYMBOL_PLUSD = 9,                      /* PLUSD  */
  YYSYMBOL_MINUSD = 10,                    /* MINUSD  */
  YYSYMBOL_LP = 11,                        /* LP  */
  YYSYMBOL_RP = 12,                        /* RP  */
  YYSYMBOL_LB = 13,                        /* LB  */
  YYSYMBOL_RB = 14,                        /* RB  */
  YYSYMBOL_LC = 15,                        /* LC  */
  YYSYMBOL_RC = 16,                        /* RC  */
  YYSYMBOL_SEMI = 17,                      /* SEMI  */
  YYSYMBOL_COMMA = 18,                     /* COMMA  */
  YYSYMBOL_PLUS = 19,                      /* PLUS  */
  YYSYMBOL_MINUS = 20,                     /* MINUS  */
  YYSYMBOL_STAR = 21,                      /* STAR  */
  YYSYMBOL_DIV = 22,                       /* DIV  */
  YYSYMBOL_MOD = 23,                       /* MOD  */
  YYSYMBOL_GE = 24,                        /* GE  */
  YYSYMBOL_GT = 25,                        /* GT  */
  YYSYMBOL_LE = 26,                        /* LE  */
  YYSYMBOL_LT = 27,                        /* LT  */
  YYSYMBOL_NE = 28,                        /* NE  */
  YYSYMBOL_EQ = 29,                        /* EQ  */
  YYSYMBOL_ASSIGN = 30,                    /* ASSIGN  */
  YYSYMBOL_AND = 31,                       /* AND  */
  YYSYMBOL_OR = 32,                        /* OR  */
  YYSYMBOL_NOT = 33,                       /* NOT  */
  YYSYMBOL_IF = 34,                        /* IF  */
  YYSYMBOL_ELSE = 35,                      /* ELSE  */
  YYSYMBOL_WHILE = 36,                     /* WHILE  */
  YYSYMBOL_RETURN = 37,                    /* RETURN  */
  YYSYMBOL_FOR = 38,                       /* FOR  */
  YYSYMBOL_BREAK = 39,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 40,                  /* CONTINUE  */
  YYSYMBOL_SWITCH = 41,                    /* SWITCH  */
  YYSYMBOL_CASE = 42,                      /* CASE  */
  YYSYMBOL_DEFAULT = 43,                   /* DEFAULT  */
  YYSYMBOL_COLON = 44,                     /* COLON  */
  YYSYMBOL_EXT_DEF_LIST = 45,              /* EXT_DEF_LIST  */
  YYSYMBOL_EXT_VAR_DEF = 46,               /* EXT_VAR_DEF  */
  YYSYMBOL_FUNC_DEF = 47,                  /* FUNC_DEF  */
  YYSYMBOL_FUNC_DEC = 48,                  /* FUNC_DEC  */
  YYSYMBOL_EXT_DEC_LIST = 49,              /* EXT_DEC_LIST  */
  YYSYMBOL_PARAM_LIST = 50,                /* PARAM_LIST  */
  YYSYMBOL_PARAM_DEC = 51,                 /* PARAM_DEC  */
  YYSYMBOL_VAR_DEF = 52,                   /* VAR_DEF  */
  YYSYMBOL_DEC_LIST = 53,                  /* DEC_LIST  */
  YYSYMBOL_DEF_LIST = 54,                  /* DEF_LIST  */
  YYSYMBOL_COMP_STM = 55,                  /* COMP_STM  */
  YYSYMBOL_STM_LIST = 56,                  /* STM_LIST  */
  YYSYMBOL_EXP_STMT = 57,                  /* EXP_STMT  */
  YYSYMBOL_IF_THEN = 58,                   /* IF_THEN  */
  YYSYMBOL_IF_THEN_ELSE = 59,              /* IF_THEN_ELSE  */
  YYSYMBOL_FUNC_CALL = 60,                 /* FUNC_CALL  */
  YYSYMBOL_ARGS = 61,                      /* ARGS  */
  YYSYMBOL_FUNCTION = 62,                  /* FUNCTION  */
  YYSYMBOL_PARAM = 63,                     /* PARAM  */
  YYSYMBOL_ARG = 64,                       /* ARG  */
  YYSYMBOL_CALL = 65,                      /* CALL  */
  YYSYMBOL_CALL0 = 66,                     /* CALL0  */
  YYSYMBOL_LABEL = 67,                     /* LABEL  */
  YYSYMBOL_GOTO = 68,                      /* GOTO  */
  YYSYMBOL_JLT = 69,                       /* JLT  */
  YYSYMBOL_JLE = 70,                       /* JLE  */
  YYSYMBOL_JGT = 71,                       /* JGT  */
  YYSYMBOL_JGE = 72,                       /* JGE  */
  YYSYMBOL_JEQ = 73,                       /* JEQ  */
  YYSYMBOL_JNE = 74,                       /* JNE  */
  YYSYMBOL_END = 75,                       /* END  */
  YYSYMBOL_UMINUS = 76,                    /* UMINUS  */
  YYSYMBOL_UPLUS = 77,                     /* UPLUS  */
  YYSYMBOL_LOWER_THEN_ELSE = 78,           /* LOWER_THEN_ELSE  */
  YYSYMBOL_YYACCEPT = 79,                  /* $accept  */
  YYSYMBOL_program = 80,                   /* program  */
  YYSYMBOL_ExtDefList = 81,                /* ExtDefList  */
  YYSYMBOL_ExtDef = 82,                    /* ExtDef  */
  YYSYMBOL_Specifier = 83,                 /* Specifier  */
  YYSYMBOL_ExtDecList = 84,                /* ExtDecList  */
  YYSYMBOL_VarDec = 85,                    /* VarDec  */
  YYSYMBOL_ParamVarDec = 86,               /* ParamVarDec  */
  YYSYMBOL_ParamList = 87,                 /* ParamList  */
  YYSYMBOL_ParamDec = 88,                  /* ParamDec  */
  YYSYMBOL_CompSt = 89,                    /* CompSt  */
  YYSYMBOL_StmList = 90,                   /* StmList  */
  YYSYMBOL_DefList = 91,                   /* DefList  */
  YYSYMBOL_Def = 92,                       /* Def  */
  YYSYMBOL_DecList = 93,                   /* DecList  */
  YYSYMBOL_Dec = 94,                       /* Dec  */
  YYSYMBOL_Case = 95,                      /* Case  */
  YYSYMBOL_CaseList = 96,                  /* CaseList  */
  YYSYMBOL_Stmt = 97,                      /* Stmt  */
  YYSYMBOL_Exp = 98,                       /* Exp  */
  YYSYMBOL_Args = 99                       /* Args  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   555

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  149

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   333


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    98,    98,   108,   109,   112,   114,   115,   117,   123,
     124,   126,   127,   129,   132,   133,   134,   136,   139,   141,
     142,   144,   145,   147,   149,   150,   152,   153,   156,   158,
     159,   161,   162,   163,   164,   165,   166,   167,   168,   170,
     171,   173,   174,   175,   178,   181,   182,   183,   184,   185,
     186,   187,   188,   190,   191,   192,   194,   195,   196,   197,
     198,   199,   202,   203,   204,   205,   208,   209,   210,   211,
     213,   214,   215
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "ID", "TYPE",
  "FLOAT", "DPLUS", "DMINUS", "PLUSD", "MINUSD", "LP", "RP", "LB", "RB",
  "LC", "RC", "SEMI", "COMMA", "PLUS", "MINUS", "STAR", "DIV", "MOD", "GE",
  "GT", "LE", "LT", "NE", "EQ", "ASSIGN", "AND", "OR", "NOT", "IF", "ELSE",
  "WHILE", "RETURN", "FOR", "BREAK", "CONTINUE", "SWITCH", "CASE",
  "DEFAULT", "COLON", "EXT_DEF_LIST", "EXT_VAR_DEF", "FUNC_DEF",
  "FUNC_DEC", "EXT_DEC_LIST", "PARAM_LIST", "PARAM_DEC", "VAR_DEF",
  "DEC_LIST", "DEF_LIST", "COMP_STM", "STM_LIST", "EXP_STMT", "IF_THEN",
  "IF_THEN_ELSE", "FUNC_CALL", "ARGS", "FUNCTION", "PARAM", "ARG", "CALL",
  "CALL0", "LABEL", "GOTO", "JLT", "JLE", "JGT", "JGE", "JEQ", "JNE",
  "END", "UMINUS", "UPLUS", "LOWER_THEN_ELSE", "$accept", "program",
  "ExtDefList", "ExtDef", "Specifier", "ExtDecList", "VarDec",
  "ParamVarDec", "ParamList", "ParamDec", "CompSt", "StmList", "DefList",
  "Def", "DecList", "Dec", "Case", "CaseList", "Stmt", "Exp", "Args", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-108)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-20)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      15,  -108,    31,  -108,    15,    24,  -108,  -108,    50,    46,
      47,    15,  -108,    74,    64,    76,     9,  -108,    71,  -108,
    -108,  -108,  -108,    42,    15,  -108,    15,  -108,  -108,  -108,
      64,   106,    15,    28,    69,    80,    91,  -108,   100,  -108,
     200,   200,   200,   200,   200,   200,   107,   109,     6,   112,
     102,   121,   113,  -108,   125,    63,   215,  -108,   200,  -108,
      64,  -108,   200,    65,    65,   241,    65,    65,    65,   200,
     200,  -108,   267,   200,  -108,  -108,   200,  -108,  -108,  -108,
    -108,  -108,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   449,  -108,   449,    44,
    -108,   293,   319,  -108,   345,   371,   152,   152,    65,    65,
     149,   526,   526,   526,   526,    68,    68,   475,   108,   501,
    -108,   200,   147,   147,   200,   134,   449,   117,  -108,   397,
     119,   147,   200,   200,   119,    -5,  -108,   423,   170,  -108,
    -108,   120,   147,    63,   106,  -108,  -108,   156,  -108
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     8,     0,     2,     3,     0,     1,     4,    11,     0,
       9,    14,     5,     0,     0,     0,     0,    15,     0,    11,
      10,    13,    17,     0,     0,    12,    21,     7,     6,    16,
       0,     0,    21,    26,     0,    24,     0,    68,    67,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,     0,     0,     0,    22,     0,    23,
       0,    43,    70,    62,    63,     0,    52,    51,    55,     0,
       0,    34,     0,     0,    41,    42,     0,    18,    20,    64,
      65,    31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    25,    71,     0,
      50,     0,     0,    33,     0,     0,    45,    46,    47,    48,
      49,    57,    56,    59,    58,    60,    61,    44,    53,    54,
      66,     0,     0,     0,     0,     0,    72,    35,    37,     0,
       0,     0,     0,     0,    29,     0,    36,     0,     0,    30,
      39,     0,     0,     0,     0,    38,    28,     0,    40
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -108,  -108,   159,  -108,     8,   151,   -23,  -108,  -108,   155,
     153,   -49,   143,  -108,   122,  -108,  -108,    75,  -107,   -40,
    -108
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,     5,     9,    10,    22,    16,    17,
      53,    54,    31,    32,    34,    35,   134,   135,    55,    56,
      99
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      63,    64,    65,    66,    67,    68,    78,    33,    72,    37,
      38,   140,    39,    40,    41,   127,   128,    42,    96,    15,
       1,    23,    98,    71,   136,    43,    44,    24,     8,   101,
     102,     6,    15,   104,    30,   145,   105,    33,   141,    45,
      30,    13,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,    26,    58,    27,
      13,    11,   121,    12,    36,    14,    37,    38,    19,    39,
      40,    41,    79,    80,    42,    79,    80,    18,    26,   -19,
      21,   126,    43,    44,   129,    25,    59,    82,    83,    84,
      85,    86,   137,   138,   146,   147,    45,    46,    60,    47,
      48,    49,    50,    51,    52,   -19,   -19,    36,    61,    37,
      38,    62,    39,    40,    41,    79,    80,    42,    69,    74,
      70,    26,   -19,    73,    76,    43,    44,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    75,    45,
      46,    77,    47,    48,    49,    50,    51,    52,    36,   130,
      37,    38,   131,    39,    40,    41,    79,    80,    42,    79,
      80,   133,    26,     7,   144,    20,    43,    44,    82,    83,
      84,    85,   148,    84,    85,    57,    28,    79,    80,    29,
      45,    46,    97,    47,    48,    49,    50,    51,    52,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    37,    38,     0,    39,    40,    41,   139,
       0,    42,     0,     0,   143,     0,     0,     0,     0,    43,
      44,     0,    79,    80,     0,     0,     0,     0,     0,     0,
       0,     0,    81,    45,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    79,    80,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    79,    80,     0,     0,     0,     0,
       0,     0,     0,     0,   103,     0,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      79,    80,     0,     0,     0,   122,     0,     0,     0,     0,
       0,     0,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    79,    80,     0,     0,
       0,   123,     0,     0,     0,     0,     0,     0,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    79,    80,     0,     0,     0,     0,     0,     0,
       0,     0,   124,     0,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    79,    80,
       0,     0,     0,   125,     0,     0,     0,     0,     0,     0,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    79,    80,     0,     0,     0,     0,
       0,     0,     0,     0,   132,     0,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      79,    80,     0,     0,     0,   142,     0,     0,     0,     0,
       0,     0,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    79,    80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    79,    80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,     0,    94,    95,    79,    80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,     0,    94,    79,    80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    82,    83,    84,    85,    86,
       0,     0,     0,     0,    91,    92
};

static const yytype_int16 yycheck[] =
{
      40,    41,    42,    43,    44,    45,    55,    30,    48,     3,
       4,    16,     6,     7,     8,   122,   123,    11,    58,    11,
       5,    12,    62,    17,   131,    19,    20,    18,     4,    69,
      70,     0,    24,    73,    26,   142,    76,    60,    43,    33,
      32,    13,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    12,    15,    30,    17,
      13,    11,    18,    17,     1,    18,     3,     4,     4,     6,
       7,     8,     7,     8,    11,     7,     8,     3,    15,    16,
       4,   121,    19,    20,   124,    14,    17,    19,    20,    21,
      22,    23,   132,   133,   143,   144,    33,    34,    18,    36,
      37,    38,    39,    40,    41,    42,    43,     1,    17,     3,
       4,    11,     6,     7,     8,     7,     8,    11,    11,    17,
      11,    15,    16,    11,    11,    19,    20,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    17,    33,
      34,    16,    36,    37,    38,    39,    40,    41,     1,    15,
       3,     4,    35,     6,     7,     8,     7,     8,    11,     7,
       8,    42,    15,     4,    44,    14,    19,    20,    19,    20,
      21,    22,    16,    21,    22,    32,    23,     7,     8,    24,
      33,    34,    60,    36,    37,    38,    39,    40,    41,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,     3,     4,    -1,     6,     7,     8,   134,
      -1,    11,    -1,    -1,    44,    -1,    -1,    -1,    -1,    19,
      20,    -1,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    33,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,     7,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
       7,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,     7,     8,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,     7,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
       7,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    31,    32,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    31,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    28,    29
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    80,    81,    82,    83,     0,    81,     4,    84,
      85,    11,    17,    13,    18,    83,    87,    88,     3,     4,
      84,     4,    86,    12,    18,    14,    15,    17,    89,    88,
      83,    91,    92,    85,    93,    94,     1,     3,     4,     6,
       7,     8,    11,    19,    20,    33,    34,    36,    37,    38,
      39,    40,    41,    89,    90,    97,    98,    91,    30,    17,
      18,    17,    11,    98,    98,    98,    98,    98,    98,    11,
      11,    17,    98,    11,    17,    17,    11,    16,    90,     7,
       8,    17,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    98,    93,    98,    99,
      12,    98,    98,    17,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      12,    18,    12,    12,    17,    12,    98,    97,    97,    98,
      15,    35,    17,    42,    95,    96,    97,    98,    98,    96,
      16,    43,    12,    44,    44,    97,    90,    90,    16
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    79,    80,    81,    81,    82,    82,    82,    83,    84,
      84,    85,    85,    86,    87,    87,    87,    88,    89,    90,
      90,    91,    91,    92,    93,    93,    94,    94,    95,    96,
      96,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      99,    99,    99
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     3,     6,     6,     1,     1,
       3,     1,     4,     1,     0,     1,     3,     2,     4,     0,
       2,     0,     2,     3,     1,     3,     1,     3,     4,     1,
       2,     2,     1,     3,     2,     5,     7,     5,     9,     7,
      10,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     3,     3,     2,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     4,     1,     1,     1,
       0,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: ExtDefList  */
#line 98 "parser.ypp"
                     {(yyval.program)=new ProgAST(); (yyval.program)->ExtDefs=(yyvsp[0].ExtDefList);
                      if (Errors::IsEmpty() && ErrorCharNum==0)
                           { (yyval.program)->DisplayAST(0); }         //无词法、语法错误显示语法树
                      else {Errors::ErrorsDisplay();return 0;}
                      (yyval.program)->Semantics0();                   //静态语义检查
                      if (Errors::IsEmpty())
                          (yyval.program)->GenIR();                    //中间代码生成
                      exit(0);
                      }
#line 1774 "parser.tab.cpp"
    break;

  case 3: /* ExtDefList: %empty  */
#line 108 "parser.ypp"
            {(yyval.ExtDefList)=vector <ExtDefAST*>();}
#line 1780 "parser.tab.cpp"
    break;

  case 4: /* ExtDefList: ExtDef ExtDefList  */
#line 109 "parser.ypp"
                              {(yyvsp[0].ExtDefList).insert((yyvsp[0].ExtDefList).begin(),(yyvsp[-1].ExtDef));(yyval.ExtDefList)=(yyvsp[0].ExtDefList);}
#line 1786 "parser.tab.cpp"
    break;

  case 5: /* ExtDef: Specifier ExtDecList SEMI  */
#line 112 "parser.ypp"
                                      { ExtVarDefAST *t=new ExtVarDefAST();     //创建一个外部变量声明的对象
                                        t->Type=(yyvsp[-2].Specifier); t->ExtVars=(yyvsp[-1].ExtDecList); (yyval.ExtDef)=t; SavePosition;}
#line 1793 "parser.tab.cpp"
    break;

  case 6: /* ExtDef: Specifier ID LP ParamList RP CompSt  */
#line 114 "parser.ypp"
                                               {FuncDefAST *t=new FuncDefAST();t->Type=(yyvsp[-5].Specifier);t->Name=(yyvsp[-4].type_id);t->Params=(yyvsp[-2].ParamList); t->Body=(yyvsp[0].CompSt);(yyval.ExtDef)=t;SavePosition;}
#line 1799 "parser.tab.cpp"
    break;

  case 7: /* ExtDef: Specifier ID LP ParamList RP SEMI  */
#line 115 "parser.ypp"
                                               {FuncDefAST *t=new FuncDefAST();t->Type=(yyvsp[-5].Specifier);t->Name=(yyvsp[-4].type_id);t->Params=(yyvsp[-2].ParamList);(yyval.ExtDef)=t;SavePosition;}
#line 1805 "parser.tab.cpp"
    break;

  case 8: /* Specifier: TYPE  */
#line 117 "parser.ypp"
                 {  BasicTypeAST *t=new BasicTypeAST(); ;
                    if (string((yyvsp[0].type_id))==string("int"))    t->Type=T_INT;
                    if (string((yyvsp[0].type_id))==string("float"))  t->Type=T_FLOAT;
                    if (string((yyvsp[0].type_id))==string("void"))   t->Type=T_VOID;  (yyval.Specifier)=t;SavePosition;}
#line 1814 "parser.tab.cpp"
    break;

  case 9: /* ExtDecList: VarDec  */
#line 123 "parser.ypp"
                     {(yyval.ExtDecList)=vector < VarDecAST*>();(yyval.ExtDecList).push_back((yyvsp[0].VarDec));}
#line 1820 "parser.tab.cpp"
    break;

  case 10: /* ExtDecList: VarDec COMMA ExtDecList  */
#line 124 "parser.ypp"
                                     {(yyvsp[0].ExtDecList).insert((yyvsp[0].ExtDecList).begin(),(yyvsp[-2].VarDec));(yyval.ExtDecList)=(yyvsp[0].ExtDecList);}
#line 1826 "parser.tab.cpp"
    break;

  case 11: /* VarDec: ID  */
#line 126 "parser.ypp"
              {VarDecAST *t=new VarDecAST(); t->Name=string((yyvsp[0].type_id)); (yyval.VarDec)=t; SavePosition;}
#line 1832 "parser.tab.cpp"
    break;

  case 12: /* VarDec: VarDec LB INT RB  */
#line 127 "parser.ypp"
                               {(yyvsp[-3].VarDec)->Dims.push_back((yyvsp[-1].type_int));(yyval.VarDec)=(yyvsp[-3].VarDec);}
#line 1838 "parser.tab.cpp"
    break;

  case 13: /* ParamVarDec: ID  */
#line 129 "parser.ypp"
                 {VarDecAST *t=new VarDecAST(); t->Name=string((yyvsp[0].type_id)); (yyval.VarDec)=t; SavePosition;}
#line 1844 "parser.tab.cpp"
    break;

  case 14: /* ParamList: %empty  */
#line 132 "parser.ypp"
           {(yyval.ParamList)=vector < ParamAST *>();}
#line 1850 "parser.tab.cpp"
    break;

  case 15: /* ParamList: ParamDec  */
#line 133 "parser.ypp"
                    {(yyval.ParamList)=vector < ParamAST *>(); (yyval.ParamList).push_back((yyvsp[0].ParamDec)); }
#line 1856 "parser.tab.cpp"
    break;

  case 16: /* ParamList: ParamList COMMA ParamDec  */
#line 134 "parser.ypp"
                                     {(yyvsp[-2].ParamList).push_back((yyvsp[0].ParamDec)); (yyval.ParamList)=(yyvsp[-2].ParamList);}
#line 1862 "parser.tab.cpp"
    break;

  case 17: /* ParamDec: Specifier ParamVarDec  */
#line 136 "parser.ypp"
                                  {ParamAST* t=new ParamAST();t->Type=(yyvsp[-1].Specifier);t->ParamName=(yyvsp[0].VarDec); (yyval.ParamDec)=t; SavePosition;}
#line 1868 "parser.tab.cpp"
    break;

  case 18: /* CompSt: LC DefList StmList RC  */
#line 139 "parser.ypp"
                                 {CompStmAST *t=new CompStmAST();t->Decls=(yyvsp[-2].DefList);t->Stms=(yyvsp[-1].StmList);(yyval.CompSt)=t;SavePosition;}
#line 1874 "parser.tab.cpp"
    break;

  case 19: /* StmList: %empty  */
#line 141 "parser.ypp"
         {(yyval.StmList)=vector <StmAST *>(); }
#line 1880 "parser.tab.cpp"
    break;

  case 20: /* StmList: Stmt StmList  */
#line 142 "parser.ypp"
                        {(yyval.StmList)=(yyvsp[0].StmList);(yyval.StmList).insert((yyval.StmList).begin(),(yyvsp[-1].Stmt));}
#line 1886 "parser.tab.cpp"
    break;

  case 21: /* DefList: %empty  */
#line 144 "parser.ypp"
         {(yyval.DefList)=vector <DefAST *>();  }
#line 1892 "parser.tab.cpp"
    break;

  case 22: /* DefList: Def DefList  */
#line 145 "parser.ypp"
                      {(yyval.DefList)=(yyvsp[0].DefList);(yyval.DefList).insert((yyval.DefList).begin(),(yyvsp[-1].Def));}
#line 1898 "parser.tab.cpp"
    break;

  case 23: /* Def: Specifier DecList SEMI  */
#line 147 "parser.ypp"
                              {DefAST *t=new DefAST();t->Type=(yyvsp[-2].Specifier);t->LocVars=(yyvsp[-1].DecList);(yyval.Def)=t;SavePosition;}
#line 1904 "parser.tab.cpp"
    break;

  case 24: /* DecList: Dec  */
#line 149 "parser.ypp"
              {(yyval.DecList)=vector <VarDecAST *>(); (yyval.DecList).push_back((yyvsp[0].Dec));}
#line 1910 "parser.tab.cpp"
    break;

  case 25: /* DecList: Dec COMMA DecList  */
#line 150 "parser.ypp"
                            {(yyval.DecList)=(yyvsp[0].DecList);(yyval.DecList).insert((yyval.DecList).begin(),(yyvsp[-2].Dec));}
#line 1916 "parser.tab.cpp"
    break;

  case 26: /* Dec: VarDec  */
#line 152 "parser.ypp"
               {(yyval.Dec)=(yyvsp[0].VarDec);}
#line 1922 "parser.tab.cpp"
    break;

  case 27: /* Dec: VarDec ASSIGN Exp  */
#line 153 "parser.ypp"
                            {(yyval.Dec)=(yyvsp[-2].VarDec);(yyval.Dec)->Exp=(yyvsp[0].Exp); }
#line 1928 "parser.tab.cpp"
    break;

  case 28: /* Case: CASE Exp COLON StmList  */
#line 156 "parser.ypp"
                                {CaseStmAST *t=new CaseStmAST(); t->Cond=(yyvsp[-2].Exp); t->Body=(yyvsp[0].StmList); (yyval.Case)=t; SavePosition;}
#line 1934 "parser.tab.cpp"
    break;

  case 29: /* CaseList: Case  */
#line 158 "parser.ypp"
                            {(yyval.CaseList)=vector <CaseStmAST *>(); (yyval.CaseList).push_back((yyvsp[0].Case)); }
#line 1940 "parser.tab.cpp"
    break;

  case 30: /* CaseList: Case CaseList  */
#line 159 "parser.ypp"
                            {(yyval.CaseList)=(yyvsp[0].CaseList); (yyval.CaseList).insert((yyval.CaseList).begin(),(yyvsp[-1].Case)); }
#line 1946 "parser.tab.cpp"
    break;

  case 31: /* Stmt: Exp SEMI  */
#line 161 "parser.ypp"
                                {ExprStmAST *t=new ExprStmAST();t->Exp=(yyvsp[-1].Exp);(yyval.Stmt)=t;SavePosition;}
#line 1952 "parser.tab.cpp"
    break;

  case 32: /* Stmt: CompSt  */
#line 162 "parser.ypp"
                                {(yyval.Stmt)=(yyvsp[0].CompSt);}
#line 1958 "parser.tab.cpp"
    break;

  case 33: /* Stmt: RETURN Exp SEMI  */
#line 163 "parser.ypp"
                                {ReturnStmAST *t=new ReturnStmAST();t->Exp=(yyvsp[-1].Exp);(yyval.Stmt)=t;SavePosition;}
#line 1964 "parser.tab.cpp"
    break;

  case 34: /* Stmt: RETURN SEMI  */
#line 164 "parser.ypp"
                        {ReturnStmAST *t=new ReturnStmAST();t->Exp=NULL;(yyval.Stmt)=t;SavePosition;}
#line 1970 "parser.tab.cpp"
    break;

  case 35: /* Stmt: IF LP Exp RP Stmt  */
#line 165 "parser.ypp"
                                                {IfStmAST *t=new IfStmAST();t->Cond=(yyvsp[-2].Exp);t->ThenStm=(yyvsp[0].Stmt);(yyval.Stmt)=t; SavePosition;}
#line 1976 "parser.tab.cpp"
    break;

  case 36: /* Stmt: IF LP Exp RP Stmt ELSE Stmt  */
#line 166 "parser.ypp"
                                                    {IfElseStmAST *t=new IfElseStmAST();t->Cond=(yyvsp[-4].Exp);t->ThenStm=(yyvsp[-2].Stmt);t->ElseStm=(yyvsp[0].Stmt);(yyval.Stmt)=t;SavePosition;}
#line 1982 "parser.tab.cpp"
    break;

  case 37: /* Stmt: WHILE LP Exp RP Stmt  */
#line 167 "parser.ypp"
                                {WhileStmAST *t=new WhileStmAST();t->Cond=(yyvsp[-2].Exp);t->Body=(yyvsp[0].Stmt); (yyval.Stmt)=t; SavePosition; }
#line 1988 "parser.tab.cpp"
    break;

  case 38: /* Stmt: FOR LP Exp SEMI Exp SEMI Exp RP Stmt  */
#line 169 "parser.ypp"
              {ForStmAST *t=new ForStmAST(); t->SinExp=(yyvsp[-6].Exp); t->Cond=(yyvsp[-4].Exp); t->EndExp=(yyvsp[-2].Exp); t->Body=(yyvsp[0].Stmt); (yyval.Stmt)=t; SavePosition;}
#line 1994 "parser.tab.cpp"
    break;

  case 39: /* Stmt: SWITCH LP Exp RP LC CaseList RC  */
#line 170 "parser.ypp"
                                          {SwitchStmAST *t=new SwitchStmAST(); t->Exp=(yyvsp[-4].Exp); t->Cases=(yyvsp[-1].CaseList); t->containDefault=0; (yyval.Stmt)=t; SavePosition;}
#line 2000 "parser.tab.cpp"
    break;

  case 40: /* Stmt: SWITCH LP Exp RP LC CaseList DEFAULT COLON StmList RC  */
#line 172 "parser.ypp"
              {SwitchStmAST *t=new SwitchStmAST(); t->Exp=(yyvsp[-7].Exp); t->Cases=(yyvsp[-4].CaseList); t->containDefault=1; t->Default=(yyvsp[-1].StmList); (yyval.Stmt)=t; SavePosition;}
#line 2006 "parser.tab.cpp"
    break;

  case 41: /* Stmt: BREAK SEMI  */
#line 173 "parser.ypp"
                            {BreakStmAST *t=new BreakStmAST(); (yyval.Stmt)=t; SavePosition; }
#line 2012 "parser.tab.cpp"
    break;

  case 42: /* Stmt: CONTINUE SEMI  */
#line 174 "parser.ypp"
                            {ContinueStmAST *t=new ContinueStmAST(); (yyval.Stmt)=t; SavePosition; }
#line 2018 "parser.tab.cpp"
    break;

  case 43: /* Stmt: error SEMI  */
#line 175 "parser.ypp"
                     {(yyval.Stmt)=NULL;}
#line 2024 "parser.tab.cpp"
    break;

  case 44: /* Exp: Exp ASSIGN Exp  */
#line 178 "parser.ypp"
                       {AssignAST *t=new AssignAST();t->Op=ASSIGN;
                t->LeftValExp=(yyvsp[-2].Exp);t->RightValExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2031 "parser.tab.cpp"
    break;

  case 45: /* Exp: Exp PLUS Exp  */
#line 181 "parser.ypp"
                     {BinaryExprAST *t=new BinaryExprAST();t->Op=PLUS;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2037 "parser.tab.cpp"
    break;

  case 46: /* Exp: Exp MINUS Exp  */
#line 182 "parser.ypp"
                     {BinaryExprAST *t=new BinaryExprAST();t->Op=MINUS;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2043 "parser.tab.cpp"
    break;

  case 47: /* Exp: Exp STAR Exp  */
#line 183 "parser.ypp"
                     {BinaryExprAST *t=new BinaryExprAST();t->Op=STAR;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2049 "parser.tab.cpp"
    break;

  case 48: /* Exp: Exp DIV Exp  */
#line 184 "parser.ypp"
                     {BinaryExprAST *t=new BinaryExprAST();t->Op=DIV;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2055 "parser.tab.cpp"
    break;

  case 49: /* Exp: Exp MOD Exp  */
#line 185 "parser.ypp"
                     {BinaryExprAST *t=new BinaryExprAST();t->Op=MOD;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2061 "parser.tab.cpp"
    break;

  case 50: /* Exp: LP Exp RP  */
#line 186 "parser.ypp"
                     {(yyval.Exp)=(yyvsp[-1].Exp);}
#line 2067 "parser.tab.cpp"
    break;

  case 51: /* Exp: MINUS Exp  */
#line 187 "parser.ypp"
                                {UnaryExprAST *t=new UnaryExprAST();t->Op=UMINUS;t->Exp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2073 "parser.tab.cpp"
    break;

  case 52: /* Exp: PLUS Exp  */
#line 188 "parser.ypp"
                                {UnaryExprAST *t=new UnaryExprAST();t->Op=UPLUS;t->Exp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2079 "parser.tab.cpp"
    break;

  case 53: /* Exp: Exp AND Exp  */
#line 190 "parser.ypp"
                      {BinaryExprAST *t=new BinaryExprAST();t->Op=AND;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2085 "parser.tab.cpp"
    break;

  case 54: /* Exp: Exp OR Exp  */
#line 191 "parser.ypp"
                      {BinaryExprAST *t=new BinaryExprAST();t->Op=OR;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2091 "parser.tab.cpp"
    break;

  case 55: /* Exp: NOT Exp  */
#line 192 "parser.ypp"
                      {UnaryExprAST *t=new UnaryExprAST();t->Op=NOT;t->Exp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2097 "parser.tab.cpp"
    break;

  case 56: /* Exp: Exp GT Exp  */
#line 194 "parser.ypp"
                        {BinaryExprAST *t=new BinaryExprAST();t->Op=GT;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2103 "parser.tab.cpp"
    break;

  case 57: /* Exp: Exp GE Exp  */
#line 195 "parser.ypp"
                        {BinaryExprAST *t=new BinaryExprAST();t->Op=GE;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2109 "parser.tab.cpp"
    break;

  case 58: /* Exp: Exp LT Exp  */
#line 196 "parser.ypp"
                        {BinaryExprAST *t=new BinaryExprAST();t->Op=LT;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2115 "parser.tab.cpp"
    break;

  case 59: /* Exp: Exp LE Exp  */
#line 197 "parser.ypp"
                        {BinaryExprAST *t=new BinaryExprAST();t->Op=LE;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2121 "parser.tab.cpp"
    break;

  case 60: /* Exp: Exp NE Exp  */
#line 198 "parser.ypp"
                        {BinaryExprAST *t=new BinaryExprAST();t->Op=NE;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2127 "parser.tab.cpp"
    break;

  case 61: /* Exp: Exp EQ Exp  */
#line 199 "parser.ypp"
                        {BinaryExprAST *t=new BinaryExprAST();t->Op=EQ;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2133 "parser.tab.cpp"
    break;

  case 62: /* Exp: DPLUS Exp  */
#line 202 "parser.ypp"
                        {UnaryExprAST *t=new UnaryExprAST();t->Op=DPLUS;t->Exp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2139 "parser.tab.cpp"
    break;

  case 63: /* Exp: DMINUS Exp  */
#line 203 "parser.ypp"
                        {UnaryExprAST *t=new UnaryExprAST();t->Op=DMINUS;t->Exp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2145 "parser.tab.cpp"
    break;

  case 64: /* Exp: Exp DPLUS  */
#line 204 "parser.ypp"
                        {UnaryExprAST *t=new UnaryExprAST();t->Op=PLUSD;t->Exp=(yyvsp[-1].Exp);(yyval.Exp)=t;SavePosition;}
#line 2151 "parser.tab.cpp"
    break;

  case 65: /* Exp: Exp DMINUS  */
#line 205 "parser.ypp"
                        {UnaryExprAST *t=new UnaryExprAST();t->Op=MINUSD;t->Exp=(yyvsp[-1].Exp);(yyval.Exp)=t;SavePosition;}
#line 2157 "parser.tab.cpp"
    break;

  case 66: /* Exp: ID LP Args RP  */
#line 208 "parser.ypp"
                        {FuncCallAST *t=new FuncCallAST();t->Name=(yyvsp[-3].type_id);t->Params=(yyvsp[-1].Args);(yyval.Exp)=t;SavePosition;}
#line 2163 "parser.tab.cpp"
    break;

  case 67: /* Exp: ID  */
#line 209 "parser.ypp"
                        {VarAST *t=new VarAST();t->Name=(yyvsp[0].type_id);(yyval.Exp)=t;SavePosition;}
#line 2169 "parser.tab.cpp"
    break;

  case 68: /* Exp: INT  */
#line 210 "parser.ypp"
                        {ConstAST *t=new ConstAST();t->Type=T_INT;t->ConstVal.constINT=(yyvsp[0].type_int);(yyval.Exp)=t;SavePosition;}
#line 2175 "parser.tab.cpp"
    break;

  case 69: /* Exp: FLOAT  */
#line 211 "parser.ypp"
                        {ConstAST *t=new ConstAST();t->Type=T_FLOAT;t->ConstVal.constFLOAT=(yyvsp[0].type_float);(yyval.Exp)=t;SavePosition;}
#line 2181 "parser.tab.cpp"
    break;

  case 70: /* Args: %empty  */
#line 213 "parser.ypp"
        {}
#line 2187 "parser.tab.cpp"
    break;

  case 71: /* Args: Exp  */
#line 214 "parser.ypp"
              {(yyval.Args)=vector <ExpAST *>(); (yyval.Args).push_back((yyvsp[0].Exp)); }
#line 2193 "parser.tab.cpp"
    break;

  case 72: /* Args: Args COMMA Exp  */
#line 215 "parser.ypp"
                            {(yyval.Args)=(yyvsp[-2].Args);(yyval.Args).push_back((yyvsp[0].Exp));}
#line 2199 "parser.tab.cpp"
    break;


#line 2203 "parser.tab.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 218 "parser.ypp"


int main(int argc, char *argv[]){
	yyin=fopen(argv[1],"r");
	if (!yyin) return 0;
	yylineno=1;
	yyparse();
	return 0;
	}

#include<stdarg.h>
void yyerror(const char* fmt, ...)
{
    Errors::ErrorAdd(yylloc.first_line,yylloc.first_column,fmt);
}
