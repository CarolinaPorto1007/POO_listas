#include "Carro.h"
#include <string>


Carro::Carro(std::string marca, std::string modelo, int ano){
    setMarca(marca);
    setModelo(modelo);
    setano_carro(ano);
}

std::string Carro::getMarca() const{
    return m_marca;

}
void Carro::setMarca(std::string marca){
    m_marca = ( marca.empty() ? "\"Sem marca\"" : marca );
    
}
std::string Carro::getModelo() const{
    return m_modelo;
}
void Carro::setModelo(std::string modelo){
    m_modelo = ( modelo.empty() ? "\"Sem modelo\"" : modelo );
    
}

int Carro::getano_carro() const{
    return ano_carro;
}
void Carro::setano_carro(int ano){
    ano_carro=ano;
}

std::string Carro::toString() const{
    return m_marca+' '+m_modelo+' '+ std::to_string(ano_carro);

}