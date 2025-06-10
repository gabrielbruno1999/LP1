#ifndef ESTAGIARIO_H
#define ESTAGIARIO_H

#include "funcionario.h"

class Estagiario : public Funcionario {
private:
    int horasTrabalhadas;
public:
    // Construtor
    Estagiario(string nome, float salarioBase, int id, int horasTrabalhadas);

    float calcularSalarioFinal() override;
    void exibirInformacoes() override;
};

#endif