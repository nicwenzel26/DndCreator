#include "dwarf.h"
#include "../util.h"

////////////////////////////////////////////////////////////////////////
// @brief Function to adjust the traits of the passed in character for
//        a dwarf
// @param Character character
//////////////////////////////////////////////////////////////////////// 
void setDwarfTraits(Character &character)
{
    character.setSize(dwarfSize);
    character.updateCon(dwarfConBonus);
    character.setSpeed(dwarfSpeed);
}