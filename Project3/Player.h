/*
Name: Colton Owenby
Class: 1020
Date: 3/17/2023
Desc: Creates a card game called Tiger and allows the user to play different cards to beat the computer
Time: 12 hours
*/

#ifndef PLAYER_H_
#define PLAYER_H_

#include "Card.h"
#include <iostream>

using namespace std;

class Player
{

  public:
    Hand hand;
    int score = 0;
    Player() = default;
    Player(Deck &deck, int N) : hand(deck, N) {}
};


#endif // PLAYER_H_
