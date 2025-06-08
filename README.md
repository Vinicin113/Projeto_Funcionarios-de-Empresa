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
