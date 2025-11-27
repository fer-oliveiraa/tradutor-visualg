%{
    #include "AST.h"
    #include <stdio.h>  // Para FILE*
    #include <stdlib.h> // Para malloc/exit
    #include <string.h> // Para strdup/strcmp
    
    void yyerror(const char *s); // Declaração da função de erro do Bison
    extern int yylex(void); // Declaração da função do scanner, gerada pelo Flex
    extern FILE *yyin;      // Para definir o arquivo de entrada
    extern char *yytext;    // Para acessar o texto do token atual
    extern int yylineno;    // Para rastrear o número da linha
%}

// Definições de tipos de valores semânticos

%union {
    int      ival;       // Para números inteiros e tipos
    float    fval;       // Para valores float 
    char   * sval;       // Para identificadores e strings
    char     cval;       // Para caracteres
    struct ASTNode * node;  // Para nós da AST
}

%token <sval> IDENTIFIER
%token <ival> NUMBER
%token <fval> FLOAT_LITERAL
%token <cval> CHAR_LITERAL
%token <sval> STRING_LITERAL

/* --- TOKENS DE TIPO VISUALG --- */
%token INTEIRO
%token REAL
%token CARACTER
%token LITERAL
%token LOGICO
%token VERDADEIRO FALSO

/* --- TOKENS DE CONTROLE VISUALG --- */
%token SE ENTAO SENAO FIMSE
%token ENQUANTO FACA FIMENQUANTO
%token REPITA ATE
%token PARA DE PASSO FIMPARA
%token ESCOLHA CASO OUTROCASO FIMESCOLHA
%token INTERROMPA
%token RETORNE

/* --- OPERADORES VISUALG --- */
%token PLUS MINUS TIMES DIVIDE ASSIGN EQUAL NEQ LT GT LTE GTE
%token INT_DIVIDE POWER
%token E OU NAO XOU

/* --- ESTRUTURA E PONTUAÇÃO --- */
%token LPAREN RPAREN LBRACKET RBRACKET COMMA COLON
%token ALGORITMO FIMALGORITMO VAR INICIO
%token FUNCAO FIMFUNCAO PROCEDIMENTO FIMPROCEDIMENTO

/* --- I/O --- */
%token LEIA ESCREVA ESCREVAL

/* --- FUNÇÕES INTERNAS (Declaradas, mas não usadas na gramática de expressão) --- */
%token ALEATORIO ABS ARCCOS ARCSEN ARCTAN ARQUIVO ASC
%token COMPR COPIA COS COTAN CRONOMETRO DEBUG ECO EXP
%token GRAUPRAD INT_FUNC LOG LOGN MAIUSC MINUSC
%token NUMPCARAC PAUSA PI POS QUAD RADPGRAU RAIZQ
%token RAND RANDI SEN TIMER TAN

// Definição dos tipos de valores semânticos para as regras
%type <ival> type_specifier // Tipo de dado (int, float, etc.)
%type <node> program
%type <node> declaracao_variaveis variable_declaration_list variable_declaration
%type <node> declaracao_subrotinas function_declaration procedure_declaration
%type <node> parameter_declaration parameter_list identifier_list
%type <node> statement_list statement
%type <node> expression assignment_statement
%type <node> logical_or_expression logical_and_expression relational_expression
%type <node> additive_expression multiplicative_expression power_expression
%type <node> unary_expression primary_expression
%type <node> if_statement while_statement repita_statement para_statement
%type <node> escolha_statement caso_list outrocaso_block
%type <node> io_statement
%type <node> write_list write_parameter expression_list

// Seção de precedência de operadores (do menor para o maior)
%right ASSIGN
%left OU XOU
%left E
%nonassoc EQUAL NEQ LT GT LTE GTE // não-associativo
%left PLUS MINUS
%left TIMES DIVIDE INT_DIVIDE
%right POWER
%right NAO UMINUS // Operadores unários (precedência alta)


// Definição da gramática
%%

// A regra de início da gramática.
program: 
    ALGORITMO STRING_LITERAL
    declaracao_variaveis
    declaracao_subrotinas
    INICIO
    statement_list
    FIMALGORITMO
    {
        $$ = ast_create_program($2, $3, $4, $6);
        ast_root = $$;
        free($2);
    }
;

// Bloco de declaração de variáveis (VAR)
declaracao_variaveis:
    /* vazio */ { $$ = NULL; }
    | VAR variable_declaration_list { $$ = $2; }
;

variable_declaration_list:
    variable_declaration { $$ = $1; }
    | variable_declaration_list variable_declaration {
        // Encadeia as declarações
        if ($1) {
            ASTNode *temp = $1;
            while (temp->data.var_decl.id_list && 
                   temp->data.var_decl.id_list->data.var_list.next) {
                temp = temp->data.var_decl.id_list->data.var_list.next;
            }
            // Procura o último nó da lista
            temp = $1;
            while (temp->data.stmt_list.next) {
                temp = temp->data.stmt_list.next;
            }
            temp->data.stmt_list.next = $2;
            $$ = $1;
        } else {
            $$ = $2;
        }
    }
;

// Declaração de variável no formato VisuAlg: id1, id2 : tipo
variable_declaration:
    identifier_list COLON type_specifier {
        ASTNode *type_node = ast_create_type($3);
        $$ = ast_create_var_decl($1, type_node);
    }
;

// Lista de identificadores (para declaração)
identifier_list:
    IDENTIFIER { 
        $$ = ast_create_var_list($1, NULL);
        free($1); 
    }
    | identifier_list COMMA IDENTIFIER {
        ASTNode *newNode = ast_create_var_list($3, NULL);
        free($3);
        
        // Encontra o final da lista
        ASTNode *temp = $1;
        while (temp->data.var_list.next) {
            temp = temp->data.var_list.next;
        }
        temp->data.var_list.next = newNode;
        $$ = $1;
    }
;

// Bloco de declaração de funções e procedimentos
declaracao_subrotinas:
    /* vazio */ { $$ = NULL; }
    | declaracao_subrotinas function_declaration {
        if ($1) {
            ASTNode *temp = $1;
            while (temp->data.stmt_list.next) {
                temp = temp->data.stmt_list.next;
            }
            temp->data.stmt_list.next = $2;
            $$ = $1;
        } else {
            $$ = $2;
        }
    }
    | declaracao_subrotinas procedure_declaration {
        if ($1) {
            ASTNode *temp = $1;
            while (temp->data.stmt_list.next) {
                temp = temp->data.stmt_list.next;
            }
            temp->data.stmt_list.next = $2;
            $$ = $1;
        } else {
            $$ = $2;
        }
    }
;

// Especificador de tipo
type_specifier:
    INTEIRO     { $$ = INTEIRO; }
    | REAL        { $$ = REAL; }
    | CARACTER    { $$ = CARACTER; }
    | LITERAL     { $$ = LITERAL; }
    | LOGICO      { $$ = LOGICO; }
;

// Lista de parâmetros de função/procedimento
parameter_list:
    /* vazio */ { $$ = NULL; }
    | parameter_declaration { $$ = $1; }
    | parameter_list COMMA parameter_declaration {
        // Adiciona $3 ao final da lista $1
        ASTNode *temp = $1;
        while(temp->data.param.next) {
            temp = temp->data.param.next;
        }
        temp->data.param.next = $3;
        $$ = $1;
    }
;

// Declaração de parâmetro individual: id : tipo
parameter_declaration:
    IDENTIFIER COLON type_specifier {
        ASTNode *type_node = ast_create_type($3);
        $$ = ast_create_param($1, type_node, NULL);
        free($1);
    }
;

// Declaração de função
function_declaration:
    FUNCAO IDENTIFIER LPAREN parameter_list RPAREN COLON type_specifier
    declaracao_variaveis
    INICIO
    statement_list
    FIMFUNCAO
    {
        ASTNode *return_type = ast_create_type($7);
        $$ = ast_create_func_decl($2, $4, return_type, $8, $10);
        free($2);
    }
;

// Declaração de procedimento
procedure_declaration:
    PROCEDIMENTO IDENTIFIER LPAREN parameter_list RPAREN
    declaracao_variaveis
    INICIO
    statement_list
    FIMPROCEDIMENTO
    {
        $$ = ast_create_func_decl($2, $4, NULL, $6, $8);
        free($2);
    }
;


// Lista de comandos (statements)
statement_list:
    /* vazio */ { $$ = NULL; }
    | statement_list statement {
        if ($2) {
            if ($1) {
                $$ = ast_create_stmt_list($2, $1);
            } else {
                $$ = ast_create_stmt_list($2, NULL);
            }
        } else {
            $$ = $1;
        }
    }
;

statement:
    expression { $$ = $1; }
    | if_statement { $$ = $1; }
    | while_statement { $$ = $1; }
    | repita_statement { $$ = $1; }
    | para_statement { $$ = $1; }
    | escolha_statement { $$ = $1; }
    | io_statement { $$ = $1; }
    | RETORNE logical_or_expression { $$ = ast_create_return($2); }
    | INTERROMPA { $$ = ast_create_break(); }
;

// Comandos de I/O
io_statement:
    LEIA LPAREN identifier_list RPAREN { $$ = ast_create_read($3); }
    | ESCREVA LPAREN write_list RPAREN { $$ = ast_create_write($3, 0); }
    | ESCREVAL LPAREN write_list RPAREN { $$ = ast_create_write($3, 1); }
    | ESCREVA LPAREN RPAREN { $$ = ast_create_write(NULL, 0); }
    | ESCREVAL LPAREN RPAREN { $$ = ast_create_write(NULL, 1); }
    | ESCREVAL { $$ = ast_create_write(NULL, 1); } /* ESCREVAL sozinho (só quebra de linha) */
;

/* =================================================================== */
/* === REGRAS CORRIGIDAS AQUI ===                                    */
/* Removemos a ambiguidade de write_format_option                     */
/* =================================================================== */
write_list:
    write_parameter { $$ = $1; }
    | write_list COMMA write_parameter {
        if ($1) {
            ASTNode *temp = $1;
            while (temp->data.write_param.next) {
                temp = temp->data.write_param.next;
            }
            temp->data.write_param.next = $3;
            $$ = $1;
        } else {
            $$ = $3;
        }
    }
;

write_parameter:
    logical_or_expression { 
        $$ = ast_create_write_param($1, -1, -1, NULL); 
    }
    | logical_or_expression COLON NUMBER { 
        $$ = ast_create_write_param($1, $3, -1, NULL); 
    }
    | logical_or_expression COLON NUMBER COLON NUMBER { 
        $$ = ast_create_write_param($1, $3, $5, NULL); 
    }
;
/* =================================================================== */

// Lista de expressões (usada para chamadas de função)
// Não pode conter atribuições, por isso usa logical_or_expression
expression_list:
    logical_or_expression { $$ = ast_create_expr_list($1, NULL); }
    | expression_list COMMA logical_or_expression {
        $$ = ast_create_expr_list($3, $1);
    }
;

// Comando 'se' (if)
if_statement:
    SE logical_or_expression ENTAO
    statement_list
    FIMSE
    { $$ = ast_create_if($2, $4, NULL); }
    | SE logical_or_expression ENTAO
    statement_list
    SENAO
    statement_list
    FIMSE
    { $$ = ast_create_if($2, $4, $6); }
;

// Comando 'enquanto' (while)
while_statement:
    ENQUANTO logical_or_expression FACA
    statement_list
    FIMENQUANTO
    { $$ = ast_create_while($2, $4); }
;

// Comando 'repita' (repeat-until)
repita_statement:
    REPITA
    statement_list
    ATE logical_or_expression
    { $$ = ast_create_repeat($2, $4); }
;

// Comando 'para' (for)
para_statement:
    PARA IDENTIFIER DE logical_or_expression ATE logical_or_expression FACA
    statement_list
    FIMPARA
    { 
        $$ = ast_create_for($2, $4, $6, NULL, $8);
        free($2);
    }
    | PARA IDENTIFIER DE logical_or_expression ATE logical_or_expression PASSO logical_or_expression FACA
    statement_list
    FIMPARA
    {
        $$ = ast_create_for($2, $4, $6, $8, $10);
        free($2);
    }
;

// Comando 'escolha' (switch)
escolha_statement:
    ESCOLHA logical_or_expression
    caso_list
    outrocaso_block
    FIMESCOLHA
    { $$ = ast_create_switch($2, $3, $4); }
;

caso_list:
    /* vazio */ { $$ = NULL; }
    | caso_list CASO logical_or_expression
      statement_list
    {
        ASTNode *new_case = ast_create_case($3, $4, NULL);
        if ($1) {
            ASTNode *temp = $1;
            while (temp->data.case_stmt.next) {
                temp = temp->data.case_stmt.next;
            }
            temp->data.case_stmt.next = new_case;
            $$ = $1;
        } else {
            $$ = new_case;
        }
    }
;

outrocaso_block:
    /* vazio */ { $$ = NULL; }
    | OUTROCASO statement_list { $$ = $2; }
;


// Expressões
expression:
    /* Um comando pode ser uma atribuição OU um valor (ex: chamada de função) */
    assignment_statement { $$ = $1; }
    | logical_or_expression { $$ = $1; }
;

assignment_statement:
    IDENTIFIER ASSIGN expression /* Uma atribuição pode ter outra atribuição (a := b := 10) */
    {
        $$ = ast_create_assign($1, $3);
        free($1);
    }
;

logical_or_expression:
    logical_and_expression { $$ = $1; }
    | logical_or_expression OU logical_and_expression {
        $$ = ast_create_binary_op(AST_OR, $1, $3);
    }
    | logical_or_expression XOU logical_and_expression {
        $$ = ast_create_binary_op(AST_XOR, $1, $3);
    }
;

logical_and_expression:
    relational_expression { $$ = $1; }
    | logical_and_expression E relational_expression {
        $$ = ast_create_binary_op(AST_AND, $1, $3);
    }
;

relational_expression:
    additive_expression { $$ = $1; }
    | relational_expression EQUAL additive_expression {
        $$ = ast_create_binary_op(AST_EQ, $1, $3);
    }
    | relational_expression NEQ additive_expression {
        $$ = ast_create_binary_op(AST_NEQ, $1, $3);
    }
    | relational_expression LT additive_expression {
        $$ = ast_create_binary_op(AST_LT, $1, $3);
    }
    | relational_expression GT additive_expression {
        $$ = ast_create_binary_op(AST_GT, $1, $3);
    }
    | relational_expression LTE additive_expression {
        $$ = ast_create_binary_op(AST_LTE, $1, $3);
    }
    | relational_expression GTE additive_expression {
        $$ = ast_create_binary_op(AST_GTE, $1, $3);
    }
;

additive_expression:
    multiplicative_expression { $$ = $1; }
    | additive_expression PLUS multiplicative_expression {
        $$ = ast_create_binary_op(AST_ADD, $1, $3);
    }
    | additive_expression MINUS multiplicative_expression {
        $$ = ast_create_binary_op(AST_SUB, $1, $3);
    }
;

multiplicative_expression:
    power_expression { $$ = $1; }
    | multiplicative_expression TIMES power_expression {
        $$ = ast_create_binary_op(AST_MUL, $1, $3);
    }
    | multiplicative_expression DIVIDE power_expression {
        $$ = ast_create_binary_op(AST_DIV, $1, $3);
    }
    | multiplicative_expression INT_DIVIDE power_expression {
        $$ = ast_create_binary_op(AST_INT_DIV, $1, $3);
    }
;

power_expression:
    unary_expression { $$ = $1; }
    | unary_expression POWER power_expression { // Certo-associativo
        $$ = ast_create_binary_op(AST_POWER, $1, $3);
    }
;

unary_expression:
    primary_expression { $$ = $1; }
    | MINUS unary_expression %prec UMINUS {
        $$ = ast_create_unary_op(AST_NEG, $2);
    }
    | NAO unary_expression {
        $$ = ast_create_unary_op(AST_NOT, $2);
    }
;

primary_expression:
    NUMBER { $$ = ast_create_number($1); }
    | FLOAT_LITERAL { $$ = ast_create_float($1); }
    | CHAR_LITERAL { $$ = ast_create_char($1); }
    | STRING_LITERAL { 
        $$ = ast_create_string($1);
        free($1);
    }
    | VERDADEIRO { $$ = ast_create_boolean(1); }
    | FALSO { $$ = ast_create_boolean(0); }
    | IDENTIFIER {
        $$ = ast_create_identifier($1);
        free($1);
    }
    | IDENTIFIER LPAREN expression_list RPAREN { // Chamada de função
        $$ = ast_create_func_call($1, $3);
        free($1);
    }
    | IDENTIFIER LPAREN RPAREN { // Chamada de função sem args (ex: LIMPATELA)
        $$ = ast_create_func_call($1, NULL);
        free($1);
    }
    | LPAREN logical_or_expression RPAREN { /* Parêntesis contêm valores */
        $$ = $2;
    }
;


%%

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
