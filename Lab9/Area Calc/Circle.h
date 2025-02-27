#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"
template <typename T>
class Circle : public Shape<T>// inherit publically from Shape
{
private:
	T radius;
	const double PI = 3.14;
public:
	Circle() = default;
	Circle(T radius) : Shape<T>("Circle"), radius{radius} {}
	virtual T getArea() override
	{
		return radius * radius * PI;
	};

};

#endif
