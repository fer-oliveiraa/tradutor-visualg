#ifndef AST_H
#define AST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Definição dos tipos de nós (Enums) */
typedef enum {
    /* Estruturas Principais */
    AST_PROGRAM,
    AST_VAR_DECL,
    AST_VAR_LIST,
    AST_FUNC_DECL,
    AST_PARAM,
    
    /* Comandos */
    AST_STMT_LIST,
    AST_IF,
    AST_IF_ELSE,
    AST_WHILE,
    AST_REPEAT,
    AST_FOR,
    AST_FOR_STEP,
    AST_SWITCH,
    AST_CASE,
    AST_RETURN,
    AST_BREAK,
    AST_ASSIGN,
    
    /* I/O */
    AST_READ,
    AST_WRITE,
    AST_WRITELN,
    AST_WRITE_PARAM,
    
    /* Operadores Binários */
    AST_ADD, AST_SUB, AST_MUL, AST_DIV, AST_INT_DIV, AST_POWER,
    AST_AND, AST_OR, AST_XOR,
    AST_EQ, AST_NEQ, AST_LT, AST_GT, AST_LTE, AST_GTE,
    
    /* Operadores Unários */
    AST_NEG, AST_NOT,
    
    /* Funções e Listas */
    AST_FUNC_CALL,
    AST_ARG_LIST,
    
    /* Tipos Primitivos e Terminais */
    AST_NUMBER,
    AST_FLOAT,
    AST_STRING,
    AST_CHAR,
    AST_BOOLEAN,
    AST_IDENTIFIER,
    AST_TYPE
} ASTNodeType;

/* Estrutura Principal do Nó */
typedef struct ASTNode {
    ASTNodeType type;
    int line;
    
    union {
        int int_value;
        float float_value;
        char *string_value;
        char char_value;
        int bool_value;
        
        struct {
            int type_token;
        } type_spec;
        
        struct {
            char *name;
        } identifier;
        
        struct {
            struct ASTNode *id_list;
            struct ASTNode *type;
        } var_decl;
        
        struct {
            char *name;
            struct ASTNode *next;
        } var_list;
        
        struct {
            char *name;
            struct ASTNode *type;
            struct ASTNode *next;
        } param;
        
        struct {
            char *name;
            struct ASTNode *params;
            struct ASTNode *return_type;
            struct ASTNode *var_decls;
            struct ASTNode *body;
        } func_decl;
        
        struct {
            char *var_name;
            struct ASTNode *expr;
        } assign;
        
        struct {
            struct ASTNode *left;
            struct ASTNode *right;
        } binary;
        
        struct {
            struct ASTNode *operand;
        } unary;
        
        struct {
            struct ASTNode *condition;
            struct ASTNode *then_body;
            struct ASTNode *else_body;
        } if_stmt;
        
        struct {
            struct ASTNode *condition;
            struct ASTNode *body;
        } while_stmt;
        
        struct {
            struct ASTNode *body;
            struct ASTNode *condition;
        } repeat_stmt;
        
        struct {
            char *var;
            struct ASTNode *start;
            struct ASTNode *end;
            struct ASTNode *step;
            struct ASTNode *body;
        } for_stmt;
        
        struct {
            struct ASTNode *expr;
            struct ASTNode *cases;
            struct ASTNode *default_case;
        } switch_stmt;
        
        struct {
            struct ASTNode *value;
            struct ASTNode *stmts;
            struct ASTNode *next;
        } case_stmt;
        
        struct {
            char *name;
            struct ASTNode *args;
        } func_call;
        
        struct {
            struct ASTNode *var_list;
        } read_stmt;
        
        struct {
            struct ASTNode *expr_list;
        } write_stmt;
        
        struct {
            struct ASTNode *expr;
            int width;
            int precision;
            struct ASTNode *next;
        } write_param;
        
        struct {
            struct ASTNode *expr;
            struct ASTNode *next;
        } expr_list;
        
        struct {
            struct ASTNode *stmt;
            struct ASTNode *next;
        } stmt_list;
        
        struct {
            char *name;
            struct ASTNode *var_decls;
            struct ASTNode *func_decls;
            struct ASTNode *body;
        } program;
    } data;
} ASTNode;

/* Variáveis Globais */
extern ASTNode *ast_root;
extern int yylineno;

/* --- Protótipos das Funções --- */

/* Criação de Nós - Programa e Declarações */
ASTNode *ast_create_program(char *name, ASTNode *var_decls, ASTNode *func_decls, ASTNode *body);
ASTNode *ast_create_var_decl(ASTNode *id_list, ASTNode *type);
ASTNode *ast_create_var_list(char *name, ASTNode *next);
ASTNode *ast_create_func_decl(char *name, ASTNode *params, ASTNode *return_type, ASTNode *var_decls, ASTNode *body);
ASTNode *ast_create_param(char *name, ASTNode *type, ASTNode *next);
ASTNode *ast_create_type(int type_token);

/* Criação de Nós - Comandos */
ASTNode *ast_create_stmt_list(ASTNode *stmt, ASTNode *next);
ASTNode *ast_create_if(ASTNode *condition, ASTNode *then_body, ASTNode *else_body);
ASTNode *ast_create_while(ASTNode *condition, ASTNode *body);
ASTNode *ast_create_repeat(ASTNode *body, ASTNode *condition);
ASTNode *ast_create_for(char *var, ASTNode *start, ASTNode *end, ASTNode *step, ASTNode *body);
ASTNode *ast_create_switch(ASTNode *expr, ASTNode *cases, ASTNode *default_case);
ASTNode *ast_create_case(ASTNode *value, ASTNode *stmts, ASTNode *next);
ASTNode *ast_create_return(ASTNode *expr);
ASTNode *ast_create_break(void);
ASTNode *ast_create_assign(char *var_name, ASTNode *expr);

/* Criação de Nós - I/O */
ASTNode *ast_create_read(ASTNode *var_list);
ASTNode *ast_create_write(ASTNode *expr_list, int is_writeln);
ASTNode *ast_create_write_param(ASTNode *expr, int width, int precision, ASTNode *next);

/* Criação de Nós - Expressões */
ASTNode *ast_create_binary_op(ASTNodeType op_type, ASTNode *left, ASTNode *right);
ASTNode *ast_create_unary_op(ASTNodeType op_type, ASTNode *operand);
ASTNode *ast_create_func_call(char *name, ASTNode *args);
ASTNode *ast_create_expr_list(ASTNode *expr, ASTNode *next);

/* Criação de Nós - Primitivos */
ASTNode *ast_create_number(int value);
ASTNode *ast_create_float(float value);
ASTNode *ast_create_string(char *value);
ASTNode *ast_create_char(char value);
ASTNode *ast_create_boolean(int value);
ASTNode *ast_create_identifier(char *name);

/* Utilitários */
void ast_print(ASTNode *node, int indent);
void ast_free(ASTNode *node);

#endif