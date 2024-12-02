#pragma once
#include <iostream>

class Retangulo {

public:
    // Construtor
    Retangulo(double altura = 1.0, double largura = 1.0);

    
    double getAltura() const;
    double getLargura() const;


    void setAltura(double Altura);
    void setLargura(double largura);

    
    double calcularPerimetro() const;
    double calcularArea() const;
    void desenhar() const;

    private:
    double altura;
    double largura;
};
