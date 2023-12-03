#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "Board.h"
using namespace std;



class Player{

    public:
        Player();
        Player(Character character);
        void setCharacter(Character Character);
        Character getCharacter();
        bool addCandy(Candy candy);
        bool removeCandy(string candy_name);
        void setStamina(int stamina); //set stamina to passed in amount
        void changeStamina(int amount); //change existing stamina by passed in amt
        void setGold(int gold);
        void changeGold(int amount);


    private:
        string name;
        Character _playerCharacter;
        
};
#endif
