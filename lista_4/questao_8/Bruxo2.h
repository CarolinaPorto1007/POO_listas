#pragma once
#include<string>
#include "Varinha.h"
#include "CapaBruxo.h"

class Bruxo{
    public:

    Bruxo(std::string nome, std::string casa, std::string feitico);

    std::string getNome() const;
    std::string getCasa() const;
    std::string getfeitico() const;
    void setNome(std::string nome);
    void setCasa(std::string casa);
    void setfeitico(std::string feitico);
    void display() const;
    void pegarvarinha(Varinha *var){m_varinha=var;}
    void soltarvarinha(){m_varinha=nullptr;}
    void vestircapa(CapaBruxo *capa){m_capa=capa;}
    void tirarcapa(){m_capa=nullptr;}


   
    private:
 
    std::string m_nome;
    std::string m_casa;
    std::string m_feitico;

    Varinha *m_varinha;
    CapaBruxo *m_capa;

};

