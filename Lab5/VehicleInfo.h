#include <iostream>
#include <iomanip>
#include <cmath>
#include <string.h>
#include <string>
using namespace std;

#ifndef VehicleInfo_h
#define VehicleInfo_h

class vehicleInfo
{
  private:
    string liscence;
  public:
    void setLiscence(string l);
    string getLiscence();
};

#endif
