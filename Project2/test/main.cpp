/*
Name: Colton Owenby
Class: 1020
Date: 3/9/2023
Desc: Determines if an answer to a question is right or wrong from a text file and outputs the score
Time: 8 hours
*/

#include "Quiz.h"
#include "printResult.h"
#include <vector>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <string>
#include <fstream>
#include <algorithm>
#include <random>


void eraseSubStr(std::string &mainStr, const std::string &toErase)
{
    size_t pos = mainStr.find(toErase);   // searching for substring in string
    if (pos != std::string::npos)
    {
      mainStr.erase(pos, toErase.length()); // if substring is found then erase from string
    }
}

int getQuestions(std::ifstream &inFile)  // returns the total # of questions
{
    std::string line;
    int total = 0;
    if (inFile.is_open())
    {
      while(getline(inFile, line))
      {
        total +=1;
      }
    }
  return total / 2;
}

//int Quiz::score = 0;

int main(int argc, char *argv[])
{
  int totalCorrect = 0;
  int totalWrong = 0;
  int totalQuestions = 0;
  std::srand(time(NULL));
  std::vector<Quiz *> quizVector;
  std::string fileName = argv[1];
  std::ifstream myFile(fileName);
  Quiz *quiz;

  if(myFile.is_open())
  {
    int size = getQuestions(myFile);

    myFile.clear();
    myFile.seekg(0, std::ifstream::beg); //Used to move the position to the end of the file, and then back to the beginning.
    for(int j = 0; j < size; j++)
    {
    std::string q;
		std::string a;
		getline(myFile, q);
    getline(myFile, a);
    eraseSubStr(a, "A: ");
    quiz = new Quiz(q,a); //Creates a new instance of object quiz.
    quizVector.push_back(quiz);
    totalQuestions += 1;
    }

    srand(unsigned(time(NULL)));
	  std::random_shuffle(quizVector.begin(),quizVector.end());  //Shuffles the questions.
    bool eoQuiz = false;
    while(!eoQuiz)
    {
	    for (int i = 0; i < totalQuestions; i++)
      {
		      std::string answer;
		      std::cout << quizVector[i]->getQuestion() << std::endl;
		      std::cout << "Type in your answer: ";
          std::cin.clear();
		      getline(std::cin, answer);

		     if (answer == quizVector[i]->getAnswer())
         {
           Quiz::updateScore(1);
           totalCorrect += 1;
			     std::cout << "Correct!" << std::endl;

		     }
         else
         {
           Quiz::updateScore(-1);
           totalWrong += 1;
           std::cout << "Wrong! Correct answer: " << quizVector[i]->getAnswer() << std::endl;
          }

		      std::cout << "Current Score: " << Quiz::getScore() << std::endl;
	     }
     std::cout << printResult(totalQuestions, totalCorrect, totalWrong);
     eoQuiz = true;
   }
}
  //quizVector.clear();
	myFile.close();

  return 0;
}
