#include "Empregado.h"
#include <string>
#include <iostream>


Empregado::Empregado(std::string nome, std::string sobrenome, float salario){
    setNome(nome);
    setSobrenome(sobrenome);
    setSalario(salario);  
}

std::string Empregado::getNome() const{
    return m_nome;
}

 void Empregado::setNome(std::string nome){
    m_nome = ( nome.empty() ? "\"Sem nome\"" : nome );
 }

std::string Empregado::getSobrenome() const{
    return m_sobrenome;
}

void Empregado::setSobrenome(std::string sobrenome){
    m_sobrenome=(sobrenome.empty() ?"\"Sem sobrenome\"" : sobrenome );
}

float Empregado::getSalario() const{
    return m_salario;
}
void Empregado::setSalario(float salario){
    m_salario=(salario<=0 ? 0.00 : salario);
}
float Empregado::aumento(float salario){
    float soma=(salario*(0.1))+salario;
    return soma;
}



