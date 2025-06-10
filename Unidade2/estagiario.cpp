#include "estagiario.h"
#include <iostream>

// Construtor
Estagiario::Estagiario(string nome, float salarioBase, int id, int horasTrabalhadas):
    Funcionario(nome, salarioBase, id), // Chama construtor da base
    horasTrabalhadas(horasTrabalhadas) // Atributo da subclasse
    {
}

float Estagiario::calcularSalarioFinal(){
    return salarioBase*(horasTrabalhadas/160.0);
}

void Estagiario::exibirInformacoes(){
    Funcionario::exibirInformacoes(); // Chama método da base
    cout << "Tipo: Estagiário" << endl;
    cout << "Horas trabalhadas: " << horasTrabalhadas << endl;
    cout << "Salário base: " << getSalarioBase() << endl;
    cout << "Salário final: " << calcularSalarioFinal() << endl;
}
