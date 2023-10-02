#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>

class Character {
    public:
        Character(std::string name);

    protected:
        std::string name;
        // Race
        // Class
        int hp;
        int ac;

        int str;
        int dex;
        int con;
        int intel;
        int wis;
        int chari;

        int strBonus;
        int dexBonus;
        int conBonus;
        int intBonus;
        int wisBonus;
        int charBonus;

};

#endif // CHARACTER_HPP