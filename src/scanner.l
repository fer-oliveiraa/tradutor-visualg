%option nounput 
%option noinput
%option noyywrap
%option nodefault
%option yylineno
%option case-insensitive 

%{%
    #include "symbol.h"
    #include "parser.tab.h"
%}

%%

[ \t\n\r]+         { /* Ignora espaço, tab, newline E carriage return */ }
"//".* { }
"{"[^{}]*"}"      { }

"+"             { return PLUS; }
"-"             { return MINUS; }
"*"             { return TIMES; }
"/"             { return DIVIDE; }
"\\"            { return INT_DIVIDE; }
"^"             { return POWER; }

"<-"            { return ASSIGN; }

"="             { return EQUAL; }
"<>"            { return NEQ; }
"<"             { return LT; }
">"             { return GT; }
"<="            { return LTE; }
">="            { return GTE; }

"("             { return LPAREN; }
")"             { return RPAREN; }
"["             { return LBRACKET; }
"]"             { return RBRACKET; }
","             { return COMMA; }
":"             { return COLON; }

"inteiro"       { return INTEIRO; }
"real"          { return REAL; }
"numerico"      { return REAL; }
"caracter"      { return CARACTER; }
"literal"       { return LITERAL; }
"logico"        { return LOGICO; }
"verdadeiro"    { return VERDADEIRO; }
"falso"         { return FALSO; }

"algoritmo"     { return ALGORITMO; }
"fimalgoritmo"  { return FIMALGORITMO; }
"var"           { return VAR; }
"inicio"        { return INICIO; }
"funcao"        { return FUNCAO; }
"função"        { return FUNCAO; }
"fimfuncao"     { return FIMFUNCAO; }
"procedimento"  { return PROCEDIMENTO; }
"fimprocedimento" { return FIMPROCEDIMENTO; }
"retorne"       { return RETORNE; }

"se"            { return SE; }
"entao"         { return ENTAO; }
"senao"         { return SENAO; }
"fimse"         { return FIMSE; }
"enquanto"      { return ENQUANTO; }
"faca"          { return FACA; }
"fimenquanto"   { return FIMENQUANTO; }
"para"          { return PARA; }
"de"            { return DE; }
"ate"           { return ATE; }
"passo"         { return PASSO; }
"fimpara"       { return FIMPARA; }
"repita"        { return REPITA; }
"escolha"       { return ESCOLHA; }
"caso"         { return CASO; }
"outrocaso"     { return OUTROCASO; }
"fimescolha"    { return FIMESCOLHA; }
"interrompa"    { return INTERROMPA; }

"leia"          { return LEIA; }
"escreva"       { return ESCREVA; }
"escreval"      { return ESCREVAL; }

"e"             { return E; }
"ou"            { return OU; }
"nao"           { return NAO; }
"xou"           { return XOU; }

"aleatorio"     { return ALEATORIO; }
"abs"           { return ABS; }
"arccos"        { return ARCCOS; }
"arcsen"        { return ARCSEN; }
"arctan"        { return ARCTAN; }
"arquivo"       { return ARQUIVO; }
"asc"           { return ASC; }
"compr"         { return COMPR; }
"copia"         { return COPIA; }
"cos"           { return COS; }
"cotan"         { return COTAN; }
"cronometro"    { return CRONOMETRO; }
"debug"         { return DEBUG; }
"eco"           { return ECO; }
"exp"           { return EXP; }
"grauprad"      { return GRAUPRAD; }
"int"           { return INT_FUNC; }
"log"           { return LOG; }
"logn"          { return LOGN; }
"maiusc"        { return MAIUSC; }
"minusc"        { return MINUSC; }
"numpcarac"     { return NUMPCARAC; }
"pausa"         { return PAUSA; }
"pi"            { return PI; }
"pos"           { return POS; }
"quad"          { return QUAD; }
"radpgrau"      { return RADPGRAU; }
"raizq"         { return RAIZQ; }
"rand"          { return RAND; }
"randi"         { return RANDI; }
"sen"           { return SEN; }
"timer"         { return TIMER; }
"tan"           { return TAN; }

[0-9]+\\.[0-9]+([eE][-+]?[0-9]+)?   { yylval.fval = atof(yytext); return FLOAT_LITERAL; }
[0-9]+                             { yylval.ival = atoi(yytext); return NUMBER; }
'[^']'                             { yylval.cval = yytext[1]; return CHAR_LITERAL; }
\"([^\\\"]|\\.)*\"                 { yylval.sval = strdup(yytext); return STRING_LITERAL; }

[a-zA-Z][a-zA-Z0-9_]* {
                  yylval.sval = strdup(yytext);
                  return IDENTIFIER;
                }

. {
    fprintf(stderr, "Erro Léxico: Caractere inesperado '%s' na linha %d\n", yytext, yylineno);
}

%%