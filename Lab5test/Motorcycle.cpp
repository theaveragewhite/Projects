/*  Carl Brandenburg
    February 20 2023
    CPSC 1021-005
    Motorcycle class member functions.

*/

#include "Visitor.h"
#include "Employee.h"
#include "Student.h"
#include "Vendor.h"

#include "Motorcycle.h"
#include "Truck.h"
#include "Sports.h"
#include "Sedan.h"

#include "Invoice.h"

// Constructor
Motorcycle::Motorcycle(string ma, string mo, int y, string eS, string co)
{
  setMake(ma);
  setModel(mo);
  setYear(y);
  setEngineSize(eS);
  setColor(co);
}

// Setters
void Motorcycle::setMake(string ma)
{
  make = ma;
}

void Motorcycle::setModel(string mo)
{
  model = mo;
}

void Motorcycle::setYear(int y)
{
  year = y;
}

void Motorcycle::setEngineSize(string eS)
{
  engineSize = eS;
}

void Motorcycle::setColor(string co)
{
  color = co;
}


// Getters
string Motorcycle::getMake()
{
  return make;
}

string Motorcycle::getModel()
{
  return model;
}

int Motorcycle::getYear()
{
  return year;
}

string Motorcycle::getEngineSize()
{
  return engineSize;
}

string Motorcycle::getColor()
{
  return color;
}
