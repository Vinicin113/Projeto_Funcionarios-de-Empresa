#include "Estagiario.hpp"
#include <iostream>

Estagiario::Estagiario() : horasTrabalhadas(0) {}

void Estagiario::setHorasTrabalhadas(int h) { horasTrabalhadas = h; }
int Estagiario::getHorasTrabalhadas() const { return horasTrabalhadas; }

float Estagiario::calcularSalarioFinal() const {
    return salarioBase * (horasTrabalhadas / 160.0f);
}

void Estagiario::exibirInformacoes() const {
    Funcionario::exibirInformacoes();
    std::cout << "Tipo: Estagiário\nHoras trabalhadas: " << horasTrabalhadas
              << "\nSalário final: " << calcularSalarioFinal() << "\n" << std::endl;
}