/*
Name: Colton Owenby
Class: 1020
Date: 3/17/2023
Desc: Creates a card game called Tiger and allows the user to play different cards to beat the computer
Time: 12 hours
*/
#ifndef HAND_H_
#define HAND_H_

#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include "Card.h"
#include "Deck.h"

using namespace std;

class Hand
{
  private:
    vector<Card> hand;
  public:
    Hand() = default;
    Hand(Deck &deck, int N);
    string printHand();
    Card dealCard(int num);
    int getHandSize();
};

#endif // HAND_H_
