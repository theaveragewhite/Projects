#include <iostream>
#include <iomanip>
#include <cmath>
#include <string.h>
#include <string>
#include "Truck.h"
#include "Employee.h"
using namespace std;

#ifndef Invoice_h
#define Invoice_h

class Invoice
{
private:
	string permitType;
	double discount;
	double serviceCharge;
public:
	Invoice() = default;
	Invoice(string p, double d, double sc);
	void setPermitType(string p);
	void setDiscount(double d);
	void setServiceCharge(double sc);
	string getPermitType();
	double getDiscount();
	double getServiceCharge();

};

#endif
