#include "dwarf.h"
#include <iostream>

////////////////////////////////////////////////////////////////////////
// @brief Function to adjust the traits of the passed in character for
//        a dwarf
// @param Character character
//////////////////////////////////////////////////////////////////////// 
void setDwarfTraits(Character &character)
{
    character.setRace(Constants::Races[0]);
    character.setSize(Dwarf::size);
    character.updateCon(Dwarf::conBonus);
    character.setSpeed(Dwarf::speed);

    character.addTrait(Constants::darkVison);
    character.addTrait(Dwarf::dwarfResilance);
    character.addTrait(Dwarf::stonecunning);
    character.addTrait(Dwarf::language);
    character.addProficiency(Dwarf::weapons);
    character.addProficiency(determineToolProf());
}

////////////////////////////////////////////////////////////////////////
// @brief Function to determine which tool proficency the character wants
//        to take. 
// @param none
// @return std::string - chosen tool proficency
////////////////////////////////////////////////////////////////////////
std::string determineToolProf()
{
    int choosenProf = -1;
    std::cout << "As a dwarf you may choose one of the following tool proficiencies: \n";
    for (int i = 0; i < Dwarf::tools.size(); i++)
    {
        std::cout << i + 1 << ": " << Dwarf::tools[i] << "\n";
    }

    std::cin >> choosenProf;
    // Clear input buffer
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    while (choosenProf <= 0 || choosenProf > Dwarf::tools.size() || !std::cin.good())
    {
        std::cout << "\nError: Invalid input. Select one of the following.\n";
        for (int i = 0; i < Dwarf::tools.size(); i++)
        {
            std::cout << i + 1 << ": " << Dwarf::tools[i] << "\n";
        }
        std::cin >> choosenProf;

        // Clear input buffer
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');;
    }
    return Dwarf::tools[choosenProf - 1];
}
