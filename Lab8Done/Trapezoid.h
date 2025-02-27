#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

#include "Shape.h"

class Trapezoid : public Shape // inherit publically from Shape
{
public:
	double base1;
	double base2;
	double height;
public:
	Trapezoid() = default;
	Trapezoid(double base1, double base2, double height) : Shape("Trapezoid"), base1{base1}, base2{base2}, height{height} {}
	virtual double getArea() override;
};

#endif
