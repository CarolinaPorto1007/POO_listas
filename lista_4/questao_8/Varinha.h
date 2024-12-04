#pragma once 
#include<iostream>
#include <string>

using std::string;

class Varinha{

    public:

    //construtor da classe

    Varinha(string madeira,string nucleo, float comprimento);

    // métodos set
    void setmadeira(string madeira);
    void setnucleo(string nucleo);
    void setcomprimento(float comprimento);

    // métodos get

    string getmadeira() const{return m_madeira;}
    string getnucleo() const{ return m_nucleo;}
    float getcomprimento() const{return m_comprimento;}


    //método display 

    void display();

    private:

    string m_madeira;
    string m_nucleo;
    float m_comprimento;




};



