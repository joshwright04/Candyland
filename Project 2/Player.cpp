#include "Player.h"
#include <iostream>
using namespace std;

Player::Player(){
    //defualt constructor
}
Player::Player(Character character){
    //pass in character to make player
}

void Player::setCharacter(Character character){
    _playerCharacter = character;
}

Character Player::getCharacter(){
    return _playerCharacter;
}

bool Player::addCandy(Candy candy){
    //append candy to candy inventory vec
}
bool Player::removeCandy(string candy_name){
    //find name and remove from candy inventory vec replace with blank
}

void Player::setStamina(int stamina){
    _playerCharacter.stamina = stamina;
}
void Player::changeStamina(int amount){
    _playerCharacter.stamina += amount;
}
void Player::setGold(int gold){
    _playerCharacter.gold = gold;
}
void Player::changeGold(int amount){
    _playerCharacter.gold += amount;
}
