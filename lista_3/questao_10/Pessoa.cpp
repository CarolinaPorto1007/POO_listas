
#include <string> 
#include <format>
#include "Pessoa.h"

using std::string;


    Pessoa::Pessoa(string nome, string CPF, string CPF_valido){
        setNome(nome);
        setCPF(CPF);
        setCPFvalido(CPF_valido);
    }

    string Pessoa::getNome() const{
        return m_nome;
    }
    void Pessoa::setNome(string nome){
        m_nome= (nome.empty() ? "\"Sem nome\"" : nome);
    }
    string Pessoa::getCPF() const{
        return m_cpf;
    }
    void Pessoa::setCPF(string CPF){
        m_cpf=(CPF.empty() ? "\"Sem CPF\"" : CPF);
    }
    string Pessoa::getCPFvalido() const{
        return m_cpf_valido;
    }
    void Pessoa::setCPFvalido(string CPF_valido){
        m_cpf_valido=(CPF_valido.empty() ? "\"Inválido\"" : CPF_valido);
    }
    string Pessoa:: apresentar() const{
        return (format("A Pessoa {} do CPF {} esta em situação {} \n", getNome(),getCPF(), getCPFvalido()));
    }


