/*
Name: Colton Owenby
Class: 1020
Date: 3/17/2023
Desc: Creates a card game called Tiger and allows the user to play different cards to beat the computer
Time: 12 hours
*/
#include "Card.h"
#include "Deck.h"
#include "Hand.h"
#include "Player.h"
#include <iostream>
using namespace std;

int main() {


  cout << "Welcome to TigerGame!" << endl;

  Deck deckOfCards; //creates a deck object
  deckOfCards.shuffle(); //shuffles cards in the deck
  Card comp;
  Card human;

  vector <int> playerScores;
  vector <int> compScores;
  int cTotal = 0;
  int pTotal = 0;
  int cardPicked;
  int rounds = 1;

  bool playAgain = false;

  while(playAgain == false)
  {
  cout << "How many rounds would you like to implement?\nThe value cannot be greater then 10" << endl;
  //add input validation
  cin >> rounds;


  Player computer(deckOfCards, rounds);
  Player player(deckOfCards, rounds);
  cout << "The deck was shuffled and each player has drawn " << rounds << " cards." << endl;





  for(int i = 1; i <= rounds; ++i) //Draws 5 cards from the deck
  {
      cout << "\nRound " << i << endl;
      cout << "------" << endl;
      int compSelect = rand() % computer.hand.getHandSize(); //computer selects a random card
			comp = computer.hand.dealCard(compSelect); //computer outputs selection
			cout << "The computer plays: " << comp.printCard() << endl;

      cout << "Your hand: "  << player.hand.printHand() << endl; //outputs what the player has
			cout << "Which card do you want to play? " << endl;
			cin >> cardPicked;
      while(cardPicked > player.hand.getHandSize()) //Input validation
      {
        cout << "Please enter a valid number: " << endl;
				cin >> cardPicked;
      }
      human = player.hand.dealCard(cardPicked-1); //subtracts the card entered
      cout << "You played: " << human.printCard() << endl;

      if(human.getValue() < comp.getValue()) //determines if the computer won
      {
        cout << "\nThe computer wins this round!" << endl;
				computer.score += (comp.getValue() + human.getValue());
      }
      else if(human.getValue() > comp.getValue()) //determines if the human won
      {
        cout << "\nThe human wins this round!" << endl;
				player.score += (comp.getValue() + human.getValue());
      }
      else
      {
        cout << "Tie!" << endl;
      }
      cout << "Current scores: " << endl;
      cout << "Computer: " << computer.score << endl; //outputs score of computer
			cout << "Human: " << player.score << endl; //outputs score of the player


		  playerScores.push_back(player.score);
      compScores.push_back(computer.score);
      pTotal += player.score;
		  cTotal += computer.score;



  }


  cout << "Total Scores" << endl;
  cout << "------------" << endl;
  cout << "Human scored " << pTotal << " total points" << endl;
  cout << "Computer scored " << cTotal << " total points" << endl;

  char answer;

  cout << "\nWould you like to play again?\n";
  cout << "Y for yes:\nN for No:\n";
  cin >> answer;
  if(answer == 'y' || answer == 'Y')
  {
    playAgain = false;
  }
  else
  {
    playAgain = true;
  }


}

  return 0;
}







//
