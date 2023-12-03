#ifndef GAME_H
#define GAME_H
#include <iostream>
#include "Board.h"
using namespace std;



class Game{

    public:
        Game();
        bool readCandy(string candyList);
        bool readCharacter(string charList);
        bool checkSameTile();
        void selectCharacter();



    private:
        vector<Candy> candyList;
        vector<Character> characterList;
        char deck[];

        
};
#endif
