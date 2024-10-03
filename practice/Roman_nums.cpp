#include <iostream>
#include <string>
#include <vector>

int main(){
    std::string rom_num;
    int i, sum = 0;
    std::cout<<"Enter your Roman number\n";
    std::cin>>rom_num;
    std::vector<int> num;
   for(i = 0; i < rom_num.size(); i++){
    if (rom_num[i] == 'I' && rom_num[i+1] == 'V'){
        num.push_back(4);
        i++;
        continue;
    }
    else if (rom_num[i] == 'I' && rom_num[i+1] == 'X'){
        num.push_back(9);
        i++;
        continue;
    }
    else if (rom_num[i] == 'X' &&  rom_num[i+1] == 'L'){
        num.push_back(40);
        i++;
        continue;
    }
    else if (rom_num[i] == 'X' && rom_num[i+1] == 'C'){
        num.push_back(90);
        i++;
        continue;
    }
    else if (rom_num[i] == 'C' && rom_num[i+1] == 'D'){
        num.push_back(400);
        i++;
        continue;
    }
    else if (rom_num[i] == 'C'  && rom_num[i+1] == 'M'){
        num.push_back(900);
        i++;
        continue;
    }

    switch(rom_num[i]){
            case 'M':
            case 'm':
            num.push_back(1000);
            break;
            case 'D':
            case 'd':
            num.push_back(500);
            break;
            case 'C':
            case 'c':
            num.push_back(100);
            break;
            case 'L':
            case 'l':
            num.push_back(50);
            break;
            case 'X':
            case 'x':
            num.push_back(10);
            break;
            case 'V':
            case 'v':
            num.push_back(5);
            break;
            case 'I':
            case 'i':
            num.push_back(1);
            break;
            
            default:
            std::cout<<"Wrong roman number\n";
            return 1;
    }
   }
   for(int value : num){
    sum += value;
   }
   std::cout<<"Number in integer is:"<<sum<<"\n";


    return 0;
}