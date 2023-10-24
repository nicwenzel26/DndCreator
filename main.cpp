#include <iostream>
#include "character.hpp"
#include "races/dwarf.h"

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

    std::cout << "\nGreat! Now we need to pick a race for your character.\n";
    std::cout << "Your options are:\n";

    for (int i = 0; i < Constants::Races.size(); i++)
    {
        std::cout << i + 1 << ": " << Constants::Races[i] << "\n";
    }
    std::string raceChoice = "";
    std::cout << "Which would you like to be? ";
    std::getline(std::cin, raceChoice);
    std::cout << "\n\n";

    // Dwarf
    if (raceChoice == "1")
    {
        std::cout << "Good choice! A hearty mountain dwelling dwarf is never a bad choice!\n\n";
        setDwarfTraits(playerCharacter);
    }

    // Invalid race choice error conditon
    else
    {
        std::cerr << "ERROR: INVALID CHOICE\n";
        return -1; 
    }

}