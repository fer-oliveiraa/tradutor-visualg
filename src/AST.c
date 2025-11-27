#include "AST.h"

ASTNode *ast_root = NULL;

static ASTNode *ast_create_node(ASTNodeType type) {
    ASTNode *node = (ASTNode *)malloc(sizeof(ASTNode));
    if (!node) {
        fprintf(stderr, "Erro de alocação de memória.\n");
        exit(1);
    }
    node->type = type;
    node->line = yylineno;
    // Zera a memória da union para evitar lixo
    memset(&node->data, 0, sizeof(node->data));
    return node;
}

/* Implementação das Funções */

ASTNode *ast_create_program(char *name, ASTNode *var_decls, ASTNode *func_decls, ASTNode *body) {
    ASTNode *node = ast_create_node(AST_PROGRAM);
    node->data.program.name = name ? strdup(name) : NULL;
    node->data.program.var_decls = var_decls;
    node->data.program.func_decls = func_decls;
    node->data.program.body = body;
    return node;
}

ASTNode *ast_create_var_decl(ASTNode *id_list, ASTNode *type) {
    ASTNode *node = ast_create_node(AST_VAR_DECL);
    node->data.var_decl.id_list = id_list;
    node->data.var_decl.type = type;
    return node;
}

ASTNode *ast_create_var_list(char *name, ASTNode *next) {
    ASTNode *node = ast_create_node(AST_VAR_LIST);
    node->data.var_list.name = name ? strdup(name) : NULL;
    node->data.var_list.next = next;
    return node;
}

ASTNode *ast_create_func_decl(char *name, ASTNode *params, ASTNode *return_type, ASTNode *var_decls, ASTNode *body) {
    ASTNode *node = ast_create_node(AST_FUNC_DECL);
    node->data.func_decl.name = name ? strdup(name) : NULL;
    node->data.func_decl.params = params;
    node->data.func_decl.return_type = return_type;
    node->data.func_decl.var_decls = var_decls;
    node->data.func_decl.body = body;
    return node;
}

ASTNode *ast_create_param(char *name, ASTNode *type, ASTNode *next) {
    ASTNode *node = ast_create_node(AST_PARAM);
    node->data.param.name = name ? strdup(name) : NULL;
    node->data.param.type = type;
    node->data.param.next = next;
    return node;
}

ASTNode *ast_create_type(int type_token) {
    ASTNode *node = ast_create_node(AST_TYPE);
    node->data.type_spec.type_token = type_token;
    return node;
}

ASTNode *ast_create_stmt_list(ASTNode *stmt, ASTNode *next) {
    ASTNode *node = ast_create_node(AST_STMT_LIST);
    node->data.stmt_list.stmt = stmt;
    node->data.stmt_list.next = next;
    return node;
}

ASTNode *ast_create_if(ASTNode *condition, ASTNode *then_body, ASTNode *else_body) {
    ASTNode *node = ast_create_node(else_body ? AST_IF_ELSE : AST_IF);
    node->data.if_stmt.condition = condition;
    node->data.if_stmt.then_body = then_body;
    node->data.if_stmt.else_body = else_body;
    return node;
}

ASTNode *ast_create_while(ASTNode *condition, ASTNode *body) {
    ASTNode *node = ast_create_node(AST_WHILE);
    node->data.while_stmt.condition = condition;
    node->data.while_stmt.body = body;
    return node;
}

ASTNode *ast_create_repeat(ASTNode *body, ASTNode *condition) {
    ASTNode *node = ast_create_node(AST_REPEAT);
    node->data.repeat_stmt.body = body;
    node->data.repeat_stmt.condition = condition;
    return node;
}

ASTNode *ast_create_for(char *var, ASTNode *start, ASTNode *end, ASTNode *step, ASTNode *body) {
    ASTNode *node = ast_create_node(AST_FOR); // Simplificado para um único tipo
    node->data.for_stmt.var = var ? strdup(var) : NULL;
    node->data.for_stmt.start = start;
    node->data.for_stmt.end = end;
    node->data.for_stmt.step = step;
    node->data.for_stmt.body = body;
    return node;
}

ASTNode *ast_create_switch(ASTNode *expr, ASTNode *cases, ASTNode *default_case) {
    ASTNode *node = ast_create_node(AST_SWITCH);
    node->data.switch_stmt.expr = expr;
    node->data.switch_stmt.cases = cases;
    node->data.switch_stmt.default_case = default_case;
    return node;
}

ASTNode *ast_create_case(ASTNode *value, ASTNode *stmts, ASTNode *next) {
    ASTNode *node = ast_create_node(AST_CASE);
    node->data.case_stmt.value = value;
    node->data.case_stmt.stmts = stmts;
    node->data.case_stmt.next = next;
    return node;
}

ASTNode *ast_create_return(ASTNode *expr) {
    ASTNode *node = ast_create_node(AST_RETURN);
    node->data.unary.operand = expr;
    return node;
}

ASTNode *ast_create_break(void) {
    return ast_create_node(AST_BREAK);
}

ASTNode *ast_create_assign(char *var_name, ASTNode *expr) {
    ASTNode *node = ast_create_node(AST_ASSIGN);
    node->data.assign.var_name = var_name ? strdup(var_name) : NULL;
    node->data.assign.expr = expr;
    return node;
}

ASTNode *ast_create_read(ASTNode *var_list) {
    ASTNode *node = ast_create_node(AST_READ);
    node->data.read_stmt.var_list = var_list;
    return node;
}

ASTNode *ast_create_write(ASTNode *expr_list, int is_writeln) {
    ASTNode *node = ast_create_node(is_writeln ? AST_WRITELN : AST_WRITE);
    node->data.write_stmt.expr_list = expr_list;
    return node;
}

ASTNode *ast_create_write_param(ASTNode *expr, int width, int precision, ASTNode *next) {
    ASTNode *node = ast_create_node(AST_WRITE_PARAM);
    node->data.write_param.expr = expr;
    node->data.write_param.width = width;
    node->data.write_param.precision = precision;
    node->data.write_param.next = next;
    return node;
}

ASTNode *ast_create_binary_op(ASTNodeType op_type, ASTNode *left, ASTNode *right) {
    ASTNode *node = ast_create_node(op_type);
    node->data.binary.left = left;
    node->data.binary.right = right;
    return node;
}

ASTNode *ast_create_unary_op(ASTNodeType op_type, ASTNode *operand) {
    ASTNode *node = ast_create_node(op_type);
    node->data.unary.operand = operand;
    return node;
}

ASTNode *ast_create_func_call(char *name, ASTNode *args) {
    ASTNode *node = ast_create_node(AST_FUNC_CALL);
    node->data.func_call.name = name ? strdup(name) : NULL;
    node->data.func_call.args = args;
    return node;
}

ASTNode *ast_create_expr_list(ASTNode *expr, ASTNode *next) {
    ASTNode *node = ast_create_node(AST_ARG_LIST);
    node->data.expr_list.expr = expr;
    node->data.expr_list.next = next;
    return node;
}

ASTNode *ast_create_number(int value) {
    ASTNode *node = ast_create_node(AST_NUMBER);
    node->data.int_value = value;
    return node;
}

ASTNode *ast_create_float(float value) {
    ASTNode *node = ast_create_node(AST_FLOAT);
    node->data.float_value = value;
    return node;
}

ASTNode *ast_create_string(char *value) {
    ASTNode *node = ast_create_node(AST_STRING);
    node->data.string_value = value ? strdup(value) : NULL;
    return node;
}

ASTNode *ast_create_char(char value) {
    ASTNode *node = ast_create_node(AST_CHAR);
    node->data.char_value = value;
    return node;
}

ASTNode *ast_create_boolean(int value) {
    ASTNode *node = ast_create_node(AST_BOOLEAN);
    node->data.bool_value = value;
    return node;
}

ASTNode *ast_create_identifier(char *name) {
    ASTNode *node = ast_create_node(AST_IDENTIFIER);
    node->data.identifier.name = name ? strdup(name) : NULL;
    return node;
}

void ast_print(ASTNode *node, int indent) {
    if (!node) return;
    for(int i=0; i<indent; i++) printf("  ");
    
    // Switch básico para debug (expandir conforme necessário)
    switch(node->type) {
        case AST_PROGRAM: printf("PROGRAM: %s\n", node->data.program.name);
            ast_print(node->data.program.var_decls, indent+1);
            ast_print(node->data.program.body, indent+1);
            break;
        case AST_ADD: printf("ADD\n");
            ast_print(node->data.binary.left, indent+1);
            ast_print(node->data.binary.right, indent+1);
            break;
        case AST_NUMBER: printf("NUMBER: %d\n", node->data.int_value); break;
        case AST_IDENTIFIER: printf("ID: %s\n", node->data.identifier.name); break;
        case AST_STMT_LIST: 
            printf("STMT_LIST\n");
            ast_print(node->data.stmt_list.stmt, indent+1);
            ast_print(node->data.stmt_list.next, indent);
            break;
        case AST_ASSIGN:
            printf("ASSIGN: %s\n", node->data.assign.var_name);
            ast_print(node->data.assign.expr, indent+1);
            break;
        case AST_WRITE: printf("WRITE\n"); 
            ast_print(node->data.write_stmt.expr_list, indent+1); break;
        default: printf("NODE Type: %d\n", node->type); break;
    }
}

void ast_free(ASTNode *node) {
    if (!node) return;
    free(node); // Simplificado. Em produção, deve-se liberar recursivamente os filhos.
}