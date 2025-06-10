#include "desenvolvedor.h"
#include "gerente.h"
#include "estagiario.h"
#include <iostream>

int main () {
    Funcionario* funcionarios[3];
    funcionarios[0] = new Desenvolvedor("Joana", 3000, 101, 3);
    funcionarios[1] = new Estagiario("Carlos", 1200, 102, 80);
    funcionarios[2] = new Gerente("Marina", 5000, 103, 2000);

    // Exibir funcionários do vetor
    for (int i = 0; i < 3; i++) {
        funcionarios[i]->exibirInformacoes();
        cout << endl;
        delete funcionarios[i]; // Libera memória
    }
}