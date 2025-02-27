#ifndef SQUARE_H_
#define SQUARE_H_

#include "Shape.h"
template<typename T>
class Square : public Shape<T>// inherit publically from Shape
{
private:
	T side;
public:
	Square() = default;
	Square(T side) : Shape<T>("Square"), side{side} {}
	virtual T getArea() override
	{	
		return side * side;
	};
};

#endif
