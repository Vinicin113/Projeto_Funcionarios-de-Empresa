#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>

class Funcionario {
protected:
    std::string nome;
    float salarioBase;

private:
    int id;

public:
    virtual ~Funcionario() = default;

    void setNome(const std::string& n);
    std::string getNome() const;

    void setSalarioBase(float s);
    float getSalarioBase() const;

    void setId(int i);
    int getId() const;

    virtual void exibirInformacoes() const;
    virtual float calcularSalarioFinal() const = 0;
};

#endif