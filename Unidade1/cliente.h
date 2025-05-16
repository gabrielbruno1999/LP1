#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
using namespace std;

class Cliente
{
private:
    // Membros da classe
    string nome;
    string cpf;
public:
    // Declaração do construtor com 2 parâmetros
    Cliente(string nome, string cpf);
    
    // Declaração de métodos gettter
    string getnome() const;
    string getcpf() const;
};

#endif