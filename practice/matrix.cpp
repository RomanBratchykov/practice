#include <iostream>
#include <array>

int main(){
   std::array<std::array<int , 2>, 2> array1 = {{{1, 0}, {0, 1}}};
   for( int value : array1){
    std::cout<<value;
   }

 
    return 0;
}