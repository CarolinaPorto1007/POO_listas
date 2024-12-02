#include <iostream>
#include <string>
#include <format>

#include "Pessoa.h"

using std::cout, std::format, std::endl;

int main() {
	Pessoa pessoa1{"Carolina", "83986560913", "Válido"};
	
	cout<<pessoa1.apresentar()<<endl;
    
    Pessoa pessoa2{"","",""};
    cout<<pessoa2.apresentar()<<endl;

	
	return 0;
}