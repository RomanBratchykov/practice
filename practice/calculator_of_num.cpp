#include <iostream>
int main(){
  double x, y;
 char op;
 while (true){
 std::cout<<"Enter your first number:"<<"\n";
 std::cin>>x;
 std::cout<<"What you want to do(+, -, *, /)"<<"\n";
 std::cin>>op;
 std::cout<<"Enter second number:"<<"\n";
    std::cin>>y;
  switch (op){
  case '+':
  std::cout<<"Your result is:"<<x+y<<"\n";
  break;
  case '-':
  std::cout<<"Your result is:"<<x-y<<"\n";
  break;
  case '*':
  std::cout<<"Your result is:"<<x*y<<"\n";
  break;
  case '/':
  std:: cout<<"Your result is:"<<x/y<<"\n";break;
   }
   
 }
 
  
 return 0;
}