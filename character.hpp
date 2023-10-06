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

        ///////////////////////////////////////////////////////////////////////
        // @brief updateDex() - Function to update the dextarity attribute
        // @param int updateVal
        // @return void
        ///////////////////////////////////////////////////////////////////////
        void updateDex(int updateVal);

        ///////////////////////////////////////////////////////////////////////
        // @brief updateCon() - Function to update the constitution attribute
        // @param int updateVal
        // @return void
        ///////////////////////////////////////////////////////////////////////
        void updateCon(int updateVal);

        ///////////////////////////////////////////////////////////////////////
        // @brief updateInt() - Function to update the intellegence attribute
        // @param int updateVal
        // @return void
        ///////////////////////////////////////////////////////////////////////
        void updateInt(int updateVal);

        ///////////////////////////////////////////////////////////////////////
        // @brief updateWis() - Function to update the wisdom attribute
        // @param int updateVal
        // @return void
        ///////////////////////////////////////////////////////////////////////
        void updateWis(int updateVal);

        ///////////////////////////////////////////////////////////////////////
        // @brief updateChar() - Function to update the charisma attribute
        // @param int updateVal
        // @return void
        ///////////////////////////////////////////////////////////////////////
        void updateChar(int updateVal);

    protected:
        std::string name;
        // Race
        // Class
        int hp;
        int ac;

        int strength;
        int dexterity;
        int constitution;
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