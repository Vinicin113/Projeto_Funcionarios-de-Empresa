# Projeto Funcionários de Empresa

Este projeto é uma simulação de um sistema de cadastro de funcionários em C++. Ele permite o registro de diferentes tipos de funcionários (Desenvolvedores, Gerentes e Estagiários), com cálculos personalizados de salário e exibição de informações detalhadas.

## Estrutura do Projeto

- `include/Funcionario.hpp`: Classe abstrata `Funcionario`, com atributos comuns e métodos virtuais.
- `include/Desenvolvedor.hpp` / `src/Desenvolvedor.cpp`: Subclasse `Desenvolvedor`, com cálculo de salário por projetos.
- `include/Gerente.hpp` / `src/Gerente.cpp`: Subclasse `Gerente`, com bônus mensal.
- `include/Estagiario.hpp` / `src/Estagiario.cpp`: Subclasse `Estagiario`, com cálculo baseado em horas trabalhadas.
- `src/main.cpp`: Função principal, responsável pela entrada de dados e interação com o usuário.
- `Makefile`: Facilita a compilação do projeto.

## Pré-requisitos

- Compilador C++ (como `g++`)
- Make (para usar o `Makefile`)

## Compilação

Para compilar o projeto, navegue até a pasta do projeto e use:

```bash
make
```

## Execução

Após a compilação, execute o programa com:

```bash
./build/funcionario
```

## Funcionalidades

Cadastro de funcionários de três tipos:

Desenvolvedor

Gerente

Estagiário

Cálculo automático do salário final com base nas regras específicas de cada tipo.

Exibição formatada das informações de todos os funcionários cadastrados.

## Regras de Cadastro

O sistema exige o cadastro de pelo menos 6 funcionários.

A partir do sexto funcionário, o usuário pode optar por exibir as informações e encerrar o programa.

Ao atingir 10 funcionários, o programa exibe automaticamente todas as informações e finaliza.

## Exemplo de Uso

Durante a execução, o programa solicitará:

Tipo de funcionário (Desenvolvedor, Gerente ou Estagiário)

ID, Nome e Salário base

Dados específicos (como projetos, bônus ou horas trabalhadas)

E ao final exibirá:

```bash
ID: 101
Nome: Joana
Tipo: Desenvolvedor
Projetos: 3
Salário base: 3000.00
Salário final: 4500.00
```

Autor
Vinicius Marques de Almeida
Aluno de Tecnologia da Informação – UFRN
Projeto desenvolvido para a disciplina de Linguagem de Programação I
