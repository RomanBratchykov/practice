#include <iostream>


int main(){
    int x = 0;
    int sum = 0;
    for (x = 0; x<=10; x+=2){
        std::cout<<x<<"\n";  
        sum+=x;

    };
    std::cout<< sum <<"\n";
    return 0;
}