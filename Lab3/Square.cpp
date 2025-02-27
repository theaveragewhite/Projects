/*
Name: Colton Owenby
Class: 1021
Date: 2/13/2023
Desc: Calculates the area of a given shape.
Time: 10 hours
*/

#include "Square.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Default constructor sets variables to 1.
Square::Square()
{
  side = 1.0;
}
//Creates new instance of each variable.
Square::Square(int s)
{
  side = s;
}

bool Square::setSide(double s) //Verifies user input.
{
  if(side < 0)
  {
    return false;
  }
  else
  {
    side = s;
    return true;
  }
}
double Square::getSide() //Gets the side as a double.
{
  return side;
}
double Square::calcArea() //Calculates the are of a square.
{
  return pow(side, 2);
}
