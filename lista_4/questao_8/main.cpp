#include <iostream>
#include <string>
#include "Bruxo2.h"
#include "CapaBruxo.h"
#include "Varinha.h"


int main(){

Bruxo bruxo1{"Harry", "Grifinória", "Alohomora"};

Varinha varinha1{"Cereijeira","Pele de Unicórnio",15.5};

CapaBruxo capa1{"Grifinória",12.7};

bruxo1.display();

bruxo1.pegarvarinha(&varinha1);
bruxo1.vestircapa(&capa1);

bruxo1.display();

bruxo1.soltarvarinha();
bruxo1.tirarcapa();

bruxo1.display();



    return 0;

}