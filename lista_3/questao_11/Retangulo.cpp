#include "Retangulo.h"
#include <iostream>

Retangulo::Retangulo(double altura, double largura) {
    setAltura(altura);
    setLargura(largura);
}

double Retangulo::getAltura() const {
    return altura;
}

double Retangulo::getLargura() const {
    return largura;
}

void Retangulo::setAltura(double Altura) {
    altura = (Altura > 0.0 && Altura < 20.0) ? Altura : 1.0;
}

void Retangulo::setLargura(double Largura) {
    largura = (Largura > 0.0 && Largura < 20.0) ? Largura : 1.0;
}

double Retangulo::calcularPerimetro() const {
    return 2 * (altura + largura);
}

double Retangulo::calcularArea() const {
    return altura * largura;
}

void Retangulo::desenhar() const {
    std::cout << "+";
    for (int i = 0; i < static_cast<int>(largura); ++i) {
        std::cout << "-";
    }
    std::cout << "+\n";

    for (int i = 0; i < static_cast<int>(altura); ++i) {
        std::cout << "|";
        for (int j = 0; j < static_cast<int>(largura); ++j) {
            std::cout << " ";
        }
        std::cout << "|\n";
    }

    std::cout << "+";
    for (int i = 0; i < static_cast<int>(largura); ++i) {
        std::cout << "-";
    }
    std::cout << "+\n";
}