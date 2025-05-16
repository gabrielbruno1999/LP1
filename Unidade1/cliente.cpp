#include "cliente.h"


// Implementação do construtor
Cliente::Cliente(string nome, string cpf):
    // Lista de inicialização dos membros da classe
    nome(nome), // (antes do parêntese) é o membro da classe
    cpf(cpf)  // (dentro do parêntese) é o parâmetro do construtor
{
// Corpo do construtor (pode estar vazio, pois a inicialização foi feita na lista)
}

string Cliente::getnome() const{
    return nome;
}

string Cliente::getcpf() const {
    return cpf;
}