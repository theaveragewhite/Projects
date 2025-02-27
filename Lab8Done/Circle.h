#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

class Circle : public Shape// inherit publically from Shape
{
private:
	double radius;
	const double PI = 3.14;
public:
	Circle() = default;
	Circle(double radius) : Shape("Circle"), radius{radius} {}
	virtual double getArea() override;

};

#endif
