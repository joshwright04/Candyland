#include "CandyStore.h"
#include <iostream>
using namespace std;

CandyStore::CandyStore(){
    Candy candyblank;
    candyblank.name = "";
    candyblank.description = "";
    candyblank.price = 0.0;
    candyblank.candy_type = "";
    for (int i = 0; i < _MAX_CANDIES; i++){
        _candies[i] = candyblank;
    }
    _candy_count = 0;
}

CandyStore::CandyStore(string store_name){


}

bool CandyStore::addCandy(Candy candy){
    if(_candy_count == _MAX_CANDIES){
        return false;
    }
    for (int i = 0; i < _MAX_CANDIES; i++){
        if(_candies[i].name == ""){
            _candies[i] = candy;
            _candy_count++;
            return true;
        }
    }
    return false;
}

bool CandyStore::removeCandy(string candy_name) {
    for (int i = 0; i < _candy_count; ++i) {
        if (_candies[i].name == candy_name) {
            // Shift elements to fill the gap
            for (int j = i; j < _candy_count - 1; ++j) {
                _candies[j] = _candies[j + 1];
            }
            _candy_count--;
            _candies[_candy_count] = {"Empty", "", 0.0, ""};
            return true;  // Candy removed successfully
        }
    }
    // Candy not found or inventory is empty
    return false;
}

void CandyStore::displayCandies() const{

    for (int i = 0; i < _candy_count; i++){
        cout << _candies[i].name << endl;
    }
}