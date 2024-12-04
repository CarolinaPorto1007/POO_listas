#pragma once
#include <string>

using std::string, std::cout, std::endl;


class CapaBruxo{

    public:

    //construtor da classe

    CapaBruxo(string casa="", float Tamanho=0.0):tamanho{Tamanho}{setcasa(casa);}

    //set

    void setcasa(string casa);
    void settamanho(float tamanho);

    //get

    string getcasa() const{return m_casa;}
    string getcor() const{return m_cor;}
    float gettamanho() const{return tamanho;}

    //display

    void display();



    private:
    string m_cor;
    string m_casa;
    float tamanho;


};

