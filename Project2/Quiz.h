/*
Name: Colton Owenby
Class: 1020
Date: 10/28/2022
Desc: Reads the dates.txt file and returns the integers as a string and also returns the month with the names
Time: 10 hours
*/
#ifndef Quiz_h
#define Quiz_h
#include <string>

class Quiz
{
  private:
    std::string question = "";
    std::string answer = "";
    static int score;
  public:
    Quiz() = default;
    Quiz(std::string q, std::string a)
    {
      std::string question = q;
      std::string answer = a;
    };
    std::string getQuestion();
    std::string getAnswer();
    static int getScore();
    static void updateScore(int val);
    friend std::string printResult(int questions, int correct, int wrong);
};

#endif
