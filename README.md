# Tradutor VisuAlg (Compiler Frontend) 

Este projeto é um tradutor para a linguagem **VisuAlg**, desenvolvido em C utilizando as ferramentas **Flex** e **Bison**.
O foco atual do projeto é realizar a análise léxica e sintática do código fonte para construir e visualizar a **Árvore Sintática Abstrata (AST)**.

## Tecnologias Utilizadas
* **C** (Linguagem principal)
* **Flex** (Scanner / Analisador Léxico)
* **Bison** (Parser / Analisador Sintático)
* **Makefile** (Automação de compilação)

## Pré-requisitos

Para compilar e rodar este projeto, você precisará ter instalado no seu ambiente (Linux/WSL ou Windows):
* GCC
* Flex
* Bison
* Make

## Como Compilar

No terminal, dentro da pasta raiz do projeto, execute o comando:

```bash
make compile
```
Isso irá gerar o analisador léxico, o sintático e compilar o executável na pasta bin/.

Para limpar os arquivos gerados (binários e temporários), use:

```bash
make clean
```

## Como Executar
Crie um arquivo de teste (ex: teste.alg) com código VisuAlg ou use os exemplos da pasta sample/.

Execute o tradutor passando o arquivo como argumento:
```bash
./bin/tradutor.exe teste.alg
```

## Exemplo de Saída (AST)
Ao processar um algoritmo simples, o programa exibirá a estrutura da árvore no terminal:
```bash
Iniciando a análise...
Sucesso!

AST Gerada:
PROGRAM: "OlaMundo"
  VAR_DECLS:
    VAR_LIST: x
      TYPE: INTEIRO
  BODY:
    STMT_LIST
      ASSIGN: x
        NUMBER: 10
      STMT_LIST
        WRITE
          ARGS:
            ID: x
```
> Desenvolvido por Fernanda como parte da disciplina de Compiladores.
