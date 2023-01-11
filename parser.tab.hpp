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
