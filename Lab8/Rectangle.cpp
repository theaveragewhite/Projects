/*
Name: Colton Owenby
Class: 1021
Date: 9/23/2022
Desc: Calculates the area of a given shape.
Time: 10 hours
*/

#include "Rectangle.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/*/Default constructor sets variables to 1.
Rectangle::Rectangle()
{
  length = 1.0;
  width = 1.0;
}
*///Creates new instance of each variable.
Rectangle::Rectangle(double l, double s)
{
  length = l;
  width = s;
}

double Rectangle::getArea() //Calculates the area of the shape rectangle.
{
    return length*width;
}
