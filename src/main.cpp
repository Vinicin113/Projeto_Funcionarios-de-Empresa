#include <iostream>
#include <vector>
#include "Desenvolvedor.hpp"
#include "Gerente.hpp"
#include "Estagiario.hpp"

int main() {
    std::vector<Funcionario*> funcionarios;
    int opcao, id;
    std::string nome;
    float salario;

    while (funcionarios.size() < 10) {
        std::cout << "Cadastrar:\n1 - Desenvolvedor\n2 - Gerente\n3 - Estagiário\n";
        if (funcionarios.size() >= 6) {
            std::cout << "4 - Exibir informações e sair\n";
        }
        std::cout << "Opção: ";
        std::cin >> opcao;

        if (opcao == 4 && funcionarios.size() >= 6) {
            break;
        }

        std::cout << "ID: ";
        std::cin >> id;

        std::cout << "Nome: ";
        std::cin.ignore();
        std::getline(std::cin, nome);

        std::cout << "Salário base: ";
        std::cin >> salario;

        Funcionario* f = nullptr;

        if (opcao == 1) {
            int projetos;
            std::cout << "Quantidade de projetos: ";
            std::cin >> projetos;
            Desenvolvedor* d = new Desenvolvedor();
            d->setId(id);
            d->setNome(nome);
            d->setSalarioBase(salario);
            d->setQuantidadeDeProjetos(projetos);
            f = d;
        } else if (opcao == 2) {
            float bonus;
            std::cout << "Bônus mensal: ";
            std::cin >> bonus;
            Gerente* g = new Gerente();
            g->setId(id);
            g->setNome(nome);
            g->setSalarioBase(salario);
            g->setBonusMensal(bonus);
            f = g;
        } else if (opcao == 3) {
            int horas;
            std::cout << "Horas trabalhadas: ";
            std::cin >> horas;
            Estagiario* e = new Estagiario();
            e->setId(id);
            e->setNome(nome);
            e->setSalarioBase(salario);
            e->setHorasTrabalhadas(horas);
            f = e;
        }

        if (f) {
            funcionarios.push_back(f);
            std::cout << "Funcionário cadastrado com sucesso. Total cadastrados: " << funcionarios.size() << "/10\n\n";
        }
    }

    std::cout << "\n--- INFORMAÇÕES DOS FUNCIONÁRIOS ---\n";
    for (Funcionario* f : funcionarios) {
        f->exibirInformacoes();
    }

    for (Funcionario* f : funcionarios) {
        delete f;
    }

    return 0;
}