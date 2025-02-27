/*
Name: Colton Owenby
Class: 1020
Date: 3/17/2023
Desc: Creates a card game called Tiger and allows the user to play different cards to beat the computer
Time: 12 hours
*/
#include "Hand.h"

Hand::Hand(Deck &deck, int N)
{
  //Draws a card from the deck
  for(int i = 0; i < N; i++)
    	hand.push_back(deck.drawCard());
}

string Hand::printHand()
{
  //prints outs the values of Hand
  stringstream ss;
  for(  int i = 0; i < (int)hand.size(); i++) {
           ss << " [" << i + 1 << "] " << hand[i].printCard();
   }
  return ss.str();
}
Card Hand::dealCard(int num)
{
  //removes the Card that has been dealt from you Hand
   Card card = hand[num];
   hand.erase(hand.begin() + (num));
   return card;
}
int Hand::getHandSize()
{
  //gets the size of Hand
  return hand.size();
}
