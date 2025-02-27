#ifndef SQUARE_H_
#define SQUARE_H_

#include "Shape.h"

class Square : public Shape// inherit publically from Shape
{
private:
	double side;
public:
	Square() = default;
	Square(double side) : Shape("Square"), side{side} {}
	virtual double getArea() override;
};

#endif
