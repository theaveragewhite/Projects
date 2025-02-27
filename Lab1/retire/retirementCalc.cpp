/*
Name: Colton Owenby
Class: 1021
Date: 1/23/2023
Desc: This program calculates your retirement savings after you input the principle, the interest rate, and the amount of time.
Time: 1 hour
*/

#include "compoundCalc.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  double p; // Principle
  double r; // Interest Rate
  double t; // Time in years
  cout << "What is the principle amount you have in retirement?" << endl;
  cin >> p;
  cout << "What is the interest rate you have on your account? This would be a decimal" << endl;
  cin >> r;
  cout << "How many years will the money be left in the account?" << endl;
  cin >> t;
  cout << "Your retirement savings will be $" << fixed << std::setprecision(2) << compoundCalc(p,r,t) << endl;
  return 0;
}
