/*
Name: Colton Owenby
Class: 1021
Date: 2/13/2023
Desc: Calculates the area of a given shape.
Time: 10 hours
*/

#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Trapezoid.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{
    int input;
    cout << "1 -- circle" << endl;
    cout << "2 -- square" << endl;
    cout << "3 -- rectangle" << endl;
    cout << "4 -- trapezoid" << endl;
    cin >> input;

    while(input !=1 && input != 2 && input != 3 && input != 4) //Validates user input to determine shape.
    {
        cout << "Please enter a valid input" << endl;
        cin >> input;
    }

    if(input == 1)
    {
        Circle circle;
        double rad;
        cout << "What is the radius?" << endl;
        cin >> rad;


        while (!circle.setRadius(rad)) //Verifies that the radius is a valid number.
        {
          cout << "Please enter a valid number" << endl;
          cin >> rad;
        }


        cout << "Area: " << fixed <<  setprecision(1) << circle.calcArea() << endl; //Outputs the area of circle.
    }

    else if(input == 2)
    {
        Square square;
        double s;
        cout << "What is the length and width of the square?" << endl;
        cin >> s;

        while (!square.setSide(s)) //Verifies that the side is a valid number.
        {
          cout << "Please enter a valid number" << endl;
          cin >> s;
        }

        cout << "Area: " << fixed <<  setprecision(1) << square.calcArea() << endl; //Outputs the area of a sqaure.
    }

    else if(input == 3)
    {
        Rectangle rectangle;
        double l;
        double w;

        cout << "What is the length of the rectangle?" << endl;
        cin >> l;

        while (!rectangle.setLength(l)) //Verifies that the side is a valid number.
        {
          cout << "Please enter a valid number" << endl;
          cin >> l;
        }

        cout << "What is the width of the rectangle?" << endl;
        cin >> w;

        while (!rectangle.setWidth(w)) //Verifies that the side is a valid number.
        {
          cout << "Please enter a valid number" << endl;
          cin >> w;
        }

        cout << "Area: " << fixed <<  setprecision(1) << rectangle.calcArea() << endl; //Outputs the area of rectangle.
    }
    else if(input == 4)
    {
      Trapezoid trapezoid;
      double t1;
      double t2;
      double h;

      cout << "What is the first base of the trapezoid?" << endl;
      cin >> t1;

      while (!trapezoid.setBase1(t1)) //Verifies that the side is a valid number.
      {
        cout << "Please enter a valid number" << endl;
        cin >> t1;
      }


      cout << "What is the second base of the trapezoid?" << endl;
      cin >> t2;

      while (!trapezoid.setBase2(t2)) //Verifies that the side is a valid number.
      {
        cout << "Please enter a valid number" << endl;
        cin >> t2;
      }

      cout << "What is the height of the trapezoid?" << endl;
      cin >> h;

      while (!trapezoid.setHeight(h)) //Verifies that the side is a valid number.
      {
        cout << "Please enter a valid number" << endl;
        cin >> h;
      }


      cout << "Area: " << fixed <<  setprecision(1) << trapezoid.calcArea() << endl; //Outputs the area of a trapezoid
    }


    return 0;
}
