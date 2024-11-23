#include<string>
#include "Bruxo.h"


Bruxo::Bruxo(std::string nome, std::string casa, std::string feitico){
    setNome(nome);
    setCasa(casa);
    setfeitico(feitico);
}

    std::string Bruxo::getNome() const{
        return m_nome;
    }
    void Bruxo::setNome(std::string nome){
        m_nome= (nome.empty() ? "\"Sem bruxo\"" : nome);

    }
    std::string Bruxo::getCasa() const{
        return m_casa;
    }
    void Bruxo::setCasa(std::string casa){
        m_casa=(casa == "Grifinória"|| casa == "Sonserina"||casa =="Corvinal"||casa == "Lufa-Lufa" ? casa: " ");

    }
    std::string Bruxo::getfeitico() const{
        return m_feitico;
    }
    void Bruxo::setfeitico(std::string feitico){
         m_feitico= (feitico.empty() ? "\"Sem feitico\"" : feitico);

    }
    std::string Bruxo::display() const{
        return m_nome+ " " + m_casa+" "+ m_feitico;
    }
    

    
