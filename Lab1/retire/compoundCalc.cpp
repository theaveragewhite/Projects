#include "compoundCalc.h"
#include <math.h>
#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;

double compoundCalc(double p, double r, double t)
{
   // p = Principle
   // r = Interest rate
   // t = Number of years money will be left in the account
  return (p*pow((1+r),t));
}
