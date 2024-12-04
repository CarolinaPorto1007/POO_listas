#include <string>
#include <iostream>
#include "CapaBruxo.h"
using std::string, std::cout, std::endl;


void CapaBruxo:: setcasa(string casa){
    if(casa== "Grifinória"){
        m_cor="Vermelho";
        m_casa=casa;
    }
    else if(casa== "Sonserina"){
        m_cor="Verde";
        m_casa=casa;
    }
    else if(casa == "Lufa-Lufa"){
        m_cor= "Amarelo";
        m_casa=casa;
    }
    else if(casa== "Corvinal"){
        m_cor= "Azul";
        m_casa= casa;
    }

}
void CapaBruxo::settamanho(float tamanho){
    this->tamanho=tamanho;
}

void CapaBruxo::display(){
    cout<<"A casa é:"<<m_casa<<endl;
    cout<<"A cor da casa é:"<<m_cor<<endl;
    cout<<"O tamanho da capa é:"<<tamanho<<endl;
}








