#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H
#include "cliente.h"

class ContaBancaria
{
private:
    // Membros da classe
    int numero;
    Cliente titular;
    double saldo;
public:
    // Declaração do construtor com 3 parâmetros
    ContaBancaria(int numero, Cliente titular, double saldo = 0.0);
    
    // Métodos de saque e deposito
    void depositar(double valor);
    void sacar(double valor);
    
    // Sobrecarga do método transferir
    void transferir(double valor, ContaBancaria &destino);
    void transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2);
    
    // Métodos de exibição
    void exibirSaldo();
    void exibirInformacoes();
};

#endif