#include "dwarf.h"

////////////////////////////////////////////////////////////////////////
// @brief Function to adjust the traits of the passed in character for
//        a dwarf
// @param Character character
//////////////////////////////////////////////////////////////////////// 
void setDwarfTraits(Character &character)
{
    character.setRace(Constants::Races[0]);
    character.setSize(dwarfSize);
    character.updateCon(dwarfConBonus);
    character.setSpeed(dwarfSpeed);

    character.addTrait(Constants::darkVison);
    character.addTrait(dwarfResilance);
    character.addTrait(stonecunning);
    character.addTrait(dwarfLanguage);
}