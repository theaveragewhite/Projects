/*
Name: Colton Owenby
Class: 1021
Date: 1/31/2023
Desc: Calculates inpatient on outpatient totals
Time: 3 hours
*/
#include "calcTotalCharges.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calcTotalCharges(double days, double roomRate, double serviceCharges, double medCharges)
{
  double total;
  total = ((days*roomRate)+serviceCharges+medCharges);
  return total; //Calculates inpatient total charges.
}

double calcTotalCharges(double serviceCharges, double medCharges)
{
  double total;
  total = (serviceCharges+medCharges);
  return total; //Calculates outpatient total charges.
}
