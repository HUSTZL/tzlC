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
       int         type_int;
	float       type_float;
	char        type_id[32];

	ProgAST     *program;
	vector <ExtDefAST *> ExtDefList;  	    //外部定义（外部变量、函数）列表
       ExtDefAST   *ExtDef;
       vector <VarDecAST*>  ExtDecList;        //外部、局部变量列表
       TypeAST     *Specifier;
       VarDecAST *VarDec;
       CompStmAST  *CompSt;
	vector <ParamAST *>  ParamList;         //形参列表
	ParamAST *ParamDec;

	vector <StmAST *>   StmList;
	StmAST      *Stmt;
	vector <DefAST *>   DefList;
	DefAST      *Def;
       vector <VarDecAST *> DecList;
       VarDecAST   *Dec;
       ExpAST      *Exp;
	vector <ExpAST *>    Args;       	//实参列表
}YYLVAL;
#define YYSTYPE YYLVAL


#line 108 "parser.tab.cpp"

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
  YYSYMBOL_GE = 23,                        /* GE  */
  YYSYMBOL_GT = 24,                        /* GT  */
  YYSYMBOL_LE = 25,                        /* LE  */
  YYSYMBOL_LT = 26,                        /* LT  */
  YYSYMBOL_NE = 27,                        /* NE  */
  YYSYMBOL_EQ = 28,                        /* EQ  */
  YYSYMBOL_ASSIGN = 29,                    /* ASSIGN  */
  YYSYMBOL_AND = 30,                       /* AND  */
  YYSYMBOL_OR = 31,                        /* OR  */
  YYSYMBOL_NOT = 32,                       /* NOT  */
  YYSYMBOL_IF = 33,                        /* IF  */
  YYSYMBOL_ELSE = 34,                      /* ELSE  */
  YYSYMBOL_WHILE = 35,                     /* WHILE  */
  YYSYMBOL_RETURN = 36,                    /* RETURN  */
  YYSYMBOL_FOR = 37,                       /* FOR  */
  YYSYMBOL_COLON = 38,                     /* COLON  */
  YYSYMBOL_STRUCT = 39,                    /* STRUCT  */
  YYSYMBOL_EXT_DEF_LIST = 40,              /* EXT_DEF_LIST  */
  YYSYMBOL_EXT_VAR_DEF = 41,               /* EXT_VAR_DEF  */
  YYSYMBOL_FUNC_DEF = 42,                  /* FUNC_DEF  */
  YYSYMBOL_FUNC_DEC = 43,                  /* FUNC_DEC  */
  YYSYMBOL_EXT_DEC_LIST = 44,              /* EXT_DEC_LIST  */
  YYSYMBOL_PARAM_LIST = 45,                /* PARAM_LIST  */
  YYSYMBOL_PARAM_DEC = 46,                 /* PARAM_DEC  */
  YYSYMBOL_VAR_DEF = 47,                   /* VAR_DEF  */
  YYSYMBOL_DEC_LIST = 48,                  /* DEC_LIST  */
  YYSYMBOL_DEF_LIST = 49,                  /* DEF_LIST  */
  YYSYMBOL_COMP_STM = 50,                  /* COMP_STM  */
  YYSYMBOL_STM_LIST = 51,                  /* STM_LIST  */
  YYSYMBOL_EXP_STMT = 52,                  /* EXP_STMT  */
  YYSYMBOL_IF_THEN = 53,                   /* IF_THEN  */
  YYSYMBOL_IF_THEN_ELSE = 54,              /* IF_THEN_ELSE  */
  YYSYMBOL_FUNC_CALL = 55,                 /* FUNC_CALL  */
  YYSYMBOL_ARGS = 56,                      /* ARGS  */
  YYSYMBOL_FUNCTION = 57,                  /* FUNCTION  */
  YYSYMBOL_PARAM = 58,                     /* PARAM  */
  YYSYMBOL_ARG = 59,                       /* ARG  */
  YYSYMBOL_CALL = 60,                      /* CALL  */
  YYSYMBOL_CALL0 = 61,                     /* CALL0  */
  YYSYMBOL_LABEL = 62,                     /* LABEL  */
  YYSYMBOL_GOTO = 63,                      /* GOTO  */
  YYSYMBOL_JLT = 64,                       /* JLT  */
  YYSYMBOL_JLE = 65,                       /* JLE  */
  YYSYMBOL_JGT = 66,                       /* JGT  */
  YYSYMBOL_JGE = 67,                       /* JGE  */
  YYSYMBOL_JEQ = 68,                       /* JEQ  */
  YYSYMBOL_JNE = 69,                       /* JNE  */
  YYSYMBOL_END = 70,                       /* END  */
  YYSYMBOL_UMINUS = 71,                    /* UMINUS  */
  YYSYMBOL_UPLUS = 72,                     /* UPLUS  */
  YYSYMBOL_LOWER_THEN_ELSE = 73,           /* LOWER_THEN_ELSE  */
  YYSYMBOL_YYACCEPT = 74,                  /* $accept  */
  YYSYMBOL_program = 75,                   /* program  */
  YYSYMBOL_ExtDefList = 76,                /* ExtDefList  */
  YYSYMBOL_ExtDef = 77,                    /* ExtDef  */
  YYSYMBOL_Specifier = 78,                 /* Specifier  */
  YYSYMBOL_ExtDecList = 79,                /* ExtDecList  */
  YYSYMBOL_VarDec = 80,                    /* VarDec  */
  YYSYMBOL_ParamList = 81,                 /* ParamList  */
  YYSYMBOL_ParamDec = 82,                  /* ParamDec  */
  YYSYMBOL_CompSt = 83,                    /* CompSt  */
  YYSYMBOL_StmList = 84,                   /* StmList  */
  YYSYMBOL_DefList = 85,                   /* DefList  */
  YYSYMBOL_Def = 86,                       /* Def  */
  YYSYMBOL_DecList = 87,                   /* DecList  */
  YYSYMBOL_Dec = 88,                       /* Dec  */
  YYSYMBOL_ArrExp = 89,                    /* ArrExp  */
  YYSYMBOL_Stmt = 90,                      /* Stmt  */
  YYSYMBOL_Exp = 91,                       /* Exp  */
  YYSYMBOL_Args = 92                       /* Args  */
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
#define YYLAST   483

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  134

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   328


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
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    91,    91,   101,   102,   105,   109,   110,   112,   120,
     121,   123,   124,   127,   128,   129,   131,   134,   136,   137,
     139,   140,   142,   145,   146,   148,   149,   150,   152,   153,
     154,   158,   159,   160,   161,   162,   163,   164,   165,   167,
     170,   173,   174,   175,   176,   177,   178,   179,   181,   182,
     183,   185,   186,   187,   188,   189,   190,   193,   194,   195,
     196,   199,   200,   201,   202,   205,   206,   207
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
  "LC", "RC", "SEMI", "COMMA", "PLUS", "MINUS", "STAR", "DIV", "GE", "GT",
  "LE", "LT", "NE", "EQ", "ASSIGN", "AND", "OR", "NOT", "IF", "ELSE",
  "WHILE", "RETURN", "FOR", "COLON", "STRUCT", "EXT_DEF_LIST",
  "EXT_VAR_DEF", "FUNC_DEF", "FUNC_DEC", "EXT_DEC_LIST", "PARAM_LIST",
  "PARAM_DEC", "VAR_DEF", "DEC_LIST", "DEF_LIST", "COMP_STM", "STM_LIST",
  "EXP_STMT", "IF_THEN", "IF_THEN_ELSE", "FUNC_CALL", "ARGS", "FUNCTION",
  "PARAM", "ARG", "CALL", "CALL0", "LABEL", "GOTO", "JLT", "JLE", "JGT",
  "JGE", "JEQ", "JNE", "END", "UMINUS", "UPLUS", "LOWER_THEN_ELSE",
  "$accept", "program", "ExtDefList", "ExtDef", "Specifier", "ExtDecList",
  "VarDec", "ParamList", "ParamDec", "CompSt", "StmList", "DefList", "Def",
  "DecList", "Dec", "ArrExp", "Stmt", "Exp", "Args", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-111)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-19)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,  -111,    17,  -111,     8,    65,  -111,  -111,    49,    60,
      38,     8,  -111,    82,    89,    89,    56,  -111,    95,  -111,
    -111,    93,    14,     8,  -111,     8,  -111,  -111,  -111,    89,
      51,     8,    -1,    98,    99,   101,  -111,   105,  -111,   157,
     157,   157,   157,   157,   157,   108,   111,    94,   118,  -111,
      96,    51,   171,  -111,   124,  -111,    89,  -111,   157,    57,
      57,   196,    57,    57,    57,   157,   157,  -111,   221,   157,
    -111,  -111,  -111,  -111,  -111,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   130,   371,
    -111,   371,    92,  -111,   246,   271,  -111,   296,     3,     3,
      57,    57,   455,   455,   455,   455,    13,    13,   396,   445,
     421,   130,    -2,   371,  -111,   157,    88,    88,   157,    62,
    -111,   130,   371,   106,  -111,   321,  -111,  -111,    88,   157,
    -111,   346,    88,  -111
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     8,     0,     2,     3,     0,     1,     4,    11,     0,
       9,    13,     5,     0,     0,     0,     0,    14,     0,    11,
      10,    16,     0,     0,    12,    20,     7,     6,    15,     0,
       0,    20,    25,     0,    23,     0,    63,    62,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,     0,    21,     0,    22,     0,    39,    65,    57,
      58,     0,    47,    46,    50,     0,     0,    34,     0,     0,
      17,    19,    59,    60,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
      24,    66,     0,    45,     0,     0,    33,     0,    41,    42,
      43,    44,    52,    51,    54,    53,    55,    56,    40,    48,
      49,     0,     0,    28,    61,     0,     0,     0,     0,     0,
      27,     0,    67,    35,    37,     0,    29,    30,     0,     0,
      36,     0,     0,    38
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -111,  -111,   138,  -111,    50,   132,    -6,  -111,   125,   129,
     102,   116,  -111,   103,  -111,   -58,  -110,   -39,  -111
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     4,     5,     9,    10,    16,    17,    49,
      50,    30,    31,    33,    34,   112,    51,    52,    92
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      59,    60,    61,    62,    63,    64,   123,   124,    68,    21,
      72,    73,    13,     1,   120,    89,   121,     6,   130,    91,
      72,    73,   133,    32,    77,    78,    94,    95,    54,    25,
      97,    26,    75,    76,    77,    78,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   113,
      32,    13,    35,   119,    36,    37,    14,    38,    39,    40,
      11,    15,    41,   127,    72,    73,    25,   -18,    22,     8,
      42,    43,   113,    15,    23,    29,   122,    12,   126,   125,
     121,    29,   113,    44,    45,    18,    46,    47,    48,    35,
     131,    36,    37,    19,    38,    39,    40,    36,    37,    41,
      38,    39,    40,    25,   114,    41,    13,    42,    43,    24,
     115,    67,    70,    42,    43,    55,    58,    56,    57,    65,
      44,    45,    66,    46,    47,    48,    44,    36,    37,    69,
      38,    39,    40,    36,    37,    41,    38,    39,    40,    88,
     128,    41,     7,    42,    43,   111,    20,    53,    28,    42,
      43,    27,     0,    71,     0,     0,    44,     0,     0,    90,
      36,    37,    44,    38,    39,    40,     0,     0,    41,     0,
       0,     0,     0,     0,     0,     0,    42,    43,    72,    73,
       0,     0,     0,     0,     0,     0,     0,     0,    74,    44,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    72,    73,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    72,    73,
       0,     0,     0,     0,     0,     0,     0,     0,    96,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    72,    73,     0,     0,     0,   116,     0,
       0,     0,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    72,    73,
       0,     0,     0,   117,     0,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    72,    73,     0,     0,     0,     0,     0,
       0,     0,     0,   118,     0,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    72,    73,
       0,     0,     0,     0,     0,     0,     0,     0,   129,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    72,    73,     0,     0,     0,   132,     0,
       0,     0,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    72,    73,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    72,    73,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,     0,    86,    87,    72,    73,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
       0,    86,    72,    73,     0,     0,     0,     0,     0,     0,
       0,     0,    72,    73,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    75,    76,    77,    78,     0,     0,
       0,     0,    83,    84
};

static const yytype_int16 yycheck[] =
{
      39,    40,    41,    42,    43,    44,   116,   117,    47,    15,
       7,     8,    13,     5,    16,    54,    18,     0,   128,    58,
       7,     8,   132,    29,    21,    22,    65,    66,    29,    15,
      69,    17,    19,    20,    21,    22,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      56,    13,     1,   111,     3,     4,    18,     6,     7,     8,
      11,    11,    11,   121,     7,     8,    15,    16,    12,     4,
      19,    20,   111,    23,    18,    25,   115,    17,    16,   118,
      18,    31,   121,    32,    33,     3,    35,    36,    37,     1,
     129,     3,     4,     4,     6,     7,     8,     3,     4,    11,
       6,     7,     8,    15,    12,    11,    13,    19,    20,    14,
      18,    17,    16,    19,    20,    17,    11,    18,    17,    11,
      32,    33,    11,    35,    36,    37,    32,     3,     4,    11,
       6,     7,     8,     3,     4,    11,     6,     7,     8,    15,
      34,    11,     4,    19,    20,    15,    14,    31,    23,    19,
      20,    22,    -1,    51,    -1,    -1,    32,    -1,    -1,    56,
       3,     4,    32,     6,     7,     8,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    20,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    32,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,     7,     8,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,     7,     8,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,     7,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,     7,     8,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    30,    31,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    30,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     7,     8,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    75,    76,    77,    78,     0,    76,     4,    79,
      80,    11,    17,    13,    18,    78,    81,    82,     3,     4,
      79,    80,    12,    18,    14,    15,    17,    83,    82,    78,
      85,    86,    80,    87,    88,     1,     3,     4,     6,     7,
       8,    11,    19,    20,    32,    33,    35,    36,    37,    83,
      84,    90,    91,    85,    29,    17,    18,    17,    11,    91,
      91,    91,    91,    91,    91,    11,    11,    17,    91,    11,
      16,    84,     7,     8,    17,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    15,    91,
      87,    91,    92,    12,    91,    91,    17,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    15,    89,    91,    12,    18,    12,    12,    17,    89,
      16,    18,    91,    90,    90,    91,    16,    89,    34,    17,
      90,    91,    12,    90
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    74,    75,    76,    76,    77,    77,    77,    78,    79,
      79,    80,    80,    81,    81,    81,    82,    83,    84,    84,
      85,    85,    86,    87,    87,    88,    88,    88,    89,    89,
      89,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    92,    92,    92
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     3,     6,     6,     1,     1,
       3,     1,     4,     0,     1,     3,     2,     4,     0,     2,
       0,     2,     3,     1,     3,     1,     3,     5,     1,     3,
       3,     2,     1,     3,     2,     5,     7,     5,     9,     2,
       3,     3,     3,     3,     3,     3,     2,     2,     3,     3,
       2,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     4,     1,     1,     1,     0,     1,     3
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
#line 91 "parser.ypp"
                     {(yyval.program)=new ProgAST(); (yyval.program)->ExtDefs=(yyvsp[0].ExtDefList);
                      if (Errors::IsEmpty() && ErrorCharNum==0)
                           { (yyval.program)->DisplayAST(0); }         //无词法、语法错误显示语法树
                      else {Errors::ErrorsDisplay();return 0;}
                      (yyval.program)->Semantics0();                   //静态语义检查
                      if (Errors::IsEmpty())
                          (yyval.program)->GenIR();                    //中间代码生成
                      system("pause");
                      }
#line 1741 "parser.tab.cpp"
    break;

  case 3: /* ExtDefList: %empty  */
#line 101 "parser.ypp"
            {(yyval.ExtDefList)=vector <ExtDefAST*>();}
#line 1747 "parser.tab.cpp"
    break;

  case 4: /* ExtDefList: ExtDef ExtDefList  */
#line 102 "parser.ypp"
                              {(yyvsp[0].ExtDefList).insert((yyvsp[0].ExtDefList).begin(),(yyvsp[-1].ExtDef));(yyval.ExtDefList)=(yyvsp[0].ExtDefList);}
#line 1753 "parser.tab.cpp"
    break;

  case 5: /* ExtDef: Specifier ExtDecList SEMI  */
#line 105 "parser.ypp"
                                      { ExtVarDefAST *t=new ExtVarDefAST();     //创建一个外部变量声明的对象
                                        t->Type=(yyvsp[-2].Specifier); t->ExtVars=(yyvsp[-1].ExtDecList); (yyval.ExtDef)=t; SavePosition;}
#line 1760 "parser.tab.cpp"
    break;

  case 6: /* ExtDef: Specifier ID LP ParamList RP CompSt  */
#line 109 "parser.ypp"
                                               {FuncDefAST *t=new FuncDefAST();t->Type=(yyvsp[-5].Specifier);t->Name=(yyvsp[-4].type_id);t->Params=(yyvsp[-2].ParamList); t->Body=(yyvsp[0].CompSt);(yyval.ExtDef)=t;SavePosition;}
#line 1766 "parser.tab.cpp"
    break;

  case 7: /* ExtDef: Specifier ID LP ParamList RP SEMI  */
#line 110 "parser.ypp"
                                               {FuncDefAST *t=new FuncDefAST();t->Type=(yyvsp[-5].Specifier);t->Name=(yyvsp[-4].type_id);t->Params=(yyvsp[-2].ParamList);(yyval.ExtDef)=t;SavePosition;}
#line 1772 "parser.tab.cpp"
    break;

  case 8: /* Specifier: TYPE  */
#line 112 "parser.ypp"
                 {  BasicTypeAST *t=new BasicTypeAST(); ;
                    if (string((yyvsp[0].type_id))==string("int"))    t->Type=T_INT;
                    if (string((yyvsp[0].type_id))==string("float"))  t->Type=T_FLOAT;
                    if (string((yyvsp[0].type_id))==string("void"))   t->Type=T_VOID;  (yyval.Specifier)=t;SavePosition;}
#line 1781 "parser.tab.cpp"
    break;

  case 9: /* ExtDecList: VarDec  */
#line 120 "parser.ypp"
                     {(yyval.ExtDecList)=vector < VarDecAST*>();(yyval.ExtDecList).push_back((yyvsp[0].VarDec));}
#line 1787 "parser.tab.cpp"
    break;

  case 10: /* ExtDecList: VarDec COMMA ExtDecList  */
#line 121 "parser.ypp"
                                     {(yyvsp[0].ExtDecList).insert((yyvsp[0].ExtDecList).begin(),(yyvsp[-2].VarDec));(yyval.ExtDecList)=(yyvsp[0].ExtDecList);}
#line 1793 "parser.tab.cpp"
    break;

  case 11: /* VarDec: ID  */
#line 123 "parser.ypp"
              {VarDecAST *t=new VarDecAST(); t->Name=string((yyvsp[0].type_id)); (yyval.VarDec)=t; SavePosition;}
#line 1799 "parser.tab.cpp"
    break;

  case 12: /* VarDec: VarDec LB INT RB  */
#line 124 "parser.ypp"
                               {(yyvsp[-3].VarDec)->Dims.push_back((yyvsp[-1].type_int));(yyval.VarDec)=(yyvsp[-3].VarDec);}
#line 1805 "parser.tab.cpp"
    break;

  case 13: /* ParamList: %empty  */
#line 127 "parser.ypp"
           {(yyval.ParamList)=vector < ParamAST *>();}
#line 1811 "parser.tab.cpp"
    break;

  case 14: /* ParamList: ParamDec  */
#line 128 "parser.ypp"
                    {(yyval.ParamList)=vector < ParamAST *>(); (yyval.ParamList).push_back((yyvsp[0].ParamDec)); }
#line 1817 "parser.tab.cpp"
    break;

  case 15: /* ParamList: ParamList COMMA ParamDec  */
#line 129 "parser.ypp"
                                     {(yyvsp[-2].ParamList).push_back((yyvsp[0].ParamDec)); (yyval.ParamList)=(yyvsp[-2].ParamList);}
#line 1823 "parser.tab.cpp"
    break;

  case 16: /* ParamDec: Specifier VarDec  */
#line 131 "parser.ypp"
                                   {ParamAST* t=new ParamAST();t->Type=(yyvsp[-1].Specifier);t->ParamName=(yyvsp[0].VarDec); (yyval.ParamDec)=t; SavePosition;}
#line 1829 "parser.tab.cpp"
    break;

  case 17: /* CompSt: LC DefList StmList RC  */
#line 134 "parser.ypp"
                                 {CompStmAST *t=new CompStmAST();t->Decls=(yyvsp[-2].DefList);t->Stms=(yyvsp[-1].StmList);(yyval.CompSt)=t;SavePosition;}
#line 1835 "parser.tab.cpp"
    break;

  case 18: /* StmList: %empty  */
#line 136 "parser.ypp"
         {(yyval.StmList)=vector <StmAST *>(); }
#line 1841 "parser.tab.cpp"
    break;

  case 19: /* StmList: Stmt StmList  */
#line 137 "parser.ypp"
                        {(yyval.StmList)=(yyvsp[0].StmList);(yyval.StmList).insert((yyval.StmList).begin(),(yyvsp[-1].Stmt));}
#line 1847 "parser.tab.cpp"
    break;

  case 20: /* DefList: %empty  */
#line 139 "parser.ypp"
         {(yyval.DefList)=vector <DefAST *>();  }
#line 1853 "parser.tab.cpp"
    break;

  case 21: /* DefList: Def DefList  */
#line 140 "parser.ypp"
                      {(yyval.DefList)=(yyvsp[0].DefList);(yyval.DefList).insert((yyval.DefList).begin(),(yyvsp[-1].Def));}
#line 1859 "parser.tab.cpp"
    break;

  case 22: /* Def: Specifier DecList SEMI  */
#line 142 "parser.ypp"
                              {DefAST *t=new DefAST();t->Type=(yyvsp[-2].Specifier);t->LocVars=(yyvsp[-1].DecList);(yyval.Def)=t;SavePosition;}
#line 1865 "parser.tab.cpp"
    break;

  case 23: /* DecList: Dec  */
#line 145 "parser.ypp"
              {(yyval.DecList)=vector <VarDecAST *>(); (yyval.DecList).push_back((yyvsp[0].Dec));}
#line 1871 "parser.tab.cpp"
    break;

  case 24: /* DecList: Dec COMMA DecList  */
#line 146 "parser.ypp"
                            {(yyval.DecList)=(yyvsp[0].DecList);(yyval.DecList).insert((yyval.DecList).begin(),(yyvsp[-2].Dec));}
#line 1877 "parser.tab.cpp"
    break;

  case 25: /* Dec: VarDec  */
#line 148 "parser.ypp"
              {(yyval.Dec)=(yyvsp[0].VarDec);}
#line 1883 "parser.tab.cpp"
    break;

  case 26: /* Dec: VarDec ASSIGN Exp  */
#line 149 "parser.ypp"
                            {(yyval.Dec)=(yyvsp[-2].VarDec);(yyval.Dec)->Exp=(yyvsp[0].Exp); }
#line 1889 "parser.tab.cpp"
    break;

  case 27: /* Dec: VarDec ASSIGN LC ArrExp RC  */
#line 150 "parser.ypp"
                                        {}
#line 1895 "parser.tab.cpp"
    break;

  case 28: /* ArrExp: Exp  */
#line 152 "parser.ypp"
                                     {}
#line 1901 "parser.tab.cpp"
    break;

  case 29: /* ArrExp: LC ArrExp RC  */
#line 153 "parser.ypp"
                                     {}
#line 1907 "parser.tab.cpp"
    break;

  case 30: /* ArrExp: ArrExp COMMA ArrExp  */
#line 154 "parser.ypp"
                                     {}
#line 1913 "parser.tab.cpp"
    break;

  case 31: /* Stmt: Exp SEMI  */
#line 158 "parser.ypp"
                                {ExprStmAST *t=new ExprStmAST();t->Exp=(yyvsp[-1].Exp);(yyval.Stmt)=t;SavePosition;}
#line 1919 "parser.tab.cpp"
    break;

  case 32: /* Stmt: CompSt  */
#line 159 "parser.ypp"
                                {(yyval.Stmt)=(yyvsp[0].CompSt);}
#line 1925 "parser.tab.cpp"
    break;

  case 33: /* Stmt: RETURN Exp SEMI  */
#line 160 "parser.ypp"
                                {ReturnStmAST *t=new ReturnStmAST();t->Exp=(yyvsp[-1].Exp);(yyval.Stmt)=t;SavePosition;}
#line 1931 "parser.tab.cpp"
    break;

  case 34: /* Stmt: RETURN SEMI  */
#line 161 "parser.ypp"
                            {ReturnStmAST *t=new ReturnStmAST();t->Exp=NULL;(yyval.Stmt)=t;SavePosition;}
#line 1937 "parser.tab.cpp"
    break;

  case 35: /* Stmt: IF LP Exp RP Stmt  */
#line 162 "parser.ypp"
                                                {IfStmAST *t=new IfStmAST();t->Cond=(yyvsp[-2].Exp);t->ThenStm=(yyvsp[0].Stmt);(yyval.Stmt)=t; SavePosition;}
#line 1943 "parser.tab.cpp"
    break;

  case 36: /* Stmt: IF LP Exp RP Stmt ELSE Stmt  */
#line 163 "parser.ypp"
                                                    {IfElseStmAST *t=new IfElseStmAST();t->Cond=(yyvsp[-4].Exp);t->ThenStm=(yyvsp[-2].Stmt);t->ElseStm=(yyvsp[0].Stmt);(yyval.Stmt)=t;SavePosition;}
#line 1949 "parser.tab.cpp"
    break;

  case 37: /* Stmt: WHILE LP Exp RP Stmt  */
#line 164 "parser.ypp"
                                {WhileStmAST *t=new WhileStmAST();t->Cond=(yyvsp[-2].Exp);t->Body=(yyvsp[0].Stmt);(yyval.Stmt)=t; SavePosition;}
#line 1955 "parser.tab.cpp"
    break;

  case 38: /* Stmt: FOR LP Exp SEMI Exp SEMI Exp RP Stmt  */
#line 166 "parser.ypp"
              {ForStmAST *t=new ForStmAST(); t->SinExp=(yyvsp[-6].Exp); t->Cond=(yyvsp[-4].Exp); t->EndExp=(yyvsp[-2].Exp); t->Body=(yyvsp[0].Stmt); (yyval.Stmt)=t; SavePosition;}
#line 1961 "parser.tab.cpp"
    break;

  case 39: /* Stmt: error SEMI  */
#line 167 "parser.ypp"
                     {(yyval.Stmt)=NULL;}
#line 1967 "parser.tab.cpp"
    break;

  case 40: /* Exp: Exp ASSIGN Exp  */
#line 170 "parser.ypp"
                       {AssignAST *t=new AssignAST();t->Op=ASSIGN;
                t->LeftValExp=(yyvsp[-2].Exp);t->RightValExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 1974 "parser.tab.cpp"
    break;

  case 41: /* Exp: Exp PLUS Exp  */
#line 173 "parser.ypp"
                     {BinaryExprAST *t=new BinaryExprAST();t->Op=PLUS;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 1980 "parser.tab.cpp"
    break;

  case 42: /* Exp: Exp MINUS Exp  */
#line 174 "parser.ypp"
                     {BinaryExprAST *t=new BinaryExprAST();t->Op=MINUS;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 1986 "parser.tab.cpp"
    break;

  case 43: /* Exp: Exp STAR Exp  */
#line 175 "parser.ypp"
                     {BinaryExprAST *t=new BinaryExprAST();t->Op=STAR;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 1992 "parser.tab.cpp"
    break;

  case 44: /* Exp: Exp DIV Exp  */
#line 176 "parser.ypp"
                     {BinaryExprAST *t=new BinaryExprAST();t->Op=DIV;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 1998 "parser.tab.cpp"
    break;

  case 45: /* Exp: LP Exp RP  */
#line 177 "parser.ypp"
                     {(yyval.Exp)=(yyvsp[-1].Exp);}
#line 2004 "parser.tab.cpp"
    break;

  case 46: /* Exp: MINUS Exp  */
#line 178 "parser.ypp"
                                {UnaryExprAST *t=new UnaryExprAST();t->Op=UMINUS;t->Exp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2010 "parser.tab.cpp"
    break;

  case 47: /* Exp: PLUS Exp  */
#line 179 "parser.ypp"
                                {UnaryExprAST *t=new UnaryExprAST();t->Op=UPLUS;t->Exp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2016 "parser.tab.cpp"
    break;

  case 48: /* Exp: Exp AND Exp  */
#line 181 "parser.ypp"
                      {BinaryExprAST *t=new BinaryExprAST();t->Op=AND;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2022 "parser.tab.cpp"
    break;

  case 49: /* Exp: Exp OR Exp  */
#line 182 "parser.ypp"
                      {BinaryExprAST *t=new BinaryExprAST();t->Op=OR;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2028 "parser.tab.cpp"
    break;

  case 50: /* Exp: NOT Exp  */
#line 183 "parser.ypp"
                      {UnaryExprAST *t=new UnaryExprAST();t->Op=NOT;t->Exp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2034 "parser.tab.cpp"
    break;

  case 51: /* Exp: Exp GT Exp  */
#line 185 "parser.ypp"
                        {BinaryExprAST *t=new BinaryExprAST();t->Op=GT;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2040 "parser.tab.cpp"
    break;

  case 52: /* Exp: Exp GE Exp  */
#line 186 "parser.ypp"
                        {BinaryExprAST *t=new BinaryExprAST();t->Op=GE;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2046 "parser.tab.cpp"
    break;

  case 53: /* Exp: Exp LT Exp  */
#line 187 "parser.ypp"
                        {BinaryExprAST *t=new BinaryExprAST();t->Op=LT;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2052 "parser.tab.cpp"
    break;

  case 54: /* Exp: Exp LE Exp  */
#line 188 "parser.ypp"
                        {BinaryExprAST *t=new BinaryExprAST();t->Op=LE;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2058 "parser.tab.cpp"
    break;

  case 55: /* Exp: Exp NE Exp  */
#line 189 "parser.ypp"
                        {BinaryExprAST *t=new BinaryExprAST();t->Op=NE;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2064 "parser.tab.cpp"
    break;

  case 56: /* Exp: Exp EQ Exp  */
#line 190 "parser.ypp"
                        {BinaryExprAST *t=new BinaryExprAST();t->Op=EQ;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2070 "parser.tab.cpp"
    break;

  case 57: /* Exp: DPLUS Exp  */
#line 193 "parser.ypp"
                        {UnaryExprAST *t=new UnaryExprAST();t->Op=DPLUS;t->Exp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2076 "parser.tab.cpp"
    break;

  case 58: /* Exp: DMINUS Exp  */
#line 194 "parser.ypp"
                        {UnaryExprAST *t=new UnaryExprAST();t->Op=DMINUS;t->Exp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2082 "parser.tab.cpp"
    break;

  case 59: /* Exp: Exp DPLUS  */
#line 195 "parser.ypp"
                        {UnaryExprAST *t=new UnaryExprAST();t->Op=PLUSD;t->Exp=(yyvsp[-1].Exp);(yyval.Exp)=t;SavePosition;}
#line 2088 "parser.tab.cpp"
    break;

  case 60: /* Exp: Exp DMINUS  */
#line 196 "parser.ypp"
                        {UnaryExprAST *t=new UnaryExprAST();t->Op=MINUSD;t->Exp=(yyvsp[-1].Exp);(yyval.Exp)=t;SavePosition;}
#line 2094 "parser.tab.cpp"
    break;

  case 61: /* Exp: ID LP Args RP  */
#line 199 "parser.ypp"
                        {FuncCallAST *t=new FuncCallAST();t->Name=(yyvsp[-3].type_id);t->Params=(yyvsp[-1].Args);(yyval.Exp)=t;SavePosition;}
#line 2100 "parser.tab.cpp"
    break;

  case 62: /* Exp: ID  */
#line 200 "parser.ypp"
                        {VarAST *t=new VarAST();t->Name=(yyvsp[0].type_id);(yyval.Exp)=t;SavePosition;}
#line 2106 "parser.tab.cpp"
    break;

  case 63: /* Exp: INT  */
#line 201 "parser.ypp"
                        {ConstAST *t=new ConstAST();t->Type=T_INT;t->ConstVal.constINT=(yyvsp[0].type_int);(yyval.Exp)=t;SavePosition;}
#line 2112 "parser.tab.cpp"
    break;

  case 64: /* Exp: FLOAT  */
#line 202 "parser.ypp"
                        {ConstAST *t=new ConstAST();t->Type=T_FLOAT;t->ConstVal.constFLOAT=(yyvsp[0].type_float);(yyval.Exp)=t;SavePosition;}
#line 2118 "parser.tab.cpp"
    break;

  case 65: /* Args: %empty  */
#line 205 "parser.ypp"
        {}
#line 2124 "parser.tab.cpp"
    break;

  case 66: /* Args: Exp  */
#line 206 "parser.ypp"
              {(yyval.Args)=vector <ExpAST *>(); (yyval.Args).push_back((yyvsp[0].Exp)); }
#line 2130 "parser.tab.cpp"
    break;

  case 67: /* Args: Args COMMA Exp  */
#line 207 "parser.ypp"
                            {(yyval.Args)=(yyvsp[-2].Args);(yyval.Args).push_back((yyvsp[0].Exp));}
#line 2136 "parser.tab.cpp"
    break;


#line 2140 "parser.tab.cpp"

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

#line 210 "parser.ypp"


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