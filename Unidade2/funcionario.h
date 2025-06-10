#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
using namespace std;

class Funcionario {
protected:
    string nome;
    float salarioBase;
private:
    int id;
public:
    // Construtor
    Funcionario(string nome, float salarioBase, int id);
    // Destrutor
    virtual ~Funcionario() = default;
    
    // Getters
    string getNome();
    float getSalarioBase();
    int getId();
    // Setters
    void setNome(string nome);
    void setSalarioBase(float salarioBase);
    void setId(int id);

    // Método Virtual
    virtual void exibirInformacoes();
    // Método Virtual Puro
    virtual float calcularSalarioFinal() = 0;
};

#endif