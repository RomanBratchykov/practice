#include <iostream>

int main(){
    int a, b, c;
    std::cin>> a;
    std::cin>> b;
    std::cin>> c;
    if (a+b>c){
        std::cout<<"+";
    }
    else{
        std::cout<<"-";
    }


    return 0;
}