#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

class Circle : public Shape
{
  private:
    double radius;
    double const PI = 3.14;
  public:
    Circle() = default;
    Circle(double radius);
    virtual double getArea(); // use override to get correct area.Apply to all

};

#endif
