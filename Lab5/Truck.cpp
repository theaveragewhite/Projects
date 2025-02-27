#include "Truck.h"

void Truck::setMake(string m)
{
  m = make;
}

void Truck::setModel(string d)
{
  d = model;
}

void Truck::setYear(string y)
{
    y = year;
}

void Truck::setMPG(string g)
{
    g = mpg;
}

void Truck::setTransmisson(string t)
{
  t = transmission;
}

string Truck::getMake()
{
  return make;
}

string Truck::getModel()
{
  return model;
}

int Truck::setYear()
{
  return year;
}

double Truck::setMPG()
{
  return mpg;
}

string Truck::getTransmission()
{
  return transmission;
}
