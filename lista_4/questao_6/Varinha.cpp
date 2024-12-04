#include <iostream>
#include <string>
#include "Varinha.h"

using std::cout, std::string;

Varinha::Varinha(string madeira,string nucleo, float comprimento){
    setmadeira(madeira);
    setnucleo(nucleo);
    setcomprimento(comprimento);
}

void Varinha::setmadeira(string madeira){
    m_madeira=madeira;
}
void Varinha::setnucleo(string nucleo){
    m_nucleo=nucleo;
}
 void Varinha::setcomprimento(float comprimento){
    m_comprimento=comprimento;

}

void Varinha::display(){
    cout<<"A madeira da varinha é do tipo:"<<m_madeira<<endl;
    cout<<"O seu núcleo é do tipo:"<<m_nucleo<<endl;
    cout<<"O seu comprimento é:"<<m_comprimento<<endl;

}

