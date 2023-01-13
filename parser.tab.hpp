/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_HPP_INCLUDED
# define YY_YY_PARSER_TAB_HPP_INCLUDED
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
    DMINUS = 263,                  /* DMINUS  */
    PLUSD = 264,                   /* PLUSD  */
    MINUSD = 265,                  /* MINUSD  */
    LP = 266,                      /* LP  */
    RP = 267,                      /* RP  */
    LB = 268,                      /* LB  */
    RB = 269,                      /* RB  */
    LC = 270,                      /* LC  */
    RC = 271,                      /* RC  */
    SEMI = 272,                    /* SEMI  */
    COMMA = 273,                   /* COMMA  */
    PLUS = 274,                    /* PLUS  */
    MINUS = 275,                   /* MINUS  */
    STAR = 276,                    /* STAR  */
    DIV = 277,                     /* DIV  */
    GE = 278,                      /* GE  */
    GT = 279,                      /* GT  */
    LE = 280,                      /* LE  */
    LT = 281,                      /* LT  */
    NE = 282,                      /* NE  */
    EQ = 283,                      /* EQ  */
    ASSIGN = 284,                  /* ASSIGN  */
    AND = 285,                     /* AND  */
    OR = 286,                      /* OR  */
    NOT = 287,                     /* NOT  */
    IF = 288,                      /* IF  */
    ELSE = 289,                    /* ELSE  */
    WHILE = 290,                   /* WHILE  */
    RETURN = 291,                  /* RETURN  */
    FOR = 292,                     /* FOR  */
    COLON = 293,                   /* COLON  */
    STRUCT = 294,                  /* STRUCT  */
    EXT_DEF_LIST = 295,            /* EXT_DEF_LIST  */
    EXT_VAR_DEF = 296,             /* EXT_VAR_DEF  */
    FUNC_DEF = 297,                /* FUNC_DEF  */
    FUNC_DEC = 298,                /* FUNC_DEC  */
    EXT_DEC_LIST = 299,            /* EXT_DEC_LIST  */
    PARAM_LIST = 300,              /* PARAM_LIST  */
    PARAM_DEC = 301,               /* PARAM_DEC  */
    VAR_DEF = 302,                 /* VAR_DEF  */
    DEC_LIST = 303,                /* DEC_LIST  */
    DEF_LIST = 304,                /* DEF_LIST  */
    COMP_STM = 305,                /* COMP_STM  */
    STM_LIST = 306,                /* STM_LIST  */
    EXP_STMT = 307,                /* EXP_STMT  */
    IF_THEN = 308,                 /* IF_THEN  */
    IF_THEN_ELSE = 309,            /* IF_THEN_ELSE  */
    FUNC_CALL = 310,               /* FUNC_CALL  */
    ARGS = 311,                    /* ARGS  */
    FUNCTION = 312,                /* FUNCTION  */
    PARAM = 313,                   /* PARAM  */
    ARG = 314,                     /* ARG  */
    CALL = 315,                    /* CALL  */
    CALL0 = 316,                   /* CALL0  */
    LABEL = 317,                   /* LABEL  */
    GOTO = 318,                    /* GOTO  */
    JLT = 319,                     /* JLT  */
    JLE = 320,                     /* JLE  */
    JGT = 321,                     /* JGT  */
    JGE = 322,                     /* JGE  */
    JEQ = 323,                     /* JEQ  */
    JNE = 324,                     /* JNE  */
    END = 325,                     /* END  */
    UMINUS = 326,                  /* UMINUS  */
    UPLUS = 327,                   /* UPLUS  */
    LOWER_THEN_ELSE = 328          /* LOWER_THEN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

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


#endif /* !YY_YY_PARSER_TAB_HPP_INCLUDED  */
