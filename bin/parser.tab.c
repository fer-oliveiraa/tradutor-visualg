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
#line 1 "src/parser.y"

    #include "AST.h"
    #include <stdio.h>  // Para FILE*
    #include <stdlib.h> // Para malloc/exit
    #include <string.h> // Para strdup/strcmp
    
    void yyerror(const char *s); // Declaração da função de erro do Bison
    extern int yylex(void); // Declaração da função do scanner, gerada pelo Flex
    extern FILE *yyin;      // Para definir o arquivo de entrada
    extern char *yytext;    // Para acessar o texto do token atual
    extern int yylineno;    // Para rastrear o número da linha

#line 84 "bin/parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_NUMBER = 4,                     /* NUMBER  */
  YYSYMBOL_FLOAT_LITERAL = 5,              /* FLOAT_LITERAL  */
  YYSYMBOL_CHAR_LITERAL = 6,               /* CHAR_LITERAL  */
  YYSYMBOL_STRING_LITERAL = 7,             /* STRING_LITERAL  */
  YYSYMBOL_INTEIRO = 8,                    /* INTEIRO  */
  YYSYMBOL_REAL = 9,                       /* REAL  */
  YYSYMBOL_CARACTER = 10,                  /* CARACTER  */
  YYSYMBOL_LITERAL = 11,                   /* LITERAL  */
  YYSYMBOL_LOGICO = 12,                    /* LOGICO  */
  YYSYMBOL_VERDADEIRO = 13,                /* VERDADEIRO  */
  YYSYMBOL_FALSO = 14,                     /* FALSO  */
  YYSYMBOL_SE = 15,                        /* SE  */
  YYSYMBOL_ENTAO = 16,                     /* ENTAO  */
  YYSYMBOL_SENAO = 17,                     /* SENAO  */
  YYSYMBOL_FIMSE = 18,                     /* FIMSE  */
  YYSYMBOL_ENQUANTO = 19,                  /* ENQUANTO  */
  YYSYMBOL_FACA = 20,                      /* FACA  */
  YYSYMBOL_FIMENQUANTO = 21,               /* FIMENQUANTO  */
  YYSYMBOL_REPITA = 22,                    /* REPITA  */
  YYSYMBOL_ATE = 23,                       /* ATE  */
  YYSYMBOL_PARA = 24,                      /* PARA  */
  YYSYMBOL_DE = 25,                        /* DE  */
  YYSYMBOL_PASSO = 26,                     /* PASSO  */
  YYSYMBOL_FIMPARA = 27,                   /* FIMPARA  */
  YYSYMBOL_ESCOLHA = 28,                   /* ESCOLHA  */
  YYSYMBOL_CASO = 29,                      /* CASO  */
  YYSYMBOL_OUTROCASO = 30,                 /* OUTROCASO  */
  YYSYMBOL_FIMESCOLHA = 31,                /* FIMESCOLHA  */
  YYSYMBOL_INTERROMPA = 32,                /* INTERROMPA  */
  YYSYMBOL_RETORNE = 33,                   /* RETORNE  */
  YYSYMBOL_PLUS = 34,                      /* PLUS  */
  YYSYMBOL_MINUS = 35,                     /* MINUS  */
  YYSYMBOL_TIMES = 36,                     /* TIMES  */
  YYSYMBOL_DIVIDE = 37,                    /* DIVIDE  */
  YYSYMBOL_ASSIGN = 38,                    /* ASSIGN  */
  YYSYMBOL_EQUAL = 39,                     /* EQUAL  */
  YYSYMBOL_NEQ = 40,                       /* NEQ  */
  YYSYMBOL_LT = 41,                        /* LT  */
  YYSYMBOL_GT = 42,                        /* GT  */
  YYSYMBOL_LTE = 43,                       /* LTE  */
  YYSYMBOL_GTE = 44,                       /* GTE  */
  YYSYMBOL_INT_DIVIDE = 45,                /* INT_DIVIDE  */
  YYSYMBOL_POWER = 46,                     /* POWER  */
  YYSYMBOL_E = 47,                         /* E  */
  YYSYMBOL_OU = 48,                        /* OU  */
  YYSYMBOL_NAO = 49,                       /* NAO  */
  YYSYMBOL_XOU = 50,                       /* XOU  */
  YYSYMBOL_LPAREN = 51,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 52,                    /* RPAREN  */
  YYSYMBOL_LBRACKET = 53,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 54,                  /* RBRACKET  */
  YYSYMBOL_COMMA = 55,                     /* COMMA  */
  YYSYMBOL_COLON = 56,                     /* COLON  */
  YYSYMBOL_ALGORITMO = 57,                 /* ALGORITMO  */
  YYSYMBOL_FIMALGORITMO = 58,              /* FIMALGORITMO  */
  YYSYMBOL_VAR = 59,                       /* VAR  */
  YYSYMBOL_INICIO = 60,                    /* INICIO  */
  YYSYMBOL_FUNCAO = 61,                    /* FUNCAO  */
  YYSYMBOL_FIMFUNCAO = 62,                 /* FIMFUNCAO  */
  YYSYMBOL_PROCEDIMENTO = 63,              /* PROCEDIMENTO  */
  YYSYMBOL_FIMPROCEDIMENTO = 64,           /* FIMPROCEDIMENTO  */
  YYSYMBOL_LEIA = 65,                      /* LEIA  */
  YYSYMBOL_ESCREVA = 66,                   /* ESCREVA  */
  YYSYMBOL_ESCREVAL = 67,                  /* ESCREVAL  */
  YYSYMBOL_ALEATORIO = 68,                 /* ALEATORIO  */
  YYSYMBOL_ABS = 69,                       /* ABS  */
  YYSYMBOL_ARCCOS = 70,                    /* ARCCOS  */
  YYSYMBOL_ARCSEN = 71,                    /* ARCSEN  */
  YYSYMBOL_ARCTAN = 72,                    /* ARCTAN  */
  YYSYMBOL_ARQUIVO = 73,                   /* ARQUIVO  */
  YYSYMBOL_ASC = 74,                       /* ASC  */
  YYSYMBOL_COMPR = 75,                     /* COMPR  */
  YYSYMBOL_COPIA = 76,                     /* COPIA  */
  YYSYMBOL_COS = 77,                       /* COS  */
  YYSYMBOL_COTAN = 78,                     /* COTAN  */
  YYSYMBOL_CRONOMETRO = 79,                /* CRONOMETRO  */
  YYSYMBOL_DEBUG = 80,                     /* DEBUG  */
  YYSYMBOL_ECO = 81,                       /* ECO  */
  YYSYMBOL_EXP = 82,                       /* EXP  */
  YYSYMBOL_GRAUPRAD = 83,                  /* GRAUPRAD  */
  YYSYMBOL_INT_FUNC = 84,                  /* INT_FUNC  */
  YYSYMBOL_LOG = 85,                       /* LOG  */
  YYSYMBOL_LOGN = 86,                      /* LOGN  */
  YYSYMBOL_MAIUSC = 87,                    /* MAIUSC  */
  YYSYMBOL_MINUSC = 88,                    /* MINUSC  */
  YYSYMBOL_NUMPCARAC = 89,                 /* NUMPCARAC  */
  YYSYMBOL_PAUSA = 90,                     /* PAUSA  */
  YYSYMBOL_PI = 91,                        /* PI  */
  YYSYMBOL_POS = 92,                       /* POS  */
  YYSYMBOL_QUAD = 93,                      /* QUAD  */
  YYSYMBOL_RADPGRAU = 94,                  /* RADPGRAU  */
  YYSYMBOL_RAIZQ = 95,                     /* RAIZQ  */
  YYSYMBOL_RAND = 96,                      /* RAND  */
  YYSYMBOL_RANDI = 97,                     /* RANDI  */
  YYSYMBOL_SEN = 98,                       /* SEN  */
  YYSYMBOL_TIMER = 99,                     /* TIMER  */
  YYSYMBOL_TAN = 100,                      /* TAN  */
  YYSYMBOL_UMINUS = 101,                   /* UMINUS  */
  YYSYMBOL_YYACCEPT = 102,                 /* $accept  */
  YYSYMBOL_program = 103,                  /* program  */
  YYSYMBOL_declaracao_variaveis = 104,     /* declaracao_variaveis  */
  YYSYMBOL_variable_declaration_list = 105, /* variable_declaration_list  */
  YYSYMBOL_variable_declaration = 106,     /* variable_declaration  */
  YYSYMBOL_identifier_list = 107,          /* identifier_list  */
  YYSYMBOL_declaracao_subrotinas = 108,    /* declaracao_subrotinas  */
  YYSYMBOL_type_specifier = 109,           /* type_specifier  */
  YYSYMBOL_parameter_list = 110,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 111,    /* parameter_declaration  */
  YYSYMBOL_function_declaration = 112,     /* function_declaration  */
  YYSYMBOL_procedure_declaration = 113,    /* procedure_declaration  */
  YYSYMBOL_statement_list = 114,           /* statement_list  */
  YYSYMBOL_statement = 115,                /* statement  */
  YYSYMBOL_io_statement = 116,             /* io_statement  */
  YYSYMBOL_write_list = 117,               /* write_list  */
  YYSYMBOL_write_parameter = 118,          /* write_parameter  */
  YYSYMBOL_expression_list = 119,          /* expression_list  */
  YYSYMBOL_if_statement = 120,             /* if_statement  */
  YYSYMBOL_while_statement = 121,          /* while_statement  */
  YYSYMBOL_repita_statement = 122,         /* repita_statement  */
  YYSYMBOL_para_statement = 123,           /* para_statement  */
  YYSYMBOL_escolha_statement = 124,        /* escolha_statement  */
  YYSYMBOL_caso_list = 125,                /* caso_list  */
  YYSYMBOL_outrocaso_block = 126,          /* outrocaso_block  */
  YYSYMBOL_expression = 127,               /* expression  */
  YYSYMBOL_assignment_statement = 128,     /* assignment_statement  */
  YYSYMBOL_logical_or_expression = 129,    /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 130,   /* logical_and_expression  */
  YYSYMBOL_relational_expression = 131,    /* relational_expression  */
  YYSYMBOL_additive_expression = 132,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 133, /* multiplicative_expression  */
  YYSYMBOL_power_expression = 134,         /* power_expression  */
  YYSYMBOL_unary_expression = 135,         /* unary_expression  */
  YYSYMBOL_primary_expression = 136        /* primary_expression  */
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   574

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  102
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  190

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   356


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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    99,    99,   114,   115,   119,   120,   143,   151,   155,
     171,   172,   184,   200,   201,   202,   203,   204,   209,   210,
     211,   224,   233,   247,   261,   262,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   289,   290,   291,   292,   293,
     294,   302,   303,   318,   321,   324,   333,   334,   341,   345,
     355,   363,   371,   378,   389,   397,   398,   416,   417,   424,
     425,   429,   437,   438,   441,   447,   448,   454,   455,   458,
     461,   464,   467,   470,   476,   477,   480,   486,   487,   490,
     493,   499,   500,   506,   507,   510,   516,   517,   518,   519,
     523,   524,   525,   529,   533,   537
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER", "NUMBER",
  "FLOAT_LITERAL", "CHAR_LITERAL", "STRING_LITERAL", "INTEIRO", "REAL",
  "CARACTER", "LITERAL", "LOGICO", "VERDADEIRO", "FALSO", "SE", "ENTAO",
  "SENAO", "FIMSE", "ENQUANTO", "FACA", "FIMENQUANTO", "REPITA", "ATE",
  "PARA", "DE", "PASSO", "FIMPARA", "ESCOLHA", "CASO", "OUTROCASO",
  "FIMESCOLHA", "INTERROMPA", "RETORNE", "PLUS", "MINUS", "TIMES",
  "DIVIDE", "ASSIGN", "EQUAL", "NEQ", "LT", "GT", "LTE", "GTE",
  "INT_DIVIDE", "POWER", "E", "OU", "NAO", "XOU", "LPAREN", "RPAREN",
  "LBRACKET", "RBRACKET", "COMMA", "COLON", "ALGORITMO", "FIMALGORITMO",
  "VAR", "INICIO", "FUNCAO", "FIMFUNCAO", "PROCEDIMENTO",
  "FIMPROCEDIMENTO", "LEIA", "ESCREVA", "ESCREVAL", "ALEATORIO", "ABS",
  "ARCCOS", "ARCSEN", "ARCTAN", "ARQUIVO", "ASC", "COMPR", "COPIA", "COS",
  "COTAN", "CRONOMETRO", "DEBUG", "ECO", "EXP", "GRAUPRAD", "INT_FUNC",
  "LOG", "LOGN", "MAIUSC", "MINUSC", "NUMPCARAC", "PAUSA", "PI", "POS",
  "QUAD", "RADPGRAU", "RAIZQ", "RAND", "RANDI", "SEN", "TIMER", "TAN",
  "UMINUS", "$accept", "program", "declaracao_variaveis",
  "variable_declaration_list", "variable_declaration", "identifier_list",
  "declaracao_subrotinas", "type_specifier", "parameter_list",
  "parameter_declaration", "function_declaration", "procedure_declaration",
  "statement_list", "statement", "io_statement", "write_list",
  "write_parameter", "expression_list", "if_statement", "while_statement",
  "repita_statement", "para_statement", "escolha_statement", "caso_list",
  "outrocaso_block", "expression", "assignment_statement",
  "logical_or_expression", "logical_and_expression",
  "relational_expression", "additive_expression",
  "multiplicative_expression", "power_expression", "unary_expression",
  "primary_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-131)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -49,    10,    53,    18,  -131,    60,  -131,  -131,    60,  -131,
       2,    24,  -131,    69,   238,  -131,    88,   104,  -131,  -131,
    -131,  -131,  -131,  -131,  -131,  -131,  -131,   130,    95,    97,
     -35,  -131,  -131,  -131,  -131,  -131,  -131,   424,   424,  -131,
     116,   424,  -131,   424,   424,   424,   424,  -131,   102,   106,
     108,  -131,  -131,  -131,  -131,  -131,  -131,  -131,  -131,  -131,
      81,    85,   127,    68,    59,  -131,   114,  -131,   158,   158,
     523,    15,   113,   -12,     4,   170,   147,    81,    81,  -131,
    -131,    49,    60,    76,   330,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     122,   -29,  -131,    13,  -131,  -131,    57,    81,  -131,  -131,
     424,   424,    93,  -131,    61,  -131,    62,  -131,    50,  -131,
      66,    85,    85,   127,    68,    68,    68,    68,    68,    68,
      59,    59,  -131,  -131,  -131,  -131,   238,   124,   158,    18,
    -131,   424,    27,   210,    81,    38,   424,  -131,   151,  -131,
    -131,   424,   182,  -131,  -131,   238,  -131,   131,    81,  -131,
    -131,  -131,   424,    81,   490,  -131,  -131,   134,    18,  -131,
     250,   -11,   490,   183,   139,   290,  -131,  -131,   424,  -131,
    -131,  -131,   345,    23,   385,  -131,  -131,  -131,   450,  -131
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     3,     1,     0,    10,     8,     4,     5,
       0,     0,     6,     0,     0,    24,     0,     0,    11,    12,
       9,    13,    14,    15,    16,    17,     7,     0,     0,     0,
      92,    86,    87,    88,    89,    90,    91,     0,     0,    24,
       0,     0,    34,     0,     0,     0,     0,     2,     0,     0,
      40,    25,    32,    27,    28,    29,    30,    31,    26,    59,
      60,    62,    65,    67,    74,    77,    81,    83,    18,    18,
       0,     0,    92,     0,     0,     0,     0,    55,    33,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,    61,    94,     0,    46,    24,    24,
       0,     0,    57,    95,     0,    38,     0,    41,    43,    39,
       0,    63,    64,    66,    68,    69,    70,    71,    72,    73,
      75,    76,    78,    79,    80,    82,     0,     0,     0,     3,
      93,     0,     0,     0,    51,     0,     0,    24,     0,    35,
      36,     0,     0,    37,    21,     0,    20,     0,    47,    24,
      48,    50,     0,    24,    58,    54,    42,    44,     3,    24,
       0,     0,    56,     0,     0,     0,    49,    24,     0,    45,
      24,    23,     0,     0,     0,    52,    24,    22,     0,    53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -131,  -131,  -112,  -131,   192,   119,  -131,  -130,   135,    74,
    -131,  -131,   -39,  -131,  -131,   136,    67,  -131,  -131,  -131,
    -131,  -131,  -131,  -131,  -131,   152,  -131,   -36,    54,   140,
     118,    56,   -85,   111,  -131
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     6,     8,     9,    10,    11,    26,   101,   102,
      18,    19,    27,    51,    52,   116,   117,   106,    53,    54,
      55,    56,    57,   112,   148,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      75,    73,    74,    70,   108,    77,   154,    78,     1,   177,
      81,   132,   133,   134,   135,   178,    71,     3,    72,    31,
      32,    33,    34,   137,   109,   168,   138,   157,    35,    36,
      30,    31,    32,    33,    34,   107,    85,    85,    86,    86,
      35,    36,    37,   186,   159,   160,    38,   118,   118,    39,
      44,    40,    85,     4,    86,    41,   174,    13,    14,    42,
      43,   162,    44,     7,    45,   139,    46,   105,   138,   142,
     143,    85,    20,    86,   144,   145,    45,     5,    46,    72,
      31,    32,    33,    34,    15,    16,    85,    17,    86,    35,
      36,    28,    48,    49,    50,    96,    97,    85,    85,    86,
      86,   113,    94,    95,    98,   158,   152,    29,   164,   140,
     163,    44,   141,   149,   150,   118,    13,   151,   153,    76,
     170,   151,   146,   147,   172,    45,   171,    46,   115,    85,
     175,    86,    87,    30,    31,    32,    33,    34,   182,   121,
     122,   184,   183,    35,    36,    37,    68,   188,    69,    38,
     130,   131,    39,    82,    40,    79,    80,    83,    41,    84,
      99,   100,    42,    43,    71,    44,    88,    89,    90,    91,
      92,    93,   111,    30,    31,    32,    33,    34,   136,    45,
     155,    46,   165,    35,    36,    37,   167,   179,    47,    38,
     173,   169,    39,   110,    40,    48,    49,    50,    41,   180,
      12,   114,    42,    43,   103,    44,   124,   125,   126,   127,
     128,   129,   156,    30,    31,    32,    33,    34,   166,    45,
     120,    46,   104,    35,    36,    37,     0,   123,     0,    38,
       0,   161,    39,     0,    40,    48,    49,    50,    41,     0,
       0,     0,    42,    43,     0,    44,    21,    22,    23,    24,
      25,     0,     0,    30,    31,    32,    33,    34,     0,    45,
       0,    46,     0,    35,    36,    37,     0,     0,   176,    38,
       0,     0,    39,     0,    40,    48,    49,    50,    41,     0,
       0,     0,    42,    43,     0,    44,     0,     0,     0,     0,
       0,     0,     0,    30,    31,    32,    33,    34,     0,    45,
       0,    46,     0,    35,    36,    37,     0,     0,     0,    38,
       0,     0,    39,     0,    40,    48,    49,    50,    41,     0,
       0,     0,    42,    43,     0,    44,     0,     0,     0,     0,
       0,     0,     0,    72,    31,    32,    33,    34,     0,    45,
       0,    46,     0,    35,    36,     0,     0,     0,    30,    31,
      32,    33,    34,     0,   181,    48,    49,    50,    35,    36,
      37,     0,     0,     0,    38,    44,     0,    39,     0,    40,
       0,     0,   185,    41,     0,     0,     0,    42,    43,    45,
      44,    46,   119,     0,     0,     0,     0,     0,    30,    31,
      32,    33,    34,     0,    45,     0,    46,     0,    35,    36,
      37,     0,     0,     0,    38,     0,     0,    39,     0,    40,
      48,    49,    50,    41,     0,     0,     0,    42,    43,     0,
      44,     0,     0,     0,     0,     0,     0,    72,    31,    32,
      33,    34,     0,     0,    45,     0,    46,    35,    36,     0,
       0,     0,     0,     0,     0,     0,     0,   187,     0,     0,
      48,    49,    50,    30,    31,    32,    33,    34,     0,    44,
       0,     0,     0,    35,    36,    37,     0,     0,     0,    38,
       0,     0,    39,    45,    40,    46,     0,   189,    41,     0,
       0,     0,    42,    43,     0,    44,     0,     0,     0,     0,
       0,     0,     0,    30,    31,    32,    33,    34,     0,    45,
       0,    46,     0,    35,    36,    37,     0,     0,     0,    38,
       0,     0,    39,     0,    40,    48,    49,    50,    41,     0,
       0,     0,    42,    43,     0,    44,    30,    31,    32,    33,
      34,     0,     0,     0,     0,     0,    35,    36,     0,    45,
       0,    46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    49,    50,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    45,     0,    46
};

static const yytype_int16 yycheck[] =
{
      39,    37,    38,    38,    16,    41,   136,    43,    57,    20,
      46,    96,    97,    98,    99,    26,    51,     7,     3,     4,
       5,     6,     7,    52,    20,   155,    55,   139,    13,    14,
       3,     4,     5,     6,     7,    71,    48,    48,    50,    50,
      13,    14,    15,    20,    17,    18,    19,    83,    84,    22,
      35,    24,    48,     0,    50,    28,   168,    55,    56,    32,
      33,    23,    35,     3,    49,    52,    51,    52,    55,   108,
     109,    48,     3,    50,   110,   111,    49,    59,    51,     3,
       4,     5,     6,     7,    60,    61,    48,    63,    50,    13,
      14,     3,    65,    66,    67,    36,    37,    48,    48,    50,
      50,    52,    34,    35,    45,   141,    56,     3,   147,    52,
     146,    35,    55,    52,    52,   151,    55,    55,    52,     3,
     159,    55,    29,    30,   163,    49,   162,    51,    52,    48,
     169,    50,    47,     3,     4,     5,     6,     7,   177,    85,
      86,   180,   178,    13,    14,    15,    51,   186,    51,    19,
      94,    95,    22,    51,    24,    44,    45,    51,    28,    51,
      46,     3,    32,    33,    51,    35,    39,    40,    41,    42,
      43,    44,    25,     3,     4,     5,     6,     7,    56,    49,
      56,    51,    31,    13,    14,    15,     4,     4,    58,    19,
      56,    60,    22,    23,    24,    65,    66,    67,    28,    60,
       8,    82,    32,    33,    69,    35,    88,    89,    90,    91,
      92,    93,   138,     3,     4,     5,     6,     7,   151,    49,
      84,    51,    70,    13,    14,    15,    -1,    87,    -1,    19,
      -1,    21,    22,    -1,    24,    65,    66,    67,    28,    -1,
      -1,    -1,    32,    33,    -1,    35,     8,     9,    10,    11,
      12,    -1,    -1,     3,     4,     5,     6,     7,    -1,    49,
      -1,    51,    -1,    13,    14,    15,    -1,    -1,    18,    19,
      -1,    -1,    22,    -1,    24,    65,    66,    67,    28,    -1,
      -1,    -1,    32,    33,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,    49,
      -1,    51,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      -1,    -1,    22,    -1,    24,    65,    66,    67,    28,    -1,
      -1,    -1,    32,    33,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,    49,
      -1,    51,    -1,    13,    14,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    64,    65,    66,    67,    13,    14,
      15,    -1,    -1,    -1,    19,    35,    -1,    22,    -1,    24,
      -1,    -1,    27,    28,    -1,    -1,    -1,    32,    33,    49,
      35,    51,    52,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    49,    -1,    51,    -1,    13,    14,
      15,    -1,    -1,    -1,    19,    -1,    -1,    22,    -1,    24,
      65,    66,    67,    28,    -1,    -1,    -1,    32,    33,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    49,    -1,    51,    13,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      65,    66,    67,     3,     4,     5,     6,     7,    -1,    35,
      -1,    -1,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      -1,    -1,    22,    49,    24,    51,    -1,    27,    28,    -1,
      -1,    -1,    32,    33,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,    49,
      -1,    51,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      -1,    -1,    22,    -1,    24,    65,    66,    67,    28,    -1,
      -1,    -1,    32,    33,    -1,    35,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    -1,    13,    14,    -1,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    51
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    57,   103,     7,     0,    59,   104,     3,   105,   106,
     107,   108,   106,    55,    56,    60,    61,    63,   112,   113,
       3,     8,     9,    10,    11,    12,   109,   114,     3,     3,
       3,     4,     5,     6,     7,    13,    14,    15,    19,    22,
      24,    28,    32,    33,    35,    49,    51,    58,    65,    66,
      67,   115,   116,   120,   121,   122,   123,   124,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,    51,    51,
      38,    51,     3,   129,   129,   114,     3,   129,   129,   135,
     135,   129,    51,    51,    51,    48,    50,    47,    39,    40,
      41,    42,    43,    44,    34,    35,    36,    37,    45,    46,
       3,   110,   111,   110,   127,    52,   119,   129,    16,    20,
      23,    25,   125,    52,   107,    52,   117,   118,   129,    52,
     117,   130,   130,   131,   132,   132,   132,   132,   132,   132,
     133,   133,   134,   134,   134,   134,    56,    52,    55,    52,
      52,    55,   114,   114,   129,   129,    29,    30,   126,    52,
      52,    55,    56,    52,   109,    56,   111,   104,   129,    17,
      18,    21,    23,   129,   114,    31,   118,     4,   109,    60,
     114,   129,   114,    56,   104,   114,    18,    20,    26,     4,
      60,    64,   114,   129,   114,    27,    20,    62,   114,    27
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   102,   103,   104,   104,   105,   105,   106,   107,   107,
     108,   108,   108,   109,   109,   109,   109,   109,   110,   110,
     110,   111,   112,   113,   114,   114,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   116,   116,   116,   116,   116,
     116,   117,   117,   118,   118,   118,   119,   119,   120,   120,
     121,   122,   123,   123,   124,   125,   125,   126,   126,   127,
     127,   128,   129,   129,   129,   130,   130,   131,   131,   131,
     131,   131,   131,   131,   132,   132,   132,   133,   133,   133,
     133,   134,   134,   135,   135,   135,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     0,     2,     1,     2,     3,     1,     3,
       0,     2,     2,     1,     1,     1,     1,     1,     0,     1,
       3,     3,    11,     9,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     4,     4,     4,     3,     3,
       1,     1,     3,     1,     3,     5,     1,     3,     5,     7,
       5,     4,     9,    11,     5,     0,     4,     0,     2,     1,
       1,     3,     1,     3,     3,     1,     3,     1,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     3,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     3
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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: ALGORITMO STRING_LITERAL declaracao_variaveis declaracao_subrotinas INICIO statement_list FIMALGORITMO  */
#line 105 "src/parser.y"
    {
        (yyval.node) = ast_create_program((yyvsp[-5].sval), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node));
        ast_root = (yyval.node);
        free((yyvsp[-5].sval));
    }
#line 1433 "bin/parser.tab.c"
    break;

  case 3: /* declaracao_variaveis: %empty  */
#line 114 "src/parser.y"
                { (yyval.node) = NULL; }
#line 1439 "bin/parser.tab.c"
    break;

  case 4: /* declaracao_variaveis: VAR variable_declaration_list  */
#line 115 "src/parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 1445 "bin/parser.tab.c"
    break;

  case 5: /* variable_declaration_list: variable_declaration  */
#line 119 "src/parser.y"
                         { (yyval.node) = (yyvsp[0].node); }
#line 1451 "bin/parser.tab.c"
    break;

  case 6: /* variable_declaration_list: variable_declaration_list variable_declaration  */
#line 120 "src/parser.y"
                                                     {
        // Encadeia as declarações
        if ((yyvsp[-1].node)) {
            ASTNode *temp = (yyvsp[-1].node);
            while (temp->data.var_decl.id_list && 
                   temp->data.var_decl.id_list->data.var_list.next) {
                temp = temp->data.var_decl.id_list->data.var_list.next;
            }
            // Procura o último nó da lista
            temp = (yyvsp[-1].node);
            while (temp->data.stmt_list.next) {
                temp = temp->data.stmt_list.next;
            }
            temp->data.stmt_list.next = (yyvsp[0].node);
            (yyval.node) = (yyvsp[-1].node);
        } else {
            (yyval.node) = (yyvsp[0].node);
        }
    }
#line 1475 "bin/parser.tab.c"
    break;

  case 7: /* variable_declaration: identifier_list COLON type_specifier  */
#line 143 "src/parser.y"
                                         {
        ASTNode *type_node = ast_create_type((yyvsp[0].ival));
        (yyval.node) = ast_create_var_decl((yyvsp[-2].node), type_node);
    }
#line 1484 "bin/parser.tab.c"
    break;

  case 8: /* identifier_list: IDENTIFIER  */
#line 151 "src/parser.y"
               { 
        (yyval.node) = ast_create_var_list((yyvsp[0].sval), NULL);
        free((yyvsp[0].sval)); 
    }
#line 1493 "bin/parser.tab.c"
    break;

  case 9: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 155 "src/parser.y"
                                       {
        ASTNode *newNode = ast_create_var_list((yyvsp[0].sval), NULL);
        free((yyvsp[0].sval));
        
        // Encontra o final da lista
        ASTNode *temp = (yyvsp[-2].node);
        while (temp->data.var_list.next) {
            temp = temp->data.var_list.next;
        }
        temp->data.var_list.next = newNode;
        (yyval.node) = (yyvsp[-2].node);
    }
#line 1510 "bin/parser.tab.c"
    break;

  case 10: /* declaracao_subrotinas: %empty  */
#line 171 "src/parser.y"
                { (yyval.node) = NULL; }
#line 1516 "bin/parser.tab.c"
    break;

  case 11: /* declaracao_subrotinas: declaracao_subrotinas function_declaration  */
#line 172 "src/parser.y"
                                                 {
        if ((yyvsp[-1].node)) {
            ASTNode *temp = (yyvsp[-1].node);
            while (temp->data.stmt_list.next) {
                temp = temp->data.stmt_list.next;
            }
            temp->data.stmt_list.next = (yyvsp[0].node);
            (yyval.node) = (yyvsp[-1].node);
        } else {
            (yyval.node) = (yyvsp[0].node);
        }
    }
#line 1533 "bin/parser.tab.c"
    break;

  case 12: /* declaracao_subrotinas: declaracao_subrotinas procedure_declaration  */
#line 184 "src/parser.y"
                                                  {
        if ((yyvsp[-1].node)) {
            ASTNode *temp = (yyvsp[-1].node);
            while (temp->data.stmt_list.next) {
                temp = temp->data.stmt_list.next;
            }
            temp->data.stmt_list.next = (yyvsp[0].node);
            (yyval.node) = (yyvsp[-1].node);
        } else {
            (yyval.node) = (yyvsp[0].node);
        }
    }
#line 1550 "bin/parser.tab.c"
    break;

  case 13: /* type_specifier: INTEIRO  */
#line 200 "src/parser.y"
                { (yyval.ival) = INTEIRO; }
#line 1556 "bin/parser.tab.c"
    break;

  case 14: /* type_specifier: REAL  */
#line 201 "src/parser.y"
                  { (yyval.ival) = REAL; }
#line 1562 "bin/parser.tab.c"
    break;

  case 15: /* type_specifier: CARACTER  */
#line 202 "src/parser.y"
                  { (yyval.ival) = CARACTER; }
#line 1568 "bin/parser.tab.c"
    break;

  case 16: /* type_specifier: LITERAL  */
#line 203 "src/parser.y"
                  { (yyval.ival) = LITERAL; }
#line 1574 "bin/parser.tab.c"
    break;

  case 17: /* type_specifier: LOGICO  */
#line 204 "src/parser.y"
                  { (yyval.ival) = LOGICO; }
#line 1580 "bin/parser.tab.c"
    break;

  case 18: /* parameter_list: %empty  */
#line 209 "src/parser.y"
                { (yyval.node) = NULL; }
#line 1586 "bin/parser.tab.c"
    break;

  case 19: /* parameter_list: parameter_declaration  */
#line 210 "src/parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1592 "bin/parser.tab.c"
    break;

  case 20: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 211 "src/parser.y"
                                                 {
        // Adiciona $3 ao final da lista $1
        ASTNode *temp = (yyvsp[-2].node);
        while(temp->data.param.next) {
            temp = temp->data.param.next;
        }
        temp->data.param.next = (yyvsp[0].node);
        (yyval.node) = (yyvsp[-2].node);
    }
#line 1606 "bin/parser.tab.c"
    break;

  case 21: /* parameter_declaration: IDENTIFIER COLON type_specifier  */
#line 224 "src/parser.y"
                                    {
        ASTNode *type_node = ast_create_type((yyvsp[0].ival));
        (yyval.node) = ast_create_param((yyvsp[-2].sval), type_node, NULL);
        free((yyvsp[-2].sval));
    }
#line 1616 "bin/parser.tab.c"
    break;

  case 22: /* function_declaration: FUNCAO IDENTIFIER LPAREN parameter_list RPAREN COLON type_specifier declaracao_variaveis INICIO statement_list FIMFUNCAO  */
#line 238 "src/parser.y"
    {
        ASTNode *return_type = ast_create_type((yyvsp[-4].ival));
        (yyval.node) = ast_create_func_decl((yyvsp[-9].sval), (yyvsp[-7].node), return_type, (yyvsp[-3].node), (yyvsp[-1].node));
        free((yyvsp[-9].sval));
    }
#line 1626 "bin/parser.tab.c"
    break;

  case 23: /* procedure_declaration: PROCEDIMENTO IDENTIFIER LPAREN parameter_list RPAREN declaracao_variaveis INICIO statement_list FIMPROCEDIMENTO  */
#line 252 "src/parser.y"
    {
        (yyval.node) = ast_create_func_decl((yyvsp[-7].sval), (yyvsp[-5].node), NULL, (yyvsp[-3].node), (yyvsp[-1].node));
        free((yyvsp[-7].sval));
    }
#line 1635 "bin/parser.tab.c"
    break;

  case 24: /* statement_list: %empty  */
#line 261 "src/parser.y"
                { (yyval.node) = NULL; }
#line 1641 "bin/parser.tab.c"
    break;

  case 25: /* statement_list: statement_list statement  */
#line 262 "src/parser.y"
                               {
        if ((yyvsp[0].node)) {
            if ((yyvsp[-1].node)) {
                (yyval.node) = ast_create_stmt_list((yyvsp[0].node), (yyvsp[-1].node));
            } else {
                (yyval.node) = ast_create_stmt_list((yyvsp[0].node), NULL);
            }
        } else {
            (yyval.node) = (yyvsp[-1].node);
        }
    }
#line 1657 "bin/parser.tab.c"
    break;

  case 26: /* statement: expression  */
#line 276 "src/parser.y"
               { (yyval.node) = (yyvsp[0].node); }
#line 1663 "bin/parser.tab.c"
    break;

  case 27: /* statement: if_statement  */
#line 277 "src/parser.y"
                   { (yyval.node) = (yyvsp[0].node); }
#line 1669 "bin/parser.tab.c"
    break;

  case 28: /* statement: while_statement  */
#line 278 "src/parser.y"
                      { (yyval.node) = (yyvsp[0].node); }
#line 1675 "bin/parser.tab.c"
    break;

  case 29: /* statement: repita_statement  */
#line 279 "src/parser.y"
                       { (yyval.node) = (yyvsp[0].node); }
#line 1681 "bin/parser.tab.c"
    break;

  case 30: /* statement: para_statement  */
#line 280 "src/parser.y"
                     { (yyval.node) = (yyvsp[0].node); }
#line 1687 "bin/parser.tab.c"
    break;

  case 31: /* statement: escolha_statement  */
#line 281 "src/parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1693 "bin/parser.tab.c"
    break;

  case 32: /* statement: io_statement  */
#line 282 "src/parser.y"
                   { (yyval.node) = (yyvsp[0].node); }
#line 1699 "bin/parser.tab.c"
    break;

  case 33: /* statement: RETORNE logical_or_expression  */
#line 283 "src/parser.y"
                                    { (yyval.node) = ast_create_return((yyvsp[0].node)); }
#line 1705 "bin/parser.tab.c"
    break;

  case 34: /* statement: INTERROMPA  */
#line 284 "src/parser.y"
                 { (yyval.node) = ast_create_break(); }
#line 1711 "bin/parser.tab.c"
    break;

  case 35: /* io_statement: LEIA LPAREN identifier_list RPAREN  */
#line 289 "src/parser.y"
                                       { (yyval.node) = ast_create_read((yyvsp[-1].node)); }
#line 1717 "bin/parser.tab.c"
    break;

  case 36: /* io_statement: ESCREVA LPAREN write_list RPAREN  */
#line 290 "src/parser.y"
                                       { (yyval.node) = ast_create_write((yyvsp[-1].node), 0); }
#line 1723 "bin/parser.tab.c"
    break;

  case 37: /* io_statement: ESCREVAL LPAREN write_list RPAREN  */
#line 291 "src/parser.y"
                                        { (yyval.node) = ast_create_write((yyvsp[-1].node), 1); }
#line 1729 "bin/parser.tab.c"
    break;

  case 38: /* io_statement: ESCREVA LPAREN RPAREN  */
#line 292 "src/parser.y"
                            { (yyval.node) = ast_create_write(NULL, 0); }
#line 1735 "bin/parser.tab.c"
    break;

  case 39: /* io_statement: ESCREVAL LPAREN RPAREN  */
#line 293 "src/parser.y"
                             { (yyval.node) = ast_create_write(NULL, 1); }
#line 1741 "bin/parser.tab.c"
    break;

  case 40: /* io_statement: ESCREVAL  */
#line 294 "src/parser.y"
               { (yyval.node) = ast_create_write(NULL, 1); }
#line 1747 "bin/parser.tab.c"
    break;

  case 41: /* write_list: write_parameter  */
#line 302 "src/parser.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 1753 "bin/parser.tab.c"
    break;

  case 42: /* write_list: write_list COMMA write_parameter  */
#line 303 "src/parser.y"
                                       {
        if ((yyvsp[-2].node)) {
            ASTNode *temp = (yyvsp[-2].node);
            while (temp->data.write_param.next) {
                temp = temp->data.write_param.next;
            }
            temp->data.write_param.next = (yyvsp[0].node);
            (yyval.node) = (yyvsp[-2].node);
        } else {
            (yyval.node) = (yyvsp[0].node);
        }
    }
#line 1770 "bin/parser.tab.c"
    break;

  case 43: /* write_parameter: logical_or_expression  */
#line 318 "src/parser.y"
                          { 
        (yyval.node) = ast_create_write_param((yyvsp[0].node), -1, -1, NULL); 
    }
#line 1778 "bin/parser.tab.c"
    break;

  case 44: /* write_parameter: logical_or_expression COLON NUMBER  */
#line 321 "src/parser.y"
                                         { 
        (yyval.node) = ast_create_write_param((yyvsp[-2].node), (yyvsp[0].ival), -1, NULL); 
    }
#line 1786 "bin/parser.tab.c"
    break;

  case 45: /* write_parameter: logical_or_expression COLON NUMBER COLON NUMBER  */
#line 324 "src/parser.y"
                                                      { 
        (yyval.node) = ast_create_write_param((yyvsp[-4].node), (yyvsp[-2].ival), (yyvsp[0].ival), NULL); 
    }
#line 1794 "bin/parser.tab.c"
    break;

  case 46: /* expression_list: logical_or_expression  */
#line 333 "src/parser.y"
                          { (yyval.node) = ast_create_expr_list((yyvsp[0].node), NULL); }
#line 1800 "bin/parser.tab.c"
    break;

  case 47: /* expression_list: expression_list COMMA logical_or_expression  */
#line 334 "src/parser.y"
                                                  {
        (yyval.node) = ast_create_expr_list((yyvsp[0].node), (yyvsp[-2].node));
    }
#line 1808 "bin/parser.tab.c"
    break;

  case 48: /* if_statement: SE logical_or_expression ENTAO statement_list FIMSE  */
#line 344 "src/parser.y"
    { (yyval.node) = ast_create_if((yyvsp[-3].node), (yyvsp[-1].node), NULL); }
#line 1814 "bin/parser.tab.c"
    break;

  case 49: /* if_statement: SE logical_or_expression ENTAO statement_list SENAO statement_list FIMSE  */
#line 350 "src/parser.y"
    { (yyval.node) = ast_create_if((yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1820 "bin/parser.tab.c"
    break;

  case 50: /* while_statement: ENQUANTO logical_or_expression FACA statement_list FIMENQUANTO  */
#line 358 "src/parser.y"
    { (yyval.node) = ast_create_while((yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1826 "bin/parser.tab.c"
    break;

  case 51: /* repita_statement: REPITA statement_list ATE logical_or_expression  */
#line 366 "src/parser.y"
    { (yyval.node) = ast_create_repeat((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1832 "bin/parser.tab.c"
    break;

  case 52: /* para_statement: PARA IDENTIFIER DE logical_or_expression ATE logical_or_expression FACA statement_list FIMPARA  */
#line 374 "src/parser.y"
    { 
        (yyval.node) = ast_create_for((yyvsp[-7].sval), (yyvsp[-5].node), (yyvsp[-3].node), NULL, (yyvsp[-1].node));
        free((yyvsp[-7].sval));
    }
#line 1841 "bin/parser.tab.c"
    break;

  case 53: /* para_statement: PARA IDENTIFIER DE logical_or_expression ATE logical_or_expression PASSO logical_or_expression FACA statement_list FIMPARA  */
#line 381 "src/parser.y"
    {
        (yyval.node) = ast_create_for((yyvsp[-9].sval), (yyvsp[-7].node), (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node));
        free((yyvsp[-9].sval));
    }
#line 1850 "bin/parser.tab.c"
    break;

  case 54: /* escolha_statement: ESCOLHA logical_or_expression caso_list outrocaso_block FIMESCOLHA  */
#line 393 "src/parser.y"
    { (yyval.node) = ast_create_switch((yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1856 "bin/parser.tab.c"
    break;

  case 55: /* caso_list: %empty  */
#line 397 "src/parser.y"
                { (yyval.node) = NULL; }
#line 1862 "bin/parser.tab.c"
    break;

  case 56: /* caso_list: caso_list CASO logical_or_expression statement_list  */
#line 400 "src/parser.y"
    {
        ASTNode *new_case = ast_create_case((yyvsp[-1].node), (yyvsp[0].node), NULL);
        if ((yyvsp[-3].node)) {
            ASTNode *temp = (yyvsp[-3].node);
            while (temp->data.case_stmt.next) {
                temp = temp->data.case_stmt.next;
            }
            temp->data.case_stmt.next = new_case;
            (yyval.node) = (yyvsp[-3].node);
        } else {
            (yyval.node) = new_case;
        }
    }
#line 1880 "bin/parser.tab.c"
    break;

  case 57: /* outrocaso_block: %empty  */
#line 416 "src/parser.y"
                { (yyval.node) = NULL; }
#line 1886 "bin/parser.tab.c"
    break;

  case 58: /* outrocaso_block: OUTROCASO statement_list  */
#line 417 "src/parser.y"
                               { (yyval.node) = (yyvsp[0].node); }
#line 1892 "bin/parser.tab.c"
    break;

  case 59: /* expression: assignment_statement  */
#line 424 "src/parser.y"
                         { (yyval.node) = (yyvsp[0].node); }
#line 1898 "bin/parser.tab.c"
    break;

  case 60: /* expression: logical_or_expression  */
#line 425 "src/parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1904 "bin/parser.tab.c"
    break;

  case 61: /* assignment_statement: IDENTIFIER ASSIGN expression  */
#line 430 "src/parser.y"
    {
        (yyval.node) = ast_create_assign((yyvsp[-2].sval), (yyvsp[0].node));
        free((yyvsp[-2].sval));
    }
#line 1913 "bin/parser.tab.c"
    break;

  case 62: /* logical_or_expression: logical_and_expression  */
#line 437 "src/parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 1919 "bin/parser.tab.c"
    break;

  case 63: /* logical_or_expression: logical_or_expression OU logical_and_expression  */
#line 438 "src/parser.y"
                                                      {
        (yyval.node) = ast_create_binary_op(AST_OR, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1927 "bin/parser.tab.c"
    break;

  case 64: /* logical_or_expression: logical_or_expression XOU logical_and_expression  */
#line 441 "src/parser.y"
                                                       {
        (yyval.node) = ast_create_binary_op(AST_XOR, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1935 "bin/parser.tab.c"
    break;

  case 65: /* logical_and_expression: relational_expression  */
#line 447 "src/parser.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 1941 "bin/parser.tab.c"
    break;

  case 66: /* logical_and_expression: logical_and_expression E relational_expression  */
#line 448 "src/parser.y"
                                                     {
        (yyval.node) = ast_create_binary_op(AST_AND, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1949 "bin/parser.tab.c"
    break;

  case 67: /* relational_expression: additive_expression  */
#line 454 "src/parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1955 "bin/parser.tab.c"
    break;

  case 68: /* relational_expression: relational_expression EQUAL additive_expression  */
#line 455 "src/parser.y"
                                                      {
        (yyval.node) = ast_create_binary_op(AST_EQ, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1963 "bin/parser.tab.c"
    break;

  case 69: /* relational_expression: relational_expression NEQ additive_expression  */
#line 458 "src/parser.y"
                                                    {
        (yyval.node) = ast_create_binary_op(AST_NEQ, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1971 "bin/parser.tab.c"
    break;

  case 70: /* relational_expression: relational_expression LT additive_expression  */
#line 461 "src/parser.y"
                                                   {
        (yyval.node) = ast_create_binary_op(AST_LT, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1979 "bin/parser.tab.c"
    break;

  case 71: /* relational_expression: relational_expression GT additive_expression  */
#line 464 "src/parser.y"
                                                   {
        (yyval.node) = ast_create_binary_op(AST_GT, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1987 "bin/parser.tab.c"
    break;

  case 72: /* relational_expression: relational_expression LTE additive_expression  */
#line 467 "src/parser.y"
                                                    {
        (yyval.node) = ast_create_binary_op(AST_LTE, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1995 "bin/parser.tab.c"
    break;

  case 73: /* relational_expression: relational_expression GTE additive_expression  */
#line 470 "src/parser.y"
                                                    {
        (yyval.node) = ast_create_binary_op(AST_GTE, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 2003 "bin/parser.tab.c"
    break;

  case 74: /* additive_expression: multiplicative_expression  */
#line 476 "src/parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 2009 "bin/parser.tab.c"
    break;

  case 75: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 477 "src/parser.y"
                                                         {
        (yyval.node) = ast_create_binary_op(AST_ADD, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 2017 "bin/parser.tab.c"
    break;

  case 76: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 480 "src/parser.y"
                                                          {
        (yyval.node) = ast_create_binary_op(AST_SUB, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 2025 "bin/parser.tab.c"
    break;

  case 77: /* multiplicative_expression: power_expression  */
#line 486 "src/parser.y"
                     { (yyval.node) = (yyvsp[0].node); }
#line 2031 "bin/parser.tab.c"
    break;

  case 78: /* multiplicative_expression: multiplicative_expression TIMES power_expression  */
#line 487 "src/parser.y"
                                                       {
        (yyval.node) = ast_create_binary_op(AST_MUL, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 2039 "bin/parser.tab.c"
    break;

  case 79: /* multiplicative_expression: multiplicative_expression DIVIDE power_expression  */
#line 490 "src/parser.y"
                                                        {
        (yyval.node) = ast_create_binary_op(AST_DIV, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 2047 "bin/parser.tab.c"
    break;

  case 80: /* multiplicative_expression: multiplicative_expression INT_DIVIDE power_expression  */
#line 493 "src/parser.y"
                                                            {
        (yyval.node) = ast_create_binary_op(AST_INT_DIV, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 2055 "bin/parser.tab.c"
    break;

  case 81: /* power_expression: unary_expression  */
#line 499 "src/parser.y"
                     { (yyval.node) = (yyvsp[0].node); }
#line 2061 "bin/parser.tab.c"
    break;

  case 82: /* power_expression: unary_expression POWER power_expression  */
#line 500 "src/parser.y"
                                              { // Certo-associativo
        (yyval.node) = ast_create_binary_op(AST_POWER, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 2069 "bin/parser.tab.c"
    break;

  case 83: /* unary_expression: primary_expression  */
#line 506 "src/parser.y"
                       { (yyval.node) = (yyvsp[0].node); }
#line 2075 "bin/parser.tab.c"
    break;

  case 84: /* unary_expression: MINUS unary_expression  */
#line 507 "src/parser.y"
                                          {
        (yyval.node) = ast_create_unary_op(AST_NEG, (yyvsp[0].node));
    }
#line 2083 "bin/parser.tab.c"
    break;

  case 85: /* unary_expression: NAO unary_expression  */
#line 510 "src/parser.y"
                           {
        (yyval.node) = ast_create_unary_op(AST_NOT, (yyvsp[0].node));
    }
#line 2091 "bin/parser.tab.c"
    break;

  case 86: /* primary_expression: NUMBER  */
#line 516 "src/parser.y"
           { (yyval.node) = ast_create_number((yyvsp[0].ival)); }
#line 2097 "bin/parser.tab.c"
    break;

  case 87: /* primary_expression: FLOAT_LITERAL  */
#line 517 "src/parser.y"
                    { (yyval.node) = ast_create_float((yyvsp[0].fval)); }
#line 2103 "bin/parser.tab.c"
    break;

  case 88: /* primary_expression: CHAR_LITERAL  */
#line 518 "src/parser.y"
                   { (yyval.node) = ast_create_char((yyvsp[0].cval)); }
#line 2109 "bin/parser.tab.c"
    break;

  case 89: /* primary_expression: STRING_LITERAL  */
#line 519 "src/parser.y"
                     { 
        (yyval.node) = ast_create_string((yyvsp[0].sval));
        free((yyvsp[0].sval));
    }
#line 2118 "bin/parser.tab.c"
    break;

  case 90: /* primary_expression: VERDADEIRO  */
#line 523 "src/parser.y"
                 { (yyval.node) = ast_create_boolean(1); }
#line 2124 "bin/parser.tab.c"
    break;

  case 91: /* primary_expression: FALSO  */
#line 524 "src/parser.y"
            { (yyval.node) = ast_create_boolean(0); }
#line 2130 "bin/parser.tab.c"
    break;

  case 92: /* primary_expression: IDENTIFIER  */
#line 525 "src/parser.y"
                 {
        (yyval.node) = ast_create_identifier((yyvsp[0].sval));
        free((yyvsp[0].sval));
    }
#line 2139 "bin/parser.tab.c"
    break;

  case 93: /* primary_expression: IDENTIFIER LPAREN expression_list RPAREN  */
#line 529 "src/parser.y"
                                               { // Chamada de função
        (yyval.node) = ast_create_func_call((yyvsp[-3].sval), (yyvsp[-1].node));
        free((yyvsp[-3].sval));
    }
#line 2148 "bin/parser.tab.c"
    break;

  case 94: /* primary_expression: IDENTIFIER LPAREN RPAREN  */
#line 533 "src/parser.y"
                               { // Chamada de função sem args (ex: LIMPATELA)
        (yyval.node) = ast_create_func_call((yyvsp[-2].sval), NULL);
        free((yyvsp[-2].sval));
    }
#line 2157 "bin/parser.tab.c"
    break;

  case 95: /* primary_expression: LPAREN logical_or_expression RPAREN  */
#line 537 "src/parser.y"
                                          { /* Parêntesis contêm valores */
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2165 "bin/parser.tab.c"
    break;


#line 2169 "bin/parser.tab.c"

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
      yyerror (YY_("syntax error"));
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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 543 "src/parser.y"


// Funções C de suporte para o parser
int main(int argc, char **argv) {

    #ifdef COMPILER_DEBUG 
    if(COMPILER_DEBUG) printf("[DEBUG] parametros = %d\n", argc);
    #endif
    
    FILE *file = NULL;
    if (argc > 1) {
        file = fopen(argv[1], "r");
        if (!file) {
            perror("Não foi possível abrir o arquivo");
            return 1;
        }
        yyin = file;
    }
    
    printf("Iniciando a análise...\n");
    printf("Analisando o arquivo: %s\n", argc > 1 ? argv[1] : "entrada padrão");

    // Inicia o processo de parsing
    if (yyparse() == 0) {
        printf("Análise sintática bem-sucedida!\n");
        
        // Imprime a árvore sintática
        if (ast_root) {
            printf("\n\n=== Árvore Sintática Abstrata (AST) ===\n\n");
            ast_print(ast_root, 0);
            
            // Libera a memória da AST
            ast_free(ast_root);
        }
    } else {
        printf("Análise sintática falhou.\n");
    }

    if (file) {
        fclose(file);
    }

    return 0;
}

// Função de erro para o Bison.
void yyerror(const char *s) {
    fprintf(stderr, "Erro de sintaxe na linha %d: %s. Próximo a: '%s'\n", yylineno, s, yytext);
}
