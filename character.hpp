#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <vector>
#include "util.h"

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


        ///////////////////////////////////////////////////////////////////////
        // @breif getStr() - Function to return the characters strength score
        // @param none
        // @return int
        ///////////////////////////////////////////////////////////////////////
        int getStr();

        ///////////////////////////////////////////////////////////////////////
        // @breif getDex() - Function to return the characters dextarity score
        // @param none
        // @return int
        ///////////////////////////////////////////////////////////////////////
        int getDex();

        ///////////////////////////////////////////////////////////////////////
        // @breif getCon() - Function to return the characters constitution score
        // @param none
        // @return int
        ///////////////////////////////////////////////////////////////////////
        int getCon();

        ///////////////////////////////////////////////////////////////////////
        // @breif getInt() - Function to return the characters intellegence score
        // @param none
        // @return int
        ///////////////////////////////////////////////////////////////////////
        int getInt();

        ///////////////////////////////////////////////////////////////////////
        // @breif getWis() - Function to return the characters wisdom score
        // @param none
        // @return int
        ///////////////////////////////////////////////////////////////////////
        int getWis();

        ///////////////////////////////////////////////////////////////////////
        // @breif getChar() - Function to return the characters charisma score
        // @param none
        // @return int
        ///////////////////////////////////////////////////////////////////////
        int getChar();

        ///////////////////////////////////////////////////////////////////////
        // @breif setSize() - Function to update the characters size
        // @param std::string newSize - new size for character
        // @return void
        ///////////////////////////////////////////////////////////////////////
        void setSize(std::string newSize);

        ///////////////////////////////////////////////////////////////////////
        // @brief getSize() - Function to get the characters size
        // @param none
        // @return Sizes
        ///////////////////////////////////////////////////////////////////////
        std::string getSize();

        ///////////////////////////////////////////////////////////////////////
        // @breif setSpeed() - Function to update the characters speed
        // @param int newSpeed - new speed for character
        // @return void
        ///////////////////////////////////////////////////////////////////////
        void setSpeed(int newSpeed);

        ///////////////////////////////////////////////////////////////////////
        // @brief getSpeed() - Function to get the characters speed
        // @param none
        // @return int
        ///////////////////////////////////////////////////////////////////////
        int getSpeed();

        ///////////////////////////////////////////////////////////////////////
        // @brief addTrait() - Function to add a trait to list of traits
        // @param std::string newTrait
        // @return none
        ///////////////////////////////////////////////////////////////////////
        void addTrait(std::string newTrait);

    protected:
        std::string name;
        std::string race;
        // Class
        int hp;
        int ac;

        std::string size; 
        int   speed;

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

        std::vector<std::string> traits;
        std::vector<std::string> proficencies;
};

#endif // CHARACTER_HPP