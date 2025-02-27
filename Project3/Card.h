/*
Name: Colton Owenby
Class: 1020
Date: 3/17/2023
Desc: Creates a card game called Tiger and allows the user to play different cards to beat the computer
Time: 12 hours
*/
#ifndef CARD_H_
#define CARD_H_

#include <string>
#include <iostream>

using namespace std;

class Card
{
  public:
  enum Color { purple, orange };
  private:
    int rank = 0;
    Color color = purple;
    int value = 0;
  public:
    Card() = default;
    Card(int rank, Color color);
    string printCard();
    int getRank();
    Color getColor();
    int getValue();
};


#endif // CARD_H_
