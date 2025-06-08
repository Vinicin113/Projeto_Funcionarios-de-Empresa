#include "Desenvolvedor.hpp"
#include <iostream>

Desenvolvedor::Desenvolvedor() : quantidadeDeProjetos(0) {}

void Desenvolvedor::setQuantidadeDeProjetos(int q) { quantidadeDeProjetos = q; }
int Desenvolvedor::getQuantidadeDeProjetos() const { return quantidadeDeProjetos; }

float Desenvolvedor::calcularSalarioFinal() const {
    return salarioBase + (500 * quantidadeDeProjetos);
}

void Desenvolvedor::exibirInformacoes() const {
    Funcionario::exibirInformacoes();
    std::cout << "Tipo: Desenvolvedor\nProjetos: " << quantidadeDeProjetos
              << "\nSalário final: " << calcularSalarioFinal() << "\n" << std::endl;
}