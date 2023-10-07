#ifndef DWARF_H
#define DWARF_H

#include "../character.hpp"

int dwarfConBonus = 2;
Sizes dwarfSize   = Sizes::Medium;

////////////////////////////////////////////////////////////////////////
// @brief Function to adjust the traits of the passed in character for
//        a dwarf
// @param Character character
//////////////////////////////////////////////////////////////////////// 
void setDwarfTraits(Character &character);


#endif // DWARF_H