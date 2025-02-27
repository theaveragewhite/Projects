/*
Name: Colton Owenby
Class: 1020
Date: 10/28/2022
Desc: Prints the results of the Quiz as a stringstream
Time: 10 hours
*/
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
    //
    //Quiz Quiz;
    std::stringstream res; res << "Number of questions: " << questions //<< std::endl;
    /*std::stringstream c; c */<< "\nNumber correct answers: " << correct //<< std::endl;
    /*std::stringstream w; w */<< "\nNumber wrong answers: " << wrong //<< std::endl;
    /*std::stringstream s; s*/ << "\nFinal score: " << Quiz::score << "\n"; //<< std::endl;

    return (res.str());//, c.str(), w.str(), s.str());
}
