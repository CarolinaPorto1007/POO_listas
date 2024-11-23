#include <iostream>
#include <string>
#include <format>

#include "Bruxo.h"

using std::cout, std::format, std::endl;

int main() {
	Bruxo bruxo1{"Harry", "Grifinória", "Alohomora"};
	
	cout<<format("O bruxo de Hogwarts é {} sua casa é{} e o seu feitiÇo escolhido é {}\n", 
		bruxo1.getNome(),
		bruxo1.getCasa(),
        bruxo1.getfeitico())<<endl;
        
    cout<<format("Os atributos do bruxo são{}\n",
        bruxo1.display)<<endl;
	
	Bruxo bruxo2{"Snape", "Sonserina","Crucio"};
	
	cout<<format("O bruxo de Hogwarts é {} sua casa é{} e o seu feitiÇo escolhido é {}\n", 
		bruxo2.getNome(),
		bruxo2.getCasa(),
        bruxo2.getfeitico())<<endl;
        
    cout<<format("Os atributos do bruxo são{}\n",
        bruxo2.display)<<endl;

	
	return 0;
}