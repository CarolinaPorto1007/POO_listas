#include <iostream>
#include<string>

int main() {
    std::string nome();
    int media{0};
    int n1{0},n2{0},n3{0};

    std::cout<<"Nome do aluno: ";
    std::cin>>nome;
    std::cout<<"Digite as notas: ";
    std::cin>>n1>>n2>>n3;
    media=((n1*3)+(n2*4)+(n3*5))/12;

    std::cout<<"O aluno(a) "<<nome<<"obteve média: "<<media<<std::endl;

    return 0;
}