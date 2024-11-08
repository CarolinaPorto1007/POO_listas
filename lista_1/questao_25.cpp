#include <iostream>

int main() {
    int litros{0};
    float km{0};
    int cont{0};
    float consumo{0};

    std::cout<<"Digite a quantidade de quilometros rodados: ";
    std::cin>>km;
    
    while(km!= -1){
    std::cout<<"Digite a quantidade de litros consumidos: ";
    std::cin>>litros;

    consumo=(km/litros);
    cont+=litros;

    std::cout<<"A quantidade de quilometros/litro foi: "<<consumo<<std::endl;
    std::cout<<"A quantidade de litros consumidos foi: "<<cont<<std::endl;

    std::cout<<"Digite a quantidade de quilometros rodados: ";
    std::cin>>km;
    }

    


    return 0;
}