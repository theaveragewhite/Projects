/*
Name: Colton Owenby
Class: 1020
Date: 10/28/2022
Desc: Reads the dates.txt file and returns the integers as a string and also returns the month with the names
Time: 10 hours
*/


#include "Quiz.h"
#include "printResult.h"
#include <vector>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <sstream>
#include <string>
#include <fstream>
#include <algorithm>
#include <random>

int main(int argc, char* argv[])
{
  std::vector<Quiz> quizVector;
  Quiz quiz;
  std::string q;
  std::string a;
  //std::string fileName = argv[1];
  std::ifstream myFile;//("database.txt");
  myFile.open("database.txt");
  std::cout << "Good File" << std::endl;
  //std::string fileName = *(argv);

	   while (std::getline(myFile, q))
     {
		   //std::getline(myFile, q);
		       if (q.at(0) == 'Q')
           {
			          do
                {
				         std::getline(myFile, a);
			            } while (a.at(0) != 'A' && !myFile.eof());
			          if (a.at(0) == 'A')
                {
				         q = q.substr(3);
				         a = a.substr(3);
				         quizVector.push_back(Quiz{q,a});
			          }
		        }
	   }



  std::srand(time(NULL));
	std::random_shuffle(quizVector.begin(),quizVector.end());
  int totalCorrect = 0;
  int totalWrong = 0;
	    for (std::vector<Quiz>::iterator i = quizVector.begin(); i != quizVector.end(); ++i)
      {

		      std::string answer = "";
		      std::cout << (*i).getQuestion() << std::endl;
		      std::cout << "Type in your answer: ";
		      getline(std::cin, answer);
		     if (answer == (*i).getAnswer())
         {
			        std::cout << "Correct!" << std::endl;
			        Quiz::updateScore(+1);
              totalCorrect = totalCorrect +1;
		     }
         else
         {
            std::cout << "Wrong! Correct answer: " << (*i).getAnswer() << std::endl;
            Quiz::updateScore(-1);
            totalWrong = totalWrong + 1;
          }
		  std::cout << "Current Score: " << Quiz::getScore() << std::endl << std::endl;
	   }
	std::cout <<  printResult(quizVector.size(), totalCorrect, totalWrong);
	myFile.close();
  }
