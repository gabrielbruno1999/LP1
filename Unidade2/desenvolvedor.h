#ifndef DESENVOLVEDOR_H
#define DESENVOLVEDOR_H

#include "funcionario.h"

class Desenvolvedor : public Funcionario {
private:
    int quantidadeDeProjetos;
public:
    // Construtor
    Desenvolvedor(string nome, float salarioBase, int id, int quantidadeDeProjetos);

    float calcularSalarioFinal() override;
    void exibirInformacoes() override;
};

#endif