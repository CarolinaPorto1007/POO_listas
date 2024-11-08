#include<iostream>
#include<string>
#include<cctype>

std::string lower(std::string &nome);

int main(){

std::string nome{"ANA"};

std::cout<<"String toda maiuscula: "<<nome<<std::endl;
lower(nome);
std::cout<<"String toda minuscula: "<<nome<<std::endl;

  return 0;

}

std::string lower(std::string &nome){
    for(auto &i:nome){
       i = tolower(i);
        }    
    return nome;
}