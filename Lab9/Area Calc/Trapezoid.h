#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

#include "Shape.h"
template<typename T>
class Trapezoid : public Shape<T> // inherit publically from Shape
{
public:
	T base1;
	T base2;
	T height;
public:
	Trapezoid() = default;
	Trapezoid(T base1, T base2, T height) : Shape<T>("Trapezoid"), base1{base1}, base2{base2}, height{height} {}
	virtual T getArea() override
	{
		return ((base1+base2) /2) * height;
	};
};

#endif
