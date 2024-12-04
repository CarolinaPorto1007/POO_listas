#include<string>
#include "Bruxo2.h"


Bruxo::Bruxo(std::string nome, std::string casa, std::string feitico){
    setNome(nome);
    setCasa(casa);
    setfeitico(feitico);
    m_varinha=nullptr;
    m_capa=nullptr;
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
    void Bruxo::display() const{
        std::cout<< "O nome do bruxo é:"<<m_nome<<std::endl;
        std::cout<<"A casa do bruxo é:"<<m_casa<<std::endl;
        std::cout<<"O seu feitiço preferido é:"<<m_feitico<<std::endl;
        if(m_varinha!=nullptr){
            m_varinha->display();
        }
        else{
            std::cout<<"O bruxo está sem a sua varinha"<<std::endl;
        
        }
        if(m_capa!=nullptr){
            m_capa->display();
        }
        else{
            std::cout<<"O bruxo não está com a sua capa"<<std::endl;
        }
    }
    
    

    
