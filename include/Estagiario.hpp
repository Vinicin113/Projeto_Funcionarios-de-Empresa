#ifndef ESTAGIARIO_HPP
#define ESTAGIARIO_HPP

#include "Funcionario.hpp"

class Estagiario : public Funcionario {
private:
    int horasTrabalhadas;

public:
    Estagiario();
    void setHorasTrabalhadas(int h);
    int getHorasTrabalhadas() const;

    float calcularSalarioFinal() const override;
    void exibirInformacoes() const override;
};

#endif