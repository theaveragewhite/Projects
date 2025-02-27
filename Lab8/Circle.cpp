/*
Name: Colton Owenby
Class: 1021
Date: 9/23/2022
Desc: Calculates the area of a given shape.
Time: 10 hours
*/

#include "Circle.h"
#include <iostream>
#include <iomanip>
#include <cmath>

/*Default constructor sets variables to 1.
Circle::Circle()
{
  radius = 1.0;
}
*///Creates new instance of each variable.
Circle::Circle(double r)
{
  radius = r;
}

double Circle::getArea() //Calculates the are of a circle.
{
    return pow(radius, 2)*M_PI;
}
