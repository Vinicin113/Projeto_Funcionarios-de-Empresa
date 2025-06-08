#include "Funcionario.hpp"
#include <iostream>

void Funcionario::setNome(const std::string& n) { nome = n; }
std::string Funcionario::getNome() const { return nome; }

void Funcionario::setSalarioBase(float s) { salarioBase = s; }
float Funcionario::getSalarioBase() const { return salarioBase; }

void Funcionario::setId(int i) { id = i; }
int Funcionario::getId() const { return id; }

void Funcionario::exibirInformacoes() const {
    std::cout << "ID: " << id << "\nNome: " << nome << "\nSalário base: " << salarioBase << std::endl;
}