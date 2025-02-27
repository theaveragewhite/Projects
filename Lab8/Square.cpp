/*
Name: Colton Owenby
Class: 1021
Date: 9/23/2022
Desc: Calculates the area of a given shape.
Time: 10 hours
*/

#include "Square.h"
#include <iostream>
#include <iomanip>
#include <cmath>

/*/Default constructor sets variables to 1.
Square::Square()
{
  side = 1.0;
}
*///Creates new instance of each variable.
Square::Square(double s)
{
  side = s;
}

}
double Square::getArea() //Calculates the are of a square.
{
  return pow(side, 2);
}
