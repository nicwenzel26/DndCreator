#ifndef DWARF_H
#define DWARF_H

#include "../character.hpp"

namespace Dwarf
{
    const int conBonus     = 2;
    const std::string size = "Medium";
    const int speed        = 25;

    const std::string dwarfResilance = "You have advantage on saving throws against poision and resistance against posion damage.";
    const std::string stonecunning = "Whenever you make an Intellegence (History) check related to the origin of stonework, you are considered proficent in the history skill and may double your proficency bonus. ";
    const std::string language = "You are able to read and write in Common and Dwarvish.";
}

////////////////////////////////////////////////////////////////////////
// @brief Function to adjust the traits of the passed in character for
//        a dwarf
// @param Character character
//////////////////////////////////////////////////////////////////////// 
void setDwarfTraits(Character &character);


#endif // DWARF_H