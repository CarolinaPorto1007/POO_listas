#include <iostream>
#include <string>
#include <format>

#include "Carro.h"

using std::cout, std::format, std::endl;

int main() {
	Carro possante{"Renault", "Duster",2019};
	
	cout << format("O meu possante eh um {} {} {}\n", 
		possante.getMarca(),
		possante.getModelo(),
        possante.getano_carro())<<endl;
        
    cout<< possante.toString();
	
	return 0;
}
