#include <iostream>

int seq(){
    
static int num{0};
return num++;
}


int main(){
std::cout<< seq() << std::endl;
std::cout<< seq() << std::endl;

    return 0;
} 



