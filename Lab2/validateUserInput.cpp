/*
Name: Colton Owenby
Class: 1021
Date: 1/31/2023
Desc: Calculates if what the user input is valid and will return a flag to the main function
Time: 3 hours
*/

#include "validateUserInput.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Checks to see if the what the user input is valid
bool validateUserInput(double user)
{
  if(user < 0)
  {
    return false;
  }
  else
  {
    return true;
  }
return false;
}
