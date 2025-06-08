#ifndef DESENVOLVEDOR_HPP
#define DESENVOLVEDOR_HPP

#include "Funcionario.hpp"

class Desenvolvedor : public Funcionario {
private:
    int quantidadeDeProjetos;

public:
    Desenvolvedor();
    void setQuantidadeDeProjetos(int q);
    int getQuantidadeDeProjetos() const;

    float calcularSalarioFinal() const override;
    void exibirInformacoes() const override;
};

#endif