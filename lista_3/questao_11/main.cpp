#include "Retangulo.h"
#include<iostream>
#include<string>

int main() {
    Retangulo r1(3.0, 5.0); 

    std::cout << "Retângulo Inicial:\n";
    r1.desenhar();

    std::cout << "\nAltura: " << r1.getAltura()
              << "\nLargura: " << r1.getLargura()
              << "\nPerímetro: " << r1.calcularPerimetro()
              << "\nÁrea: " << r1.calcularArea() << "\n";

    // Testando valores inválidos
    r1.setAltura(25.0); 
    r1.setLargura(-5.0); 

    std::cout << "\nApós tentar alterar para valores inválidos:\n";
    std::cout << "Altura: " << r1.getAltura()
              << "\nLargura: " << r1.getLargura() << "\n";

    r1.desenhar();

    return 0;
}
