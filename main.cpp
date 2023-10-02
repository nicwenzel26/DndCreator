#include <iostream>
#include "character.hpp"

int main()
{
    std::cout << "Welcome to the Dungeons and Dragons Character Builder\n\n";

    char response;
    std::cout << "Ready to make a new character? (y/n) ";
    std::cin >> response;

    // Validating user input
    while (response != 'y' && response != 'n') {
        std::cout << "\nInvalid Input\n";
        std::cout << "Ready to make a new character (y/n) ";
        std::cin >> response;
    }
}