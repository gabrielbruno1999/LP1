#include "desenvolvedor.h"
#include <iostream>

// Construtor
Desenvolvedor::Desenvolvedor(string nome, float salarioBase, int id, int quantidadeDeProjetos):
    Funcionario(nome, salarioBase, id), // Chama construtor da base
    quantidadeDeProjetos(quantidadeDeProjetos) // Atributo da subclasse
    {            
}
    
float Desenvolvedor::calcularSalarioFinal(){
    return getSalarioBase() + (500*quantidadeDeProjetos);
}

void Desenvolvedor::exibirInformacoes (){
    Funcionario::exibirInformacoes(); // Chama método da base
    cout << "Tipo: Desenvolvedor" << endl;
    cout << "Projetos: " << quantidadeDeProjetos << endl;
    cout << "Salário base: " << getSalarioBase() << endl;
    cout << "Salário final: " << calcularSalarioFinal() << endl;
}