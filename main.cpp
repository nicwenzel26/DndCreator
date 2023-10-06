#include <iostream>
#include "character.hpp"

int main()
{
    std::cout << "Welcome to the Dungeons and Dragons Character Builder\n\n";

    std::string response;
    std::cout << "Ready to make a new character? (y/n) ";
    std::getline(std::cin, response);

    // Validating user input
    while (response != "y" && response != "n") {
        std::cout << "\nInvalid Input\n";
        std::cout << "Ready to make a new character (y/n) ";
        std::cin >> response;
    }

    // Handling when a user says 'no' when asked if they want to make a character
    if (response == "n") {
        std::cout << "OK! See you later!\n";
        exit(0);
    }

    // Player does want to make a character
    std::string tempCharName;
    std::cout << "Great! First we need to figure out what your character is called.\n";
    std::cout << "What is your character's name? ";
    std::getline(std::cin, tempCharName);
    Character playerCharacter = Character(tempCharName);

    std::cout << "\n\nYour character name is: " << playerCharacter.getCharName() << ".\n";
}