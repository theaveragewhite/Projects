/*
Name: Colton Owenby
Class: 1021
Date: 9/23/2022
Desc: Calculates the area of a given shape.
Time: 10 hours
*/
#ifndef SHAPE_H_
#define SHAPE_H_

#include <string>

class Shape
{
  private:
    std::string name;
  public:
    Shape() = default;
    Shape(std::string name) : name(name) {}
    std::string printName() final {}
    double getArea(); //

};

#endif
