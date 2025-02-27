/*
Name: Colton Owenby
Class: 1021
Date: 2/13/2023
Desc: Calculates the area of a given shape.
Time: 10 hours
*/

#include "Trapezoid.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//Default constructor sets variables to 1.
Trapezoid::Trapezoid()
{
  trapezoidBase1 = 1.0;
  trapezoidBase2 = 1.0;
  height = 1.0;
}
//Creates new instance of each variable.
Trapezoid::Trapezoid(int t1, int t2, int h)
{
  trapezoidBase1 = t1;
  trapezoidBase2 = t2;
  height = h;
}

bool Trapezoid::setBase1(double t1) //Verifies user input.
{
  if(trapezoidBase1 < 0)
  {
    return false;
  }
  else
  {
    trapezoidBase1 = t1;
    return trapezoidBase1;
  }
}

bool Trapezoid::setBase2(double t2) //Verifies user input.
{
  if(trapezoidBase2 < 0)
  {
    return false;
  }
  else
  {
    trapezoidBase2 = t2;
    return trapezoidBase2;
  }
}

bool Trapezoid::setHeight(double h) //Verifies user input.
{
  if(height < 0)
  {
    return false;
  }
  else
  {
    height = h;
    return height;
  }
}

 double Trapezoid::getBase1() //Gets the base as a double.
 {
   return trapezoidBase1;
 }

 double Trapezoid::getBase2() //Gets the other base as a double.
 {
     return trapezoidBase2;
 }

 double Trapezoid::getHeight() //Gets the height as a double.
 {
   return height;
 }

double Trapezoid::calcArea() //Calculates the area of the shape trapezoid.
{
    return ((trapezoidBase1+trapezoidBase2)/2)*height;
}
