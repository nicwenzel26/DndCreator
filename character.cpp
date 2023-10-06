#include "character.hpp"

Character::Character(std::string inputName) {
    name = inputName; 
}

std::string Character::getCharName() {
    return name;
}