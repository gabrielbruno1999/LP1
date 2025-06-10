#ifndef GERENTE_H
#define GERENTE_H

#include "funcionario.h"

class Gerente : public Funcionario {
private:
    float bonusMensal;
public: 
    // Construtor
    Gerente(string nome, float salarioBase, int id, float bonusMensal);

    float calcularSalarioFinal() override;
    void exibirInformacoes() override;
};

#endif