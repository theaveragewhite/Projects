/*  Carl Brandenburg
    Colton Owenby
    Jaden Naylor
    Ryan Lamantia

    February 20 2023
    CPSC 1021-005
    Invoice class declaration.

*/

// Invoice.h is the class specification file
#include "Visitor.h"
#include "Employee.h"
#include "Student.h"
#include "Vendor.h"

#include "Motorcycle.h"
#include "Truck.h"
#include "Sports.h"
#include "Sedan.h"

#ifndef INVOICE_H_
#define INVOICE_H_

class Invoice
{
  private:
    string permitType {"None"};
    string customerType {"None"};
    string vehicleType {"None"};

    double price {0};
    double discount {1};
    double serviceCharge {1};

    const double priceAnnual {184};
    const double priceSemester {92};
    const double priceDaily {4.0};
//    double visitorModifier[1.20];
//    double employeeModifier[.80];
//    double studentModifier[1];
//    double vendorModifier[.90];

  public:
    // Setters
    void setPermitType(int pT);
    void setCustomerType(int cT);
    void setVehicleType(int vT);
    void setPrice(int p);
    void setDiscount(string di, char testType, int varNum);
    void setServiceCharge(string sC, char testType, int varNum);

    // Getters
    string getPermitType();
    string getCustomerType();
    string getVehicleType();
    double getPrice();
    double getDiscount();
    double getServiceCharge();

    double calcPermitPrice();
    void printReceipt(string n, string a, string e, string custInfo1, string custInfo2,
                                string m, string d, int y, string vehicleInfo1, string vehicleInfo2);

    /*Visitor visitor;
    Employee employee;
    Student student;
    Vendor vendor;
    Motorcycle motorcycle;
    Truck truck;
    Sports sports;
    Sedan sedan;*/

};

#endif
