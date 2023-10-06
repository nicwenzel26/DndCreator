#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>

class Character {
    public:
        Character(std::string name);

        std::string getCharName();

        ///////////////////////////////////////////////////////////////////////
        // @brief updateStrength() - Function to update the strength attribute
        // @param int updateVal
        // @return void
        ///////////////////////////////////////////////////////////////////////
        void updateStrength(int updateVal);

    protected:
        std::string name;
        // Race
        // Class
        int hp;
        int ac;

        int strength;
        int dexterity;
        int contitution;
        int intelligence;
        int wisdom;
        int charisma;

        int strBonus;
        int dexBonus;
        int conBonus;
        int intBonus;
        int wisBonus;
        int charBonus;
};

#endif // CHARACTER_HPP