#pragma once
#include<string>

class Bruxo{
    public:

    Bruxo(std::string nome, std::string casa, std::string feitico);

    std::string getNome() const;
    void setNome(std::string nome);
    std::string getCasa() const;
    void setCasa(std::string casa);
    std::string getfeitico() const;
    void setfeitico(std::string feitico);
    std::string display() const;
   

    private:

    std::string m_nome;
    std::string m_casa;
    std::string m_feitico;

};

