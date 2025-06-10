#include "gerente.h"
#include <iostream>

// Construtor
Gerente::Gerente (string nome, float salarioBase, int id, float bonusMensal):
    Funcionario(nome, salarioBase, id), // Chama construtor da base
    bonusMensal(bonusMensal) // Atributo da subclasse
    {
}

float Gerente::calcularSalarioFinal(){
    return salarioBase + bonusMensal;
}

void Gerente::exibirInformacoes(){
    Funcionario::exibirInformacoes(); // Chama método da base
    cout << "Tipo: Gerente" << endl;
    cout << "Bônus: " << bonusMensal << endl;
    cout << "Salário base: " << getSalarioBase() << endl;
    cout << "Salário final: " << calcularSalarioFinal() << endl;
}

