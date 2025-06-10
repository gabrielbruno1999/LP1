#include "funcionario.h"
#include <iostream>

// Construtor
Funcionario::Funcionario(string nome, float salarioBase, int id) {
    this->nome = nome;
    this->salarioBase = salarioBase;
    this->id = id;
}

// Getters
string Funcionario::getNome(){
    return nome;
}
float Funcionario::getSalarioBase(){
    return salarioBase;
}
int Funcionario::getId(){
    return id;
}

// Setters
void Funcionario::setNome(string nome){
    this->nome = nome;
}
void Funcionario::setSalarioBase(float salarioBase){
    this->salarioBase = salarioBase;
}
void Funcionario::setId(int id){
    this->id = id;
}

// Método Virtual
void Funcionario::exibirInformacoes(){
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << getNome() << endl;
}