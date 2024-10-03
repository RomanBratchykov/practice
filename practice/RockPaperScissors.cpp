#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main() {
    srand(time(0));
    int rdt = rand()%3;
    std::string cho[]= {"Rock", "Paper", "Scissors"};
    std::string pl_ch;
    do{
    std::cout<<"Rock Paper Scissors! Enter With what you playing:\n";
    std::cin>>pl_ch;
    std::string comp_ch = cho[rdt];
  if (pl_ch == "Rock" || pl_ch == "Scissors" || pl_ch == "Paper"){ 
    std::cout<<"Your choise is: "<<pl_ch<<"\n";
    std::cout<<"Computer choise is: "<<comp_ch<<"\n";
    if(pl_ch==comp_ch){
        std::cout<<"Tie\n";
    }
    else if(pl_ch=="Rock" && comp_ch=="Scissors" || pl_ch=="Paper" && comp_ch=="Rock" ||pl_ch=="Scissors" && comp_ch=="Paper")
    {std::cout<<"You won!!!\n";}
    else{std::cout<<"You loose( \n";}}
    else{
        std::cout<<"Enter valid option\n";
    }
    }
    while(1);



    return 0;
}
