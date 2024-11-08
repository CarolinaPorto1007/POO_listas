#include<iostream>
#include<string>
#include<cctype>

bool upper(std::string &nome);

int main(){

std::string nome{"ana"};


if(upper(nome)){
    std::cout<<" A string contem uma letra maiuscula."<<std::endl;
}
else{
    std::cout<< "A string nao contem letra maiuscula."<<std::endl;
}

  return 0;

}

bool upper(std::string &nome){
    for(auto &i:nome){
        if(isupper(i)){
            return true;
        }    
    }
    return false;
}