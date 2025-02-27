#include "Quiz.h"
#include "printResult.h"
#include <vector>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>
#include <string>
#include <fstream>

std::string printResult(int questions, int correct, int wrong)
{
    std::stringstream res;
    res << "Number of questions: " << questions << "\n"
    << "Number correct answers: " << correct << "\n"
    << "Number wrong answers: " << wrong << "\n"
    << "Final score: " << Quiz::getScore() << "\n";
    return res.str();
}
