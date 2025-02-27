/*
Name: Colton Owenby
Class: 1021
Date: 1/23/2022
Desc: Calculates the area of a given shape
Time: 1 hour
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  double square;
  double circle;
  double rightTriangle1;
  double rightTriangle2;
  int input;

  cout << "1 -- square" << endl;
  cout << "2 -- circle" << endl;
  cout << "3 -- right triangle" << endl;
  cout << "4 -- quit" << endl;
  cin >> input;

  if(input == 1)
  {
    cout << "What is the length and the width of the square?" << endl;
    cin >> square;
    cout << "Area = ";
    cout << fixed <<  setprecision(10) << ( square * square ) << endl;
  }

  else if(input == 2)
  {
    cout << "What is the radius of the circle?" << endl;
    cin >> circle;
    cout << "Area = " << setprecision(4) << (( circle * circle ) * M_PI ) << endl;
  }

  else if(input == 3)
  {
    cout << "What is the base of the right triangle?" << endl;
    cin >> rightTriangle1;
    cout << "What is the height of the right triangle?" << endl;
    cin >> rightTriangle2;
    cout << "Area = " << (( rightTriangle1 * rightTriangle2 ) / 2 ) << endl;
  }

  else if(input == 4)
  {
    cout << endl;
  }

  else
  {
    cout << "You entered an invalid choice. Good bye!" << endl;
  }

return 0;
}
