#include "character.hpp"

Character::Character(std::string inputName) 
{
    name = inputName; 
}

std::string Character::getCharName() 
{
    return name;
}

///////////////////////////////////////////////////////////////////////
// @brief updateStrength() - Function to update the strength attribute
// @param int updateVal
// @return void
///////////////////////////////////////////////////////////////////////
void Character::updateStrength(int updateVal)
{
    strength += updateVal;
}