/*
Name: Colton Owenby
Class: 1020
Date: 3/17/2023
Desc: Creates a card game called Tiger and allows the user to play different cards to beat the computer
Time: 12 hours
*/
#include "Card.h"
#include <iostream>

Card::Card(int rank, Color color)
{
    //Creates a card with a rank and color
    this->rank = rank;
    this->color = color;
    if(color == purple)
    {
        value = rank;
    }
    else if(color == orange)
    {
        value = rank * 2;
    }
}

string Card::printCard()
{
  //Assigns a color to the Card
  string cards;
  if(color == 0)
  {
       cards = "purple:" + to_string(rank);
  }
  else if(color == 1)
  {
       cards = "orange:" + to_string(rank);
  }
  return cards;
}

int Card::getRank()
{
    //gets the rank of the Card
    return rank;
}

Card::Color Card::getColor()
{
    //gets the color of the Card
    return color;
}


int Card::getValue()
{
    //gets the value of the Card
    return value;
}
