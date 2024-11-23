#pragma once
#include <string>

class Empregado{

    public:

    Empregado(std::string nome, std::string sobrenome, float salario);

    std::string getNome() const;
    void setNome(std::string nome);
    std::string getSobrenome() const;
    void setSobrenome(std::string sobrenome);
    float getSalario() const;
    void setSalario(float salario);
    float aumento(float salario);

    private:

    std::string m_nome;
    std::string m_sobrenome;
    float m_salario;



};


