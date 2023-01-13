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
typedef struct YYLVAL
 {
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


#line 109 "y.tab.c"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INT = 258,                     /* INT  */
    ID = 259,                      /* ID  */
    TYPE = 260,                    /* TYPE  */
    FLOAT = 261,                   /* FLOAT  */
    DPLUS = 262,                   /* DPLUS  */
    LP = 263,                      /* LP  */
    RP = 264,                      /* RP  */
    LB = 265,                      /* LB  */
    RB = 266,                      /* RB  */
    LC = 267,                      /* LC  */
    RC = 268,                      /* RC  */
    SEMI = 269,                    /* SEMI  */
    COMMA = 270,                   /* COMMA  */
    PLUS = 271,                    /* PLUS  */
    MINUS = 272,                   /* MINUS  */
    STAR = 273,                    /* STAR  */
    DIV = 274,                     /* DIV  */
    GE = 275,                      /* GE  */
    GT = 276,                      /* GT  */
    LE = 277,                      /* LE  */
    LT = 278,                      /* LT  */
    NE = 279,                      /* NE  */
    EQ = 280,                      /* EQ  */
    ASSIGN = 281,                  /* ASSIGN  */
    AND = 282,                     /* AND  */
    OR = 283,                      /* OR  */
    NOT = 284,                     /* NOT  */
    IF = 285,                      /* IF  */
    ELSE = 286,                    /* ELSE  */
    WHILE = 287,                   /* WHILE  */
    RETURN = 288,                  /* RETURN  */
    FOR = 289,                     /* FOR  */
    COLON = 290,                   /* COLON  */
    STRUCT = 291,                  /* STRUCT  */
    EXT_DEF_LIST = 292,            /* EXT_DEF_LIST  */
    EXT_VAR_DEF = 293,             /* EXT_VAR_DEF  */
    FUNC_DEF = 294,                /* FUNC_DEF  */
    FUNC_DEC = 295,                /* FUNC_DEC  */
    EXT_DEC_LIST = 296,            /* EXT_DEC_LIST  */
    PARAM_LIST = 297,              /* PARAM_LIST  */
    PARAM_DEC = 298,               /* PARAM_DEC  */
    VAR_DEF = 299,                 /* VAR_DEF  */
    DEC_LIST = 300,                /* DEC_LIST  */
    DEF_LIST = 301,                /* DEF_LIST  */
    COMP_STM = 302,                /* COMP_STM  */
    STM_LIST = 303,                /* STM_LIST  */
    EXP_STMT = 304,                /* EXP_STMT  */
    IF_THEN = 305,                 /* IF_THEN  */
    IF_THEN_ELSE = 306,            /* IF_THEN_ELSE  */
    FUNC_CALL = 307,               /* FUNC_CALL  */
    ARGS = 308,                    /* ARGS  */
    FUNCTION = 309,                /* FUNCTION  */
    PARAM = 310,                   /* PARAM  */
    ARG = 311,                     /* ARG  */
    CALL = 312,                    /* CALL  */
    CALL0 = 313,                   /* CALL0  */
    LABEL = 314,                   /* LABEL  */
    GOTO = 315,                    /* GOTO  */
    JLT = 316,                     /* JLT  */
    JLE = 317,                     /* JLE  */
    JGT = 318,                     /* JGT  */
    JGE = 319,                     /* JGE  */
    JEQ = 320,                     /* JEQ  */
    JNE = 321,                     /* JNE  */
    END = 322,                     /* END  */
    UMINUS = 323,                  /* UMINUS  */
    UPLUS = 324,                   /* UPLUS  */
    LOWER_THEN_ELSE = 325          /* LOWER_THEN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INT 258
#define ID 259
#define TYPE 260
#define FLOAT 261
#define DPLUS 262
#define LP 263
#define RP 264
#define LB 265
#define RB 266
#define LC 267
#define RC 268
#define SEMI 269
#define COMMA 270
#define PLUS 271
#define MINUS 272
#define STAR 273
#define DIV 274
#define GE 275
#define GT 276
#define LE 277
#define LT 278
#define NE 279
#define EQ 280
#define ASSIGN 281
#define AND 282
#define OR 283
#define NOT 284
#define IF 285
#define ELSE 286
#define WHILE 287
#define RETURN 288
#define FOR 289
#define COLON 290
#define STRUCT 291
#define EXT_DEF_LIST 292
#define EXT_VAR_DEF 293
#define FUNC_DEF 294
#define FUNC_DEC 295
#define EXT_DEC_LIST 296
#define PARAM_LIST 297
#define PARAM_DEC 298
#define VAR_DEF 299
#define DEC_LIST 300
#define DEF_LIST 301
#define COMP_STM 302
#define STM_LIST 303
#define EXP_STMT 304
#define IF_THEN 305
#define IF_THEN_ELSE 306
#define FUNC_CALL 307
#define ARGS 308
#define FUNCTION 309
#define PARAM 310
#define ARG 311
#define CALL 312
#define CALL0 313
#define LABEL 314
#define GOTO 315
#define JLT 316
#define JLE 317
#define JGT 318
#define JGE 319
#define JEQ 320
#define JNE 321
#define END 322
#define UMINUS 323
#define UPLUS 324
#define LOWER_THEN_ELSE 325

/* Value type.  */

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);



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
  YYSYMBOL_LP = 8,                         /* LP  */
  YYSYMBOL_RP = 9,                         /* RP  */
  YYSYMBOL_LB = 10,                        /* LB  */
  YYSYMBOL_RB = 11,                        /* RB  */
  YYSYMBOL_LC = 12,                        /* LC  */
  YYSYMBOL_RC = 13,                        /* RC  */
  YYSYMBOL_SEMI = 14,                      /* SEMI  */
  YYSYMBOL_COMMA = 15,                     /* COMMA  */
  YYSYMBOL_PLUS = 16,                      /* PLUS  */
  YYSYMBOL_MINUS = 17,                     /* MINUS  */
  YYSYMBOL_STAR = 18,                      /* STAR  */
  YYSYMBOL_DIV = 19,                       /* DIV  */
  YYSYMBOL_GE = 20,                        /* GE  */
  YYSYMBOL_GT = 21,                        /* GT  */
  YYSYMBOL_LE = 22,                        /* LE  */
  YYSYMBOL_LT = 23,                        /* LT  */
  YYSYMBOL_NE = 24,                        /* NE  */
  YYSYMBOL_EQ = 25,                        /* EQ  */
  YYSYMBOL_ASSIGN = 26,                    /* ASSIGN  */
  YYSYMBOL_AND = 27,                       /* AND  */
  YYSYMBOL_OR = 28,                        /* OR  */
  YYSYMBOL_NOT = 29,                       /* NOT  */
  YYSYMBOL_IF = 30,                        /* IF  */
  YYSYMBOL_ELSE = 31,                      /* ELSE  */
  YYSYMBOL_WHILE = 32,                     /* WHILE  */
  YYSYMBOL_RETURN = 33,                    /* RETURN  */
  YYSYMBOL_FOR = 34,                       /* FOR  */
  YYSYMBOL_COLON = 35,                     /* COLON  */
  YYSYMBOL_STRUCT = 36,                    /* STRUCT  */
  YYSYMBOL_EXT_DEF_LIST = 37,              /* EXT_DEF_LIST  */
  YYSYMBOL_EXT_VAR_DEF = 38,               /* EXT_VAR_DEF  */
  YYSYMBOL_FUNC_DEF = 39,                  /* FUNC_DEF  */
  YYSYMBOL_FUNC_DEC = 40,                  /* FUNC_DEC  */
  YYSYMBOL_EXT_DEC_LIST = 41,              /* EXT_DEC_LIST  */
  YYSYMBOL_PARAM_LIST = 42,                /* PARAM_LIST  */
  YYSYMBOL_PARAM_DEC = 43,                 /* PARAM_DEC  */
  YYSYMBOL_VAR_DEF = 44,                   /* VAR_DEF  */
  YYSYMBOL_DEC_LIST = 45,                  /* DEC_LIST  */
  YYSYMBOL_DEF_LIST = 46,                  /* DEF_LIST  */
  YYSYMBOL_COMP_STM = 47,                  /* COMP_STM  */
  YYSYMBOL_STM_LIST = 48,                  /* STM_LIST  */
  YYSYMBOL_EXP_STMT = 49,                  /* EXP_STMT  */
  YYSYMBOL_IF_THEN = 50,                   /* IF_THEN  */
  YYSYMBOL_IF_THEN_ELSE = 51,              /* IF_THEN_ELSE  */
  YYSYMBOL_FUNC_CALL = 52,                 /* FUNC_CALL  */
  YYSYMBOL_ARGS = 53,                      /* ARGS  */
  YYSYMBOL_FUNCTION = 54,                  /* FUNCTION  */
  YYSYMBOL_PARAM = 55,                     /* PARAM  */
  YYSYMBOL_ARG = 56,                       /* ARG  */
  YYSYMBOL_CALL = 57,                      /* CALL  */
  YYSYMBOL_CALL0 = 58,                     /* CALL0  */
  YYSYMBOL_LABEL = 59,                     /* LABEL  */
  YYSYMBOL_GOTO = 60,                      /* GOTO  */
  YYSYMBOL_JLT = 61,                       /* JLT  */
  YYSYMBOL_JLE = 62,                       /* JLE  */
  YYSYMBOL_JGT = 63,                       /* JGT  */
  YYSYMBOL_JGE = 64,                       /* JGE  */
  YYSYMBOL_JEQ = 65,                       /* JEQ  */
  YYSYMBOL_JNE = 66,                       /* JNE  */
  YYSYMBOL_END = 67,                       /* END  */
  YYSYMBOL_UMINUS = 68,                    /* UMINUS  */
  YYSYMBOL_UPLUS = 69,                     /* UPLUS  */
  YYSYMBOL_LOWER_THEN_ELSE = 70,           /* LOWER_THEN_ELSE  */
  YYSYMBOL_YYACCEPT = 71,                  /* $accept  */
  YYSYMBOL_program = 72,                   /* program  */
  YYSYMBOL_ExtDefList = 73,                /* ExtDefList  */
  YYSYMBOL_ExtDef = 74,                    /* ExtDef  */
  YYSYMBOL_Specifier = 75,                 /* Specifier  */
  YYSYMBOL_ExtDecList = 76,                /* ExtDecList  */
  YYSYMBOL_VarDec = 77,                    /* VarDec  */
  YYSYMBOL_ParamList = 78,                 /* ParamList  */
  YYSYMBOL_ParamDec = 79,                  /* ParamDec  */
  YYSYMBOL_CompSt = 80,                    /* CompSt  */
  YYSYMBOL_StmList = 81,                   /* StmList  */
  YYSYMBOL_DefList = 82,                   /* DefList  */
  YYSYMBOL_Def = 83,                       /* Def  */
  YYSYMBOL_DecList = 84,                   /* DecList  */
  YYSYMBOL_Dec = 85,                       /* Dec  */
  YYSYMBOL_ArrExp = 86,                    /* ArrExp  */
  YYSYMBOL_Stmt = 87,                      /* Stmt  */
  YYSYMBOL_Exp = 88,                       /* Exp  */
  YYSYMBOL_Args = 89                       /* Args  */
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
typedef yytype_int8 yy_state_t;

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
#define YYLAST   294

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  121

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   325


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
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    91,    91,   101,   102,   105,   109,   110,   112,   120,
     121,   123,   124,   127,   128,   129,   131,   134,   136,   137,
     139,   140,   142,   146,   147,   149,   150,   151,   153,   154,
     155,   159,   160,   161,   162,   163,   164,   165,   166,   169,
     172,   173,   174,   175,   176,   177,   178,   180,   181,   182,
     184,   185,   186,   187,   188,   189,   192,   195,   196,   197,
     198,   201,   202,   203
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
  "FLOAT", "DPLUS", "LP", "RP", "LB", "RB", "LC", "RC", "SEMI", "COMMA",
  "PLUS", "MINUS", "STAR", "DIV", "GE", "GT", "LE", "LT", "NE", "EQ",
  "ASSIGN", "AND", "OR", "NOT", "IF", "ELSE", "WHILE", "RETURN", "FOR",
  "COLON", "STRUCT", "EXT_DEF_LIST", "EXT_VAR_DEF", "FUNC_DEF", "FUNC_DEC",
  "EXT_DEC_LIST", "PARAM_LIST", "PARAM_DEC", "VAR_DEF", "DEC_LIST",
  "DEF_LIST", "COMP_STM", "STM_LIST", "EXP_STMT", "IF_THEN",
  "IF_THEN_ELSE", "FUNC_CALL", "ARGS", "FUNCTION", "PARAM", "ARG", "CALL",
  "CALL0", "LABEL", "GOTO", "JLT", "JLE", "JGT", "JGE", "JEQ", "JNE",
  "END", "UMINUS", "UPLUS", "LOWER_THEN_ELSE", "$accept", "program",
  "ExtDefList", "ExtDef", "Specifier", "ExtDecList", "VarDec", "ParamList",
  "ParamDec", "CompSt", "StmList", "DefList", "Def", "DecList", "Dec",
  "ArrExp", "Stmt", "Exp", "Args", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-99)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-19)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,   -99,    45,   -99,     3,    44,   -99,   -99,    49,    47,
      41,     3,   -99,    57,    63,    63,     1,   -99,    66,   -99,
     -99,    58,    15,     3,   -99,     3,   -99,   -99,   -99,    63,
      46,     3,    -1,    67,    69,    74,   -99,    90,   -99,   134,
     134,   134,   134,   134,    93,    96,    86,   -99,    92,    46,
     203,   -99,   110,   -99,    63,   -99,   134,   -99,   148,   -99,
     -99,   -99,   134,   134,   -99,   218,   -99,   -99,   -99,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   117,   231,   -99,   231,    13,   -99,   168,   188,
     -99,    -4,    -4,   -99,   -99,   136,   136,   136,   136,    54,
      54,   244,   269,   257,   117,    51,   231,   -99,   134,    79,
      79,    84,   -99,   117,   231,    75,   -99,   -99,   -99,    79,
     -99
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     8,     0,     2,     3,     0,     1,     4,    11,     0,
       9,    13,     5,     0,     0,     0,     0,    14,     0,    11,
      10,    16,     0,     0,    12,    20,     7,     6,    15,     0,
       0,    20,    25,     0,    23,     0,    59,    58,    60,     0,
       0,     0,     0,     0,     0,     0,     0,    32,     0,     0,
       0,    21,     0,    22,     0,    38,    61,    56,     0,    46,
      45,    49,     0,     0,    34,     0,    17,    19,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,    24,    62,     0,    44,     0,     0,
      33,    40,    41,    42,    43,    51,    50,    53,    52,    54,
      55,    39,    47,    48,     0,     0,    28,    57,     0,     0,
       0,     0,    27,     0,    63,    35,    37,    29,    30,     0,
      36
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -99,   -99,   103,   -99,    -5,   105,   -10,   -99,    87,   106,
      81,   100,   -99,    78,   -99,   -58,   -98,   -39,   -99
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     4,     5,     9,    10,    16,    17,    47,
      48,    30,    31,    33,    34,   105,    49,    50,    86
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      57,    58,    59,    60,    61,    21,    15,    65,     1,    13,
      22,   115,   116,    83,    71,    72,    23,    85,    15,    32,
      29,   120,   107,    88,    89,    52,    29,    25,   108,    26,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   106,    32,     6,   111,    35,     8,    36,
      37,    13,    38,    39,    40,   118,    14,    11,    25,   -18,
      18,    12,    41,    42,   112,   106,   113,    19,    13,   114,
      69,    70,    71,    72,   106,    43,    44,    24,    45,    46,
      35,    53,    36,    37,    54,    38,    39,    40,    55,    36,
      37,    25,    38,    39,    40,    41,    42,   117,    56,   113,
      64,    62,    41,    42,    63,    66,   119,     7,    43,    44,
      28,    45,    46,    36,    37,    43,    38,    39,    40,    20,
      36,    37,    82,    38,    39,    40,    41,    42,    27,   104,
      67,    51,    84,    41,    42,     0,     0,    36,    37,    43,
      38,    39,    40,     0,     0,     0,    43,     0,     0,     0,
      41,    42,    69,    70,    71,    72,     0,    87,     0,     0,
      77,    78,     0,    43,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,   109,     0,     0,
       0,     0,     0,     0,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,   110,     0,     0,
       0,     0,     0,     0,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    68,     0,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    90,     0,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
       0,    80,    81,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,     0,    80,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78
};

static const yytype_int8 yycheck[] =
{
      39,    40,    41,    42,    43,    15,    11,    46,     5,    10,
       9,   109,   110,    52,    18,    19,    15,    56,    23,    29,
      25,   119,     9,    62,    63,    26,    31,    12,    15,    14,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    54,     0,   104,     1,     4,     3,
       4,    10,     6,     7,     8,   113,    15,     8,    12,    13,
       3,    14,    16,    17,    13,   104,    15,     4,    10,   108,
      16,    17,    18,    19,   113,    29,    30,    11,    32,    33,
       1,    14,     3,     4,    15,     6,     7,     8,    14,     3,
       4,    12,     6,     7,     8,    16,    17,    13,     8,    15,
      14,     8,    16,    17,     8,    13,    31,     4,    29,    30,
      23,    32,    33,     3,     4,    29,     6,     7,     8,    14,
       3,     4,    12,     6,     7,     8,    16,    17,    22,    12,
      49,    31,    54,    16,    17,    -1,    -1,     3,     4,    29,
       6,     7,     8,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      16,    17,    16,    17,    18,    19,    -1,     9,    -1,    -1,
      24,    25,    -1,    29,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    14,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    14,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    72,    73,    74,    75,     0,    73,     4,    76,
      77,     8,    14,    10,    15,    75,    78,    79,     3,     4,
      76,    77,     9,    15,    11,    12,    14,    80,    79,    75,
      82,    83,    77,    84,    85,     1,     3,     4,     6,     7,
       8,    16,    17,    29,    30,    32,    33,    80,    81,    87,
      88,    82,    26,    14,    15,    14,     8,    88,    88,    88,
      88,    88,     8,     8,    14,    88,    13,    81,    14,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    12,    88,    84,    88,    89,     9,    88,    88,
      14,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    12,    86,    88,     9,    15,     9,
       9,    86,    13,    15,    88,    87,    87,    13,    86,    31,
      87
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    71,    72,    73,    73,    74,    74,    74,    75,    76,
      76,    77,    77,    78,    78,    78,    79,    80,    81,    81,
      82,    82,    83,    84,    84,    85,    85,    85,    86,    86,
      86,    87,    87,    87,    87,    87,    87,    87,    87,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    89,    89,    89
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     3,     6,     6,     1,     1,
       3,     1,     4,     0,     1,     3,     2,     4,     0,     2,
       0,     2,     3,     1,     3,     1,     3,     5,     1,     3,
       3,     2,     1,     3,     2,     5,     7,     5,     2,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     3,     2,
       3,     3,     3,     3,     3,     3,     2,     4,     1,     1,
       1,     0,     1,     3
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
                      if (Errors::IsEmpty()&&  ErrorCharNum==0)
                           { (yyval.program)->DisplayAST(0);}    //无词法、语法错误显示语法树
                      else {Errors::ErrorsDisplay();return 0;}
                      (yyval.program)->Semantics0();                   //静态语义检查
                      if (Errors::IsEmpty())
                          (yyval.program)->GenIR();                    //中间代码生成
                      system("pause");
                      }
#line 1884 "y.tab.c"
    break;

  case 3: /* ExtDefList: %empty  */
#line 101 "parser.ypp"
            {(yyval.ExtDefList)=vector <ExtDefAST*>();}
#line 1890 "y.tab.c"
    break;

  case 4: /* ExtDefList: ExtDef ExtDefList  */
#line 102 "parser.ypp"
                              {(yyvsp[0].ExtDefList).insert((yyvsp[0].ExtDefList).begin(),(yyvsp[-1].ExtDef));(yyval.ExtDefList)=(yyvsp[0].ExtDefList);}
#line 1896 "y.tab.c"
    break;

  case 5: /* ExtDef: Specifier ExtDecList SEMI  */
#line 105 "parser.ypp"
                                      { ExtVarDefAST *t=new ExtVarDefAST();     //创建一个外部变量声明的对象
                                        t->Type=(yyvsp[-2].Specifier); t->ExtVars=(yyvsp[-1].ExtDecList);(yyval.ExtDef)=t;SavePosition;}
#line 1903 "y.tab.c"
    break;

  case 6: /* ExtDef: Specifier ID LP ParamList RP CompSt  */
#line 109 "parser.ypp"
                                                {FuncDefAST *t=new FuncDefAST();t->Type=(yyvsp[-5].Specifier);t->Name=(yyvsp[-4].type_id);t->Params=(yyvsp[-2].ParamList); t->Body=(yyvsp[0].CompSt);(yyval.ExtDef)=t;SavePosition;}
#line 1909 "y.tab.c"
    break;

  case 7: /* ExtDef: Specifier ID LP ParamList RP SEMI  */
#line 110 "parser.ypp"
                                               {FuncDefAST *t=new FuncDefAST();t->Type=(yyvsp[-5].Specifier);t->Name=(yyvsp[-4].type_id);t->Params=(yyvsp[-2].ParamList);(yyval.ExtDef)=t;SavePosition;}
#line 1915 "y.tab.c"
    break;

  case 8: /* Specifier: TYPE  */
#line 112 "parser.ypp"
                 {  BasicTypeAST *t=new BasicTypeAST(); ;
                    if (string((yyvsp[0].type_id))==string("int"))    t->Type=T_INT;
                    if (string((yyvsp[0].type_id))==string("float"))  t->Type=T_FLOAT;
                    if (string((yyvsp[0].type_id))==string("void"))   t->Type=T_VOID;  (yyval.Specifier)=t;SavePosition;}
#line 1924 "y.tab.c"
    break;

  case 9: /* ExtDecList: VarDec  */
#line 120 "parser.ypp"
                     {(yyval.ExtDecList)=vector < VarDecAST*>();(yyval.ExtDecList).push_back((yyvsp[0].VarDec));}
#line 1930 "y.tab.c"
    break;

  case 10: /* ExtDecList: VarDec COMMA ExtDecList  */
#line 121 "parser.ypp"
                                     {(yyvsp[0].ExtDecList).insert((yyvsp[0].ExtDecList).begin(),(yyvsp[-2].VarDec));(yyval.ExtDecList)=(yyvsp[0].ExtDecList);}
#line 1936 "y.tab.c"
    break;

  case 11: /* VarDec: ID  */
#line 123 "parser.ypp"
              {(yyval.VarDec)=new VarDecAST();(yyval.VarDec)->Name=string((yyvsp[0].type_id));(yyval.VarDec)->Line=yylloc.first_line;(yyval.VarDec)->Column=yylloc.first_column;}
#line 1942 "y.tab.c"
    break;

  case 12: /* VarDec: VarDec LB INT RB  */
#line 124 "parser.ypp"
                               {(yyvsp[-3].VarDec)->Dims.push_back((yyvsp[-1].type_int));(yyval.VarDec)=(yyvsp[-3].VarDec);}
#line 1948 "y.tab.c"
    break;

  case 13: /* ParamList: %empty  */
#line 127 "parser.ypp"
           {(yyval.ParamList)=vector < ParamAST *>();}
#line 1954 "y.tab.c"
    break;

  case 14: /* ParamList: ParamDec  */
#line 128 "parser.ypp"
                    {(yyval.ParamList)=vector < ParamAST *>(); (yyval.ParamList).push_back((yyvsp[0].ParamDec)); }
#line 1960 "y.tab.c"
    break;

  case 15: /* ParamList: ParamList COMMA ParamDec  */
#line 129 "parser.ypp"
                                     {(yyvsp[-2].ParamList).push_back((yyvsp[0].ParamDec)); (yyval.ParamList)=(yyvsp[-2].ParamList);}
#line 1966 "y.tab.c"
    break;

  case 16: /* ParamDec: Specifier VarDec  */
#line 131 "parser.ypp"
                                   {(yyval.ParamDec)=new ParamAST();(yyval.ParamDec)->Type=(yyvsp[-1].Specifier);(yyval.ParamDec)->ParamName=(yyvsp[0].VarDec);(yyval.ParamDec)->Line=yylloc.first_line;(yyval.ParamDec)->Column=yylloc.first_column;}
#line 1972 "y.tab.c"
    break;

  case 17: /* CompSt: LC DefList StmList RC  */
#line 134 "parser.ypp"
                                 {(yyval.CompSt)=new CompStmAST();(yyval.CompSt)->Decls=(yyvsp[-2].DefList);(yyval.CompSt)->Stms=(yyvsp[-1].StmList);(yyval.CompSt)->Line=yylloc.first_line;(yyval.CompSt)->Column=yylloc.first_column;}
#line 1978 "y.tab.c"
    break;

  case 18: /* StmList: %empty  */
#line 136 "parser.ypp"
         {(yyval.StmList)=vector <StmAST *>(); }
#line 1984 "y.tab.c"
    break;

  case 19: /* StmList: Stmt StmList  */
#line 137 "parser.ypp"
                        {(yyval.StmList)=(yyvsp[0].StmList);(yyval.StmList).insert((yyval.StmList).begin(),(yyvsp[-1].Stmt));}
#line 1990 "y.tab.c"
    break;

  case 20: /* DefList: %empty  */
#line 139 "parser.ypp"
         {(yyval.DefList)=vector <DefAST *>();  }
#line 1996 "y.tab.c"
    break;

  case 21: /* DefList: Def DefList  */
#line 140 "parser.ypp"
                      {(yyval.DefList)=(yyvsp[0].DefList);(yyval.DefList).insert((yyval.DefList).begin(),(yyvsp[-1].Def));}
#line 2002 "y.tab.c"
    break;

  case 22: /* Def: Specifier DecList SEMI  */
#line 142 "parser.ypp"
                              {(yyval.Def)=new DefAST();(yyval.Def)->Type=(yyvsp[-2].Specifier);(yyval.Def)->LocVars=(yyvsp[-1].DecList);
                               (yyval.Def)->Line=yylloc.first_line;(yyval.Def)->Column=yylloc.first_column;}
#line 2009 "y.tab.c"
    break;

  case 23: /* DecList: Dec  */
#line 146 "parser.ypp"
              {(yyval.DecList)=vector <VarDecAST *>(); (yyval.DecList).push_back((yyvsp[0].Dec));}
#line 2015 "y.tab.c"
    break;

  case 24: /* DecList: Dec COMMA DecList  */
#line 147 "parser.ypp"
                            {(yyval.DecList)=(yyvsp[0].DecList);(yyval.DecList).insert((yyval.DecList).begin(),(yyvsp[-2].Dec));}
#line 2021 "y.tab.c"
    break;

  case 25: /* Dec: VarDec  */
#line 149 "parser.ypp"
              {(yyval.Dec)=(yyvsp[0].VarDec);}
#line 2027 "y.tab.c"
    break;

  case 26: /* Dec: VarDec ASSIGN Exp  */
#line 150 "parser.ypp"
                            {(yyval.Dec)=(yyvsp[-2].VarDec);(yyval.Dec)->Exp=(yyvsp[0].Exp); }
#line 2033 "y.tab.c"
    break;

  case 27: /* Dec: VarDec ASSIGN LC ArrExp RC  */
#line 151 "parser.ypp"
                                        {}
#line 2039 "y.tab.c"
    break;

  case 28: /* ArrExp: Exp  */
#line 153 "parser.ypp"
                                     {}
#line 2045 "y.tab.c"
    break;

  case 29: /* ArrExp: LC ArrExp RC  */
#line 154 "parser.ypp"
                                     {}
#line 2051 "y.tab.c"
    break;

  case 30: /* ArrExp: ArrExp COMMA ArrExp  */
#line 155 "parser.ypp"
                                     {}
#line 2057 "y.tab.c"
    break;

  case 31: /* Stmt: Exp SEMI  */
#line 159 "parser.ypp"
                                {ExprStmAST *t=new ExprStmAST();t->Exp=(yyvsp[-1].Exp);(yyval.Stmt)=t;SavePosition;}
#line 2063 "y.tab.c"
    break;

  case 32: /* Stmt: CompSt  */
#line 160 "parser.ypp"
                                {(yyval.Stmt)=(yyvsp[0].CompSt);}
#line 2069 "y.tab.c"
    break;

  case 33: /* Stmt: RETURN Exp SEMI  */
#line 161 "parser.ypp"
                                {ReturnStmAST *t=new ReturnStmAST();t->Exp=(yyvsp[-1].Exp);(yyval.Stmt)=t;SavePosition;}
#line 2075 "y.tab.c"
    break;

  case 34: /* Stmt: RETURN SEMI  */
#line 162 "parser.ypp"
                            {ReturnStmAST *t=new ReturnStmAST();t->Exp=NULL;(yyval.Stmt)=t;SavePosition;}
#line 2081 "y.tab.c"
    break;

  case 35: /* Stmt: IF LP Exp RP Stmt  */
#line 163 "parser.ypp"
                                                {IfStmAST *t=new IfStmAST();t->Cond=(yyvsp[-2].Exp);t->ThenStm=(yyvsp[0].Stmt);(yyval.Stmt)=t; SavePosition;}
#line 2087 "y.tab.c"
    break;

  case 36: /* Stmt: IF LP Exp RP Stmt ELSE Stmt  */
#line 164 "parser.ypp"
                                                    {IfElseStmAST *t=new IfElseStmAST();t->Cond=(yyvsp[-4].Exp);t->ThenStm=(yyvsp[-2].Stmt);t->ElseStm=(yyvsp[0].Stmt);(yyval.Stmt)=t;SavePosition;}
#line 2093 "y.tab.c"
    break;

  case 37: /* Stmt: WHILE LP Exp RP Stmt  */
#line 165 "parser.ypp"
                                {WhileStmAST *t=new WhileStmAST();t->Cond=(yyvsp[-2].Exp);t->Body=(yyvsp[0].Stmt);(yyval.Stmt)=t; SavePosition;}
#line 2099 "y.tab.c"
    break;

  case 38: /* Stmt: error SEMI  */
#line 166 "parser.ypp"
                     {(yyval.Stmt)=NULL;}
#line 2105 "y.tab.c"
    break;

  case 39: /* Exp: Exp ASSIGN Exp  */
#line 169 "parser.ypp"
                       {AssignAST *t=new AssignAST();t->Op=ASSIGN;
                t->LeftValExp=(yyvsp[-2].Exp);t->RightValExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2112 "y.tab.c"
    break;

  case 40: /* Exp: Exp PLUS Exp  */
#line 172 "parser.ypp"
                     {BinaryExprAST *t=new BinaryExprAST();t->Op=PLUS;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2118 "y.tab.c"
    break;

  case 41: /* Exp: Exp MINUS Exp  */
#line 173 "parser.ypp"
                     {BinaryExprAST *t=new BinaryExprAST();t->Op=MINUS;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2124 "y.tab.c"
    break;

  case 42: /* Exp: Exp STAR Exp  */
#line 174 "parser.ypp"
                     {BinaryExprAST *t=new BinaryExprAST();t->Op=STAR;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2130 "y.tab.c"
    break;

  case 43: /* Exp: Exp DIV Exp  */
#line 175 "parser.ypp"
                     {BinaryExprAST *t=new BinaryExprAST();t->Op=DIV;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2136 "y.tab.c"
    break;

  case 44: /* Exp: LP Exp RP  */
#line 176 "parser.ypp"
                     {(yyval.Exp)=(yyvsp[-1].Exp);}
#line 2142 "y.tab.c"
    break;

  case 45: /* Exp: MINUS Exp  */
#line 177 "parser.ypp"
                                {UnaryExprAST *t=new UnaryExprAST();t->Op=UMINUS;t->Exp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2148 "y.tab.c"
    break;

  case 46: /* Exp: PLUS Exp  */
#line 178 "parser.ypp"
                                {UnaryExprAST *t=new UnaryExprAST();t->Op=UPLUS;t->Exp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2154 "y.tab.c"
    break;

  case 47: /* Exp: Exp AND Exp  */
#line 180 "parser.ypp"
                      {BinaryExprAST *t=new BinaryExprAST();t->Op=AND;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2160 "y.tab.c"
    break;

  case 48: /* Exp: Exp OR Exp  */
#line 181 "parser.ypp"
                      {BinaryExprAST *t=new BinaryExprAST();t->Op=OR;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2166 "y.tab.c"
    break;

  case 49: /* Exp: NOT Exp  */
#line 182 "parser.ypp"
                      {UnaryExprAST *t=new UnaryExprAST();t->Op=NOT;t->Exp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2172 "y.tab.c"
    break;

  case 50: /* Exp: Exp GT Exp  */
#line 184 "parser.ypp"
                        {BinaryExprAST *t=new BinaryExprAST();t->Op=GT;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2178 "y.tab.c"
    break;

  case 51: /* Exp: Exp GE Exp  */
#line 185 "parser.ypp"
                        {BinaryExprAST *t=new BinaryExprAST();t->Op=GE;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2184 "y.tab.c"
    break;

  case 52: /* Exp: Exp LT Exp  */
#line 186 "parser.ypp"
                        {BinaryExprAST *t=new BinaryExprAST();t->Op=LT;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2190 "y.tab.c"
    break;

  case 53: /* Exp: Exp LE Exp  */
#line 187 "parser.ypp"
                        {BinaryExprAST *t=new BinaryExprAST();t->Op=LE;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2196 "y.tab.c"
    break;

  case 54: /* Exp: Exp NE Exp  */
#line 188 "parser.ypp"
                        {BinaryExprAST *t=new BinaryExprAST();t->Op=NE;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2202 "y.tab.c"
    break;

  case 55: /* Exp: Exp EQ Exp  */
#line 189 "parser.ypp"
                        {BinaryExprAST *t=new BinaryExprAST();t->Op=EQ;t->LeftExp=(yyvsp[-2].Exp);t->RightExp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2208 "y.tab.c"
    break;

  case 56: /* Exp: DPLUS Exp  */
#line 192 "parser.ypp"
                        {UnaryExprAST *t=new UnaryExprAST();t->Op=DPLUS;t->Exp=(yyvsp[0].Exp);(yyval.Exp)=t;SavePosition;}
#line 2214 "y.tab.c"
    break;

  case 57: /* Exp: ID LP Args RP  */
#line 195 "parser.ypp"
                        {FuncCallAST *t=new FuncCallAST();t->Name=(yyvsp[-3].type_id);t->Params=(yyvsp[-1].Args);(yyval.Exp)=t;SavePosition;}
#line 2220 "y.tab.c"
    break;

  case 58: /* Exp: ID  */
#line 196 "parser.ypp"
                        {VarAST *t=new VarAST();t->Name=(yyvsp[0].type_id);(yyval.Exp)=t;SavePosition;}
#line 2226 "y.tab.c"
    break;

  case 59: /* Exp: INT  */
#line 197 "parser.ypp"
                        {ConstAST *t=new ConstAST();t->Type=T_INT;t->ConstVal.constINT=(yyvsp[0].type_int);(yyval.Exp)=t;SavePosition;}
#line 2232 "y.tab.c"
    break;

  case 60: /* Exp: FLOAT  */
#line 198 "parser.ypp"
                        {ConstAST *t=new ConstAST();t->Type=T_FLOAT;t->ConstVal.constFLOAT=(yyvsp[0].type_float);(yyval.Exp)=t;SavePosition;}
#line 2238 "y.tab.c"
    break;

  case 61: /* Args: %empty  */
#line 201 "parser.ypp"
        {}
#line 2244 "y.tab.c"
    break;

  case 62: /* Args: Exp  */
#line 202 "parser.ypp"
              {(yyval.Args)=vector <ExpAST *>(); (yyval.Args).push_back((yyvsp[0].Exp)); }
#line 2250 "y.tab.c"
    break;

  case 63: /* Args: Args COMMA Exp  */
#line 203 "parser.ypp"
                            {(yyval.Args)=(yyvsp[-2].Args);(yyval.Args).push_back((yyvsp[0].Exp));}
#line 2256 "y.tab.c"
    break;


#line 2260 "y.tab.c"

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

#line 206 "parser.ypp"


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