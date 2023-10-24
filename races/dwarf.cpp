#include "dwarf.h"

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
}