/*
Name: Colton Owenby
Class: 1021
Date: 2/13/2023
Desc: Calculates the area of a given shape.
Time: 10 hours
*/

#include "Rectangle.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Default constructor sets variables to 1.
Rectangle::Rectangle()
{
  length = 1.0;
  width = 1.0;
}
//Creates new instance of each variable.
Rectangle::Rectangle(int l, int s)
{
  length = l;
  width = s;
}

bool Rectangle::setLength(double l) //Verifies user input.
{
  if(length < 0)
  {
    return false;
  }
  else
  {
    length = l;
    return length;
  }
}
bool Rectangle::setWidth(double w) //Verifies user input.
{
  if(width < 0)
  {
    return false;
  }
  else
  {
    width = w;
    return width;
  }
}

double Rectangle::getLength() //Gets the length as a double.
{
  return length;
}

double Rectangle::getWidth()//Gets the width as a double.
{
  return width;
}

double Rectangle::calcArea() //Calculates the area of the shape rectangle.
{
    return length*width;
}
