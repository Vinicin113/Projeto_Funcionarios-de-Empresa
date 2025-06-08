#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"

class Gerente : public Funcionario {
private:
    float bonusMensal;

public:
    Gerente();
    void setBonusMensal(float b);
    float getBonusMensal() const;

    float calcularSalarioFinal() const override;
    void exibirInformacoes() const override;
};

#endif