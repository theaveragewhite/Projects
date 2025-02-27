/*
Name: Colton Owenby
Class: 1020
Date: 10/28/2022
Desc: Reads the dates.txt file and returns the integers as a string and also returns the month with the names
Time: 10 hours
*/
#include "Quiz.h"
#include <vector>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>
#include <string>

int Quiz::score;

std::string Quiz::getQuestion()
{
  return question;
}

std::string Quiz::getAnswer()
{
  return answer;
}

int Quiz::getScore()
{
  return score;
}

void Quiz::updateScore(int val)
{
  //val=0;
  val=val+1;
  if(val <= 0)
  {
    val = 0;
  }
   score = val;
}
