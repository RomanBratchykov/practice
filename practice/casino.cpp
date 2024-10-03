#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));  // Initialize random seed

    int num_to_guess, player_num;
    num_to_guess = rand() % 100 + 1;  // Generate number between 1 and 100

    std::cout << "You entered the guess number game. Enter a number (1-100) to start:\n";

    do {
        std::cin >> player_num;

        if (player_num > 0 && player_num <= 100) {  // Valid range check
            if (player_num > num_to_guess) {
                std::cout << "Lower\n";
            }
            else if (player_num < num_to_guess) {
                std::cout << "Higher\n";
            }
            else {
                std::cout << "You won!!!\n";
            }
        }
        else {
            std::cout << "You entered an invalid value. Please enter a number between 1 and 100.\n";
        }
    } while (player_num != num_to_guess);

    return 0;
}





    return 0;
}