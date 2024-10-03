#include <iostream>

int main(){
    double cur_e_h, cur_d_e, cur_d_h;
    cur_d_h = 41,5;
    cur_d_e = 1.1;
    cur_e_h = 45,6;

    double val;
    char cur, curr;
    
    std::cout<< "Enter the currency you have(d for dollars, h for hrivnies, e for euro)\n";
    std::cin>>cur;
    switch (cur){
    case 'd':
        std::cout<< "In what currency you want change your dollars?(H for hrivnies, E for euro)\n";
        std::cin>>curr;
            switch (curr){
        case 'H':
            std::cout<< "How many dollars you want to change into hrivnias?\n";
            std::cin>>val;
            std::cout<<"the value of your dollars is "<<val<<"\n";
            std::cout<<"the value of your dollars in hrivnias is "<<val*cur_d_h<<"\n";
            break;
        case 'E':
            std::cout<< "How many dollars you want to change into euros?\n";
            std::cin>>val;
            std::cout<<"the value of your dollars is "<<val<<"\n";
            std::cout<<"the value of your dollars in euros is "<<val/cur_d_e<<"\n";
            break;
        default:
            std::cout<<"Choose another option\n";
            break;}


    case 'h':
        std::cout<< "In what currency you want change your hrivnies?(D for dollars,  E for euro)\n";
        std::cin>>curr;
            switch (curr){
        case 'D':
            std::cout<< "How many hrivnies you want to change into dollars?\n";
            std::cin>>val;
            std::cout<<"the value of your  is "<<val<<"\n";
            std::cout<<"the value of your dollars in hrivnias is "<<val/cur_d_h<<"\n";
            break;
        case 'E':
            std::cout<< "How many hrivnies you want to change into euros?\n";
            std::cin>>val;
            std::cout<<"the value of your hrivnies is "<<val<<"\n";
            std::cout<<"the value of your hrivnies in euros is "<<val/cur_e_h<<"\n";
            break;
        default:
            std::cout<<"Choose another option\n";
            break;
        break;


    case 'e':
        std::cout<< "In what currency you want change your euros?(D for dollars, H for hrivnies,)\n";
        std::cin>>curr;
            switch (curr){
        case 'D':
            std::cout<< "How many euros you want to change into dollars?\n";
            std::cin>>val;
            std::cout<<"the value of your euros is "<<val<<"\n";
            std::cout<<"the value of your euros in dollars is "<<val*cur_d_e<<"\n";
            break;
        case 'H':
            std::cout<< "How many euros you want to change into hrivnies?\n";
            std::cin>>val;
            std::cout<<"the value of your euros is "<<val<<"\n";
            std::cout<<"the value of your euros in hrivnies is "<<val*cur_e_h<<"\n";
            break;
        default:
            std::cout<<"Choose another option\n";
            break;
        break;

         break;
            }




    }
            }
            }
    }
    






    return 0;
            }