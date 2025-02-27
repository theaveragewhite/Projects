/*
Name: Colton Owenby
Class: 1021
Date: 9/23/2022
Desc: Calculates the area of a given shape.
Time: 10 hours
*/

#include "Trapezoid.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
/*/Default constructor sets variables to 1.
Trapezoid::Trapezoid()
{
  trapezoidBase1 = 1.0;
  trapezoidBase2 = 1.0;
  height = 1.0;
}
*///Creates new instance of each variable.
Trapezoid::Trapezoid(double t1, double t2, double h)
{
  base1 = t1;
  base2 = t2;
  height = h;
}

double Trapezoid::getArea() //Calculates the area of the shape trapezoid.
{
    return ((base1+base2)/2)*height;
}
