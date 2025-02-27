/*
Name: Colton Owenby
Class: 1020
Date: 3/17/2023
Desc: Creates a card game called Tiger and allows the user to play different cards to beat the computer
Time: 12 hours
*/
#ifndef DECK_H_
#define DECK_H_

#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Card.h"

using namespace std;

class Deck
{
  private:
    vector<Card> deck;
  public:
    Deck();
    void shuffle();
    Card drawCard();
    int getDeckSize();
};


#endif // DECK_H_
