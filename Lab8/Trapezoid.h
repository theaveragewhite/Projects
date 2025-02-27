#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

#include "Shape.h"

class Trapezoid : public Shape
{
  private:
    double base1;
    double base2;
    double height;
  public:
    Trapezoid() = default;
    Trapezoid(double base1, double base2, double height);
    virtual double getArea();
};

#endif
