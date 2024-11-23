#include <iostream>
#include <string>
#include <format>

#include "Empregado.h"

using std::cout, std::format, std::endl;

int main() {
	Empregado funcionario{"Carolina", "Porto", 2500.00};
	
	cout<<format("O meu empregado eh {} {} e tem salario {}\n", 
		funcionario.getNome(),
		funcionario.getSobrenome(),
        funcionario.getSalario())<<endl;
        
    cout<<format("O salario depois do aumento de 10% é {}\n",
        funcionario.aumento(2500.00))<<endl;
	
	Empregado funcionario2{"João", "Tavares", 2000.00};
	
	cout<<format("O meu empregado eh {} {} e tem salario {}\n", 
		funcionario2.getNome(),
		funcionario2.getSobrenome(),
        funcionario2.getSalario())<<endl;
        
    cout<<format("O salario depois do aumento de 10% é {}\n",
        funcionario2.aumento(2000.00))<<endl;
	
	return 0;
}
