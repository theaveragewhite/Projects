
#include "Quiz.h"
#include <vector>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>
#include <string>

int Quiz::score = 0;

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
  score += val;
  if (score + val < 0)
  {
        score = 0;
  }
}
