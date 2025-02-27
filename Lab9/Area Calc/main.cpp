#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "Trapezoid.h"
#include <iostream>
#include <iomanip>

#include <vector>

using namespace std;

int main()
{
  cout << fixed << showpoint << setprecision(1);

  // Doubles
  Circle<double> circle(2.0);
  Square<double> square(2.0);
  Rectangle<double> rectangle(2.5,3.0);
  Trapezoid<double> trapezoid(2.5,3.5,4.0);
  
  vector<Shape<double> *>shapeVect {&circle,&square,&rectangle,&trapezoid};

  for (Shape<double> * s : shapeVect)
  {
  	cout << "Area of " << s->printName() << " is: " << s->getArea() << endl;
  }

  // Ints
  Circle<int> icircle(2);
  Square<int> isquare(2);
  Rectangle<int> irect(2,3);
  Trapezoid<int> itrap(2,6,5);

  vector<Shape<int> *>ishapeVect {&icircle,&isquare,&irect,&itrap};

  for (Shape<int> * s :ishapeVect)
  {
  	cout << "Area of " << s->printName() << " is: " << s->getArea() << endl;
  }

   return 0;
}
