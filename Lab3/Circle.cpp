/*
Name: Colton Owenby
Class: 1021
Date: 2/13/2023
Desc: Calculates the area of a given shape.
Time: 10 hours
*/

#include "Circle.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Default constructor sets variables to 1.
Circle::Circle()
{
  radius = 1.0;
}
//Creates new instance of each variable.
Circle::Circle(int r)
{
  radius = r;
}

bool Circle::setRadius(double rad) //Verifies user input.
{
  if(rad < 0)
  {
    return false;
  }
  else
  {
    radius = rad;
    return radius;
  }
}

double Circle::getRadius() //Gets the radius as a double
{
  return radius;
}

double Circle::calcArea() //Calculates the are of a circle.
{
    return pow(radius, 2)*M_PI;
}
