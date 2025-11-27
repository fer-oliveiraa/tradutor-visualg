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

#ifndef YY_YY_BIN_PARSER_TAB_H_INCLUDED
# define YY_YY_BIN_PARSER_TAB_H_INCLUDED
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
    IDENTIFIER = 258,              /* IDENTIFIER  */
    NUMBER = 259,                  /* NUMBER  */
    FLOAT_LITERAL = 260,           /* FLOAT_LITERAL  */
    CHAR_LITERAL = 261,            /* CHAR_LITERAL  */
    STRING_LITERAL = 262,          /* STRING_LITERAL  */
    INTEIRO = 263,                 /* INTEIRO  */
    REAL = 264,                    /* REAL  */
    CARACTER = 265,                /* CARACTER  */
    LITERAL = 266,                 /* LITERAL  */
    LOGICO = 267,                  /* LOGICO  */
    VERDADEIRO = 268,              /* VERDADEIRO  */
    FALSO = 269,                   /* FALSO  */
    SE = 270,                      /* SE  */
    ENTAO = 271,                   /* ENTAO  */
    SENAO = 272,                   /* SENAO  */
    FIMSE = 273,                   /* FIMSE  */
    ENQUANTO = 274,                /* ENQUANTO  */
    FACA = 275,                    /* FACA  */
    FIMENQUANTO = 276,             /* FIMENQUANTO  */
    REPITA = 277,                  /* REPITA  */
    ATE = 278,                     /* ATE  */
    PARA = 279,                    /* PARA  */
    DE = 280,                      /* DE  */
    PASSO = 281,                   /* PASSO  */
    FIMPARA = 282,                 /* FIMPARA  */
    ESCOLHA = 283,                 /* ESCOLHA  */
    CASO = 284,                    /* CASO  */
    OUTROCASO = 285,               /* OUTROCASO  */
    FIMESCOLHA = 286,              /* FIMESCOLHA  */
    INTERROMPA = 287,              /* INTERROMPA  */
    RETORNE = 288,                 /* RETORNE  */
    PLUS = 289,                    /* PLUS  */
    MINUS = 290,                   /* MINUS  */
    TIMES = 291,                   /* TIMES  */
    DIVIDE = 292,                  /* DIVIDE  */
    ASSIGN = 293,                  /* ASSIGN  */
    EQUAL = 294,                   /* EQUAL  */
    NEQ = 295,                     /* NEQ  */
    LT = 296,                      /* LT  */
    GT = 297,                      /* GT  */
    LTE = 298,                     /* LTE  */
    GTE = 299,                     /* GTE  */
    INT_DIVIDE = 300,              /* INT_DIVIDE  */
    POWER = 301,                   /* POWER  */
    E = 302,                       /* E  */
    OU = 303,                      /* OU  */
    NAO = 304,                     /* NAO  */
    XOU = 305,                     /* XOU  */
    LPAREN = 306,                  /* LPAREN  */
    RPAREN = 307,                  /* RPAREN  */
    LBRACKET = 308,                /* LBRACKET  */
    RBRACKET = 309,                /* RBRACKET  */
    COMMA = 310,                   /* COMMA  */
    COLON = 311,                   /* COLON  */
    ALGORITMO = 312,               /* ALGORITMO  */
    FIMALGORITMO = 313,            /* FIMALGORITMO  */
    VAR = 314,                     /* VAR  */
    INICIO = 315,                  /* INICIO  */
    FUNCAO = 316,                  /* FUNCAO  */
    FIMFUNCAO = 317,               /* FIMFUNCAO  */
    PROCEDIMENTO = 318,            /* PROCEDIMENTO  */
    FIMPROCEDIMENTO = 319,         /* FIMPROCEDIMENTO  */
    LEIA = 320,                    /* LEIA  */
    ESCREVA = 321,                 /* ESCREVA  */
    ESCREVAL = 322,                /* ESCREVAL  */
    ALEATORIO = 323,               /* ALEATORIO  */
    ABS = 324,                     /* ABS  */
    ARCCOS = 325,                  /* ARCCOS  */
    ARCSEN = 326,                  /* ARCSEN  */
    ARCTAN = 327,                  /* ARCTAN  */
    ARQUIVO = 328,                 /* ARQUIVO  */
    ASC = 329,                     /* ASC  */
    COMPR = 330,                   /* COMPR  */
    COPIA = 331,                   /* COPIA  */
    COS = 332,                     /* COS  */
    COTAN = 333,                   /* COTAN  */
    CRONOMETRO = 334,              /* CRONOMETRO  */
    DEBUG = 335,                   /* DEBUG  */
    ECO = 336,                     /* ECO  */
    EXP = 337,                     /* EXP  */
    GRAUPRAD = 338,                /* GRAUPRAD  */
    INT_FUNC = 339,                /* INT_FUNC  */
    LOG = 340,                     /* LOG  */
    LOGN = 341,                    /* LOGN  */
    MAIUSC = 342,                  /* MAIUSC  */
    MINUSC = 343,                  /* MINUSC  */
    NUMPCARAC = 344,               /* NUMPCARAC  */
    PAUSA = 345,                   /* PAUSA  */
    PI = 346,                      /* PI  */
    POS = 347,                     /* POS  */
    QUAD = 348,                    /* QUAD  */
    RADPGRAU = 349,                /* RADPGRAU  */
    RAIZQ = 350,                   /* RAIZQ  */
    RAND = 351,                    /* RAND  */
    RANDI = 352,                   /* RANDI  */
    SEN = 353,                     /* SEN  */
    TIMER = 354,                   /* TIMER  */
    TAN = 355,                     /* TAN  */
    UMINUS = 356                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "src/parser.y"

    int      ival;       // Para números inteiros e tipos
    float    fval;       // Para valores float 
    char   * sval;       // Para identificadores e strings
    char     cval;       // Para caracteres
    struct ASTNode * node;  // Para nós da AST

#line 173 "bin/parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_BIN_PARSER_TAB_H_INCLUDED  */
