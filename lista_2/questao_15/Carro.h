#pragma once 
#include<string>


class Carro{

    public:

    Carro(std::string marca, std::string modelo,int ano);

    std::string getMarca() const;
    void setMarca(std::string marca);
    std::string getModelo() const;
    void setModelo(std::string modelo);
    int getano_carro() const;
    void setano_carro(int ano);
    std::string toString() const;





    private: 

    std::string m_marca;
    std::string m_modelo;
    int ano_carro;

};

