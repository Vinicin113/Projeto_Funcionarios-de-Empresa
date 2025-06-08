#include "Gerente.hpp"
#include <iostream>

Gerente::Gerente() : bonusMensal(0) {}

void Gerente::setBonusMensal(float b) { bonusMensal = b; }
float Gerente::getBonusMensal() const { return bonusMensal; }

float Gerente::calcularSalarioFinal() const {
    return salarioBase + bonusMensal;
}

void Gerente::exibirInformacoes() const {
    Funcionario::exibirInformacoes();
    std::cout << "Tipo: Gerente\nBônus: " << bonusMensal
              << "\nSalário final: " << calcularSalarioFinal() << "\n" << std::endl;
}