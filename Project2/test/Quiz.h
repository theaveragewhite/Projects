#ifndef Quiz_h
#define Quiz_h
#include <string>
#include "printResult.h"

class Quiz
{
  private:
    std::string question = "";
    std::string answer = "";
    int static score;

  public:
    Quiz() = default;
    Quiz(std::string q, std::string a) : question{q}, answer{a}{}
    std::string getQuestion();
    std::string getAnswer();
    int static getScore();
    void static updateScore(int val);
    friend std::string printResult(int questions, int correct, int wrong);
};

#endif
