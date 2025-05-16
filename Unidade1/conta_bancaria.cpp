#include "conta_bancaria.h"
#include <iostream>

// Implementação do construtor
ContaBancaria::ContaBancaria(int numero, Cliente titular, double saldo):
    // Lista de inicialização dos membros da classe
    numero(numero), titular(titular), saldo(saldo)
{
// Corpo do construtor (vazio)
}

// Implementação de método (depósito)
void ContaBancaria::depositar(double valor){
    saldo += valor;
}

// Implementação de método (saque)
void ContaBancaria::sacar(double valor){
    if (saldo >= valor) {
        saldo -= valor;
    } else {
        cout << "Saldo insuficiente para saque" << endl;
    }
}

// Implementação de método (transferência)
void ContaBancaria::transferir(double valor, ContaBancaria &destino) {
    if (saldo >= valor){
        saldo -= valor;
        destino.depositar(valor);
        cout << "Transferido: R$ " << valor << " da conta " << numero << " para a conta " << destino.numero << endl;
    } else {
        cout << "Saldo insuficiente para transferência" << endl;
    }
}

// Implementação de método (transferência)
void ContaBancaria::transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2) {
    if (saldo >= valor){
        saldo -= valor;
        destino1.depositar(valor/2);
        destino2.depositar(valor/2);
        cout << "Transferido: R$ " << valor/2 << " para cada conta (" << destino1.numero << " e " << destino2.numero << ") da conta " << numero << endl;
    } else {
        cout << "Saldo insuficiente para transferência" << endl;
    }
}

// Implementação de método (Saldo atual)
void ContaBancaria::exibirSaldo(){
    cout << "Saldo atual da conta " << numero << ": R$ " << saldo << endl;
}

// Implementação de método (dados da conta)
void ContaBancaria::exibirInformacoes(){
    cout << "Titular: " << titular.getnome() << ", CPF: " << titular.getcpf() << endl;
    cout << "Número da Conta: " << numero << ", Saldo: R$ " << saldo << endl;
}