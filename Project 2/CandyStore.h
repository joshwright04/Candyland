#ifndef CANDYSTORE_H
#define CANDYSTORE_H
#include <iostream>
#include "Board.h"
using namespace std;



class CandyStore{

    private:
        string _store_name;
        const static int _MAX_CANDIES = 5;
        Candy _candies[_MAX_CANDIES];
        int _candy_count;
        Candy _store_Candies[2];
        int store;
    public:
        CandyStore();
        CandyStore(string store_name);
        bool addCandy(Candy candy);
        bool removeCandy(string candy_name);
        void displayCandies() const;
};
#endif
