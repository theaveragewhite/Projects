#include <iostream>
#include <iomanip>
#include <cmath>
#include <string.h>
#include <string>
using namespace std;

#ifndef VehicleType_h
#define VehicleType_h

class Truck
{
  private:
    string make;
    string model;
    int year;
    double mpg;
    string transmission;
  public:
    Truck() = default;
    Truck(string m, string d, int y, double g, string t);
    void setMake(string m);
    void setModel(string d);
    void setYear(int y);
    void setMpg(double g);
    void setTransmission(string t);
    string getMake();
    string getModel();
    int getYear();
    double getMpg();
    string getTransmisson();
};

#endif
