/*
Name: Colton Owenby
Class: 1020
Date: 3/17/2023
Desc: Creates a card game called Tiger and allows the user to play different cards to beat the computer
Time: 12 hours
*/
#include "Deck.h"
#include <iostream>

Deck::Deck()
{
    vector<Card> deckOfCards = deck;

    //Adds 10 purple cards to the deck
    for(int i = 1; i <= 10; i++)
    {
        deck.push_back(Card(i, Card::purple));
    }

    //Adds 10 orange cards to the deck
    for(int j = 1; j <= 10; j++)
    {
        deck.push_back(Card(j, Card::orange));
    }
  }

void Deck::shuffle()
{
  //Shuffles the deck
  srand(time(NULL));
	random_shuffle(deck.begin(), deck.end());
}
Card Deck::drawCard()
{
  //Draws a card
  Card card = deck.back();
  deck.pop_back();
  return card;

}

int Deck::getDeckSize()
{
  //gets size of deck
  return deck.size();
}
