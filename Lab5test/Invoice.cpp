/*  Carl Brandenburg
    Colton Owenby
    Jaden Naylor
    Ryan Lamantia

    February 20 2023
    CPSC 1021-005
    Invoice class member functions.

*/

#include <iostream>
#include <iomanip>
#include <string>

#include "Visitor.h"
#include "Employee.h"
#include "Student.h"
#include "Vendor.h"

#include "Motorcycle.h"
#include "Truck.h"
#include "Sports.h"
#include "Sedan.h"

#include "Invoice.h"
using namespace std;

// Setters
void Invoice::setPermitType(int pT)
{
  setPrice(pT);
  if(pT == 1)
  {
    permitType = "Annual";
  }
  else if(pT == 2)
  {
    permitType = "Semester";
  }
  else if(pT == 3)
  {
    permitType = "One-Day";
  }

}

void Invoice::setCustomerType(int cT)
{
  if(cT == 1)
  {
    customerType = "Visitor";
  }
  else if(cT == 2)
  {
    customerType = "Employee";
  }
  else if(cT == 3)
  {
    customerType = "Student";
  }
  else if(cT == 4)
  {
    customerType = "Vendor";
  }

}
void Invoice::setVehicleType(int vT)
{
  if(vT == 1)
  {
    vehicleType = "Motorcycle";
  }
  else if(vT == 2)
  {
    vehicleType = "Truck";
  }
  else if(vT == 3)
  {
    vehicleType = "Sportscar";
  }
  else if(vT == 4)
  {
    vehicleType = "Sedan";
  }
}

void Invoice::setPrice(int p)
{
  if(p == 1)
  {
    if(vehicleType == "Motorcycle")
    {
      price = priceAnnual - 146;
    }
    else if((vehicleType == "Truck") || (vehicleType == "Sportscar"))
    {
      price = priceAnnual + 16;
    }
    else if(vehicleType == "Sedan")
    {
      price = priceAnnual;
    }

    if((customerType == "Employee") || (customerType == "Vendor"))
    {
      price -= 20;
    }
  }

  else if(p == 2)
  {
    if(vehicleType == "Motorcycle")
    {
      price = priceSemester - 54;
    }
    else if((vehicleType == "Truck") || (vehicleType == "Sportscar"))
    {
      price = priceSemester + 8;
    }
    else if(vehicleType == "Sedan")
    {
      price = priceSemester;
    }

    if((customerType == "Employee") || (customerType == "Vendor"))
    {
      price -= 20;
    }
  }
  else
  {
    price = priceDaily;
  }
}

void Invoice::setDiscount(string di, char testType, int varNum)
{

  if(testType == 'v')
  {
    if(vehicleType == "Sedan")
    {
      if(varNum == 2)
      {
        if(di == "Yes" || di == "yes")
        {
          discount = discount - .10;
        }
      }
    }
  }

  if(discount <= .50)
  {
    discount = .50;
  }
}

void Invoice::setServiceCharge(string sC, char testType, int varNum)
{
  if(testType == 'v')
  {
    if(vehicleType == "Sportscar")
    {
      if(varNum == 1)
      {
        double eD = stod(sC);
        if(eD > 110)
        {
          serviceCharge = serviceCharge + .10;
        }
      }
    }
  }

  if(serviceCharge >= 2.00)
  {
    serviceCharge = 2.00;
  }
}

// Getters
string Invoice::getPermitType()
{
  return permitType;
}
string Invoice::getCustomerType()
{
  return customerType;
}
string Invoice::getVehicleType()
{
  return vehicleType;
}
double Invoice::getPrice()
{
  return price;
}
double Invoice::getDiscount()
{
  return price - (price * discount);
}
double Invoice::getServiceCharge()
{
  return (price * serviceCharge) - price;
}

double Invoice::calcPermitPrice()
{
  return price - getDiscount() + getServiceCharge();
}


void Invoice::printReceipt(string n, string a, string e, string custInfo1, string custInfo2,
                            string m, string d, int y, string vehicleInfo1, string vehicleInfo2)
{
  cout << endl;



// Title for Bill
  cout << customerType << " " << permitType << " Permit for " << vehicleType;

  cout << "\n\n";

// Customer Information for Bill
  cout << "CUSTOMER" << endl;

  cout << customerType << endl;

  cout << "Full Name: " << n << endl;
  cout << "Address: " << a << endl;
  cout << "Email Address: " << e << endl;

  if(customerType == "Visitor")
  {
    cout << "Distance from Campus: " << custInfo1 << endl;
    cout << "Phone Number: " << custInfo2 << endl;
  }
  else if(customerType == "Employee")
  {
    cout << "College: " << custInfo1 << endl;
    cout << "Administration: " << custInfo2 << endl;
  }
  else if(customerType == "Student")
  {
    cout << "School Year: " << custInfo1 << endl;
    cout << "Student ID: " << custInfo2 << endl;
  }
  else if(customerType == "Vendor")
  {
    cout << "Store Name: " << custInfo1 << endl;
    cout << "Years Employeed: " << custInfo2 << endl;
  }

  cout << endl;

// Vehicle Information for Bill
  cout << "Vehicle" << endl;

  cout << vehicleType << endl;

  cout << "Manufacturer: " << m << endl;
  cout << "Model Number: " << d << endl;
  cout << "Model Year: " << y << endl;

  if(vehicleType == "Motorcycle")
  {
    cout << "Engine Size: " << vehicleInfo1 << endl;
    cout << "Vehicle Color: " << vehicleInfo2 << endl;
  }
  else if(vehicleType == "Truck")
  {
    cout << "Miles Per Gallon: " << vehicleInfo1 << endl;
    cout << "Transmission: " << vehicleInfo2 << endl;
  }
  else if(vehicleType == "Sports Car")
  {
    cout << "Exhaust Decibels: " << vehicleInfo1 << endl;
    cout << "Body Style: " << vehicleInfo2 << endl;
  }
  else if(vehicleType == "Sedan")
  {
    cout << "Vehicle Weight: " << vehicleInfo1 << endl;
    cout << "Electric: " << vehicleInfo2 << endl;
  }

  cout << endl;

// Price Information for Bill
  cout << "BILL" << endl;
  cout << "Permit Type: " << permitType << endl;
  cout << "Permit Cost: $";
  cout << fixed << setprecision(2) << price << endl;
  cout << "Discounts: $";
  cout << fixed << setprecision(2) << getDiscount() << endl;
  cout << "Service Charge: $";
  cout << fixed << setprecision(2) << getServiceCharge() << endl;
  cout << "Total: $";
  cout << fixed << setprecision(2) << calcPermitPrice() << endl;

}
