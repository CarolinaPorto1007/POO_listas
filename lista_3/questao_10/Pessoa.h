#pragma once
#include <string> 
using std::string;

class Pessoa{
    
    public:
    //construtor da classe
    Pessoa(string nome, string CPF, string CPF_valido);

    string getNome() const;
    string getCPF() const;
    string getCPFvalido() const;

    void setNome(string nome);
    void setCPF(string CPF);
    void setCPFvalido(string CPF_valido);
    
    string apresentar() const;

    private:

    string m_nome;
    string m_cpf;
    string m_cpf_valido;

};