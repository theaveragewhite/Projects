/*  Carl Brandenburg
    Colton Owenby
    Jaden Naylor
    Ryan Lamantia

    February 20 2023
    CPSC 1021-005
    Program to Print a Receipt for a Parking Permit.

*/

#include <iostream>
#include <string>
#include <sstream>

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


int main()
{
  int input;
  string n, a, e, custInfo1, custInfo2;
  do{
  cout << "What is your permit type? " << endl;
  cout << "1 : Commuter" << endl;
  cout << "2 : Employee" << endl;
  cout << "3 : Student" << endl;
  cout << "4 : Vendor" << endl;
  cin >> input;
    }while ((input != 1) && (input !=2) && (input != 3) && (input != 4));

  cout << endl;
  cout << "What is your full name?" << endl;
  cin.ignore();
  getline(cin, n);
  cout << "What is your address?" << endl;
  getline(cin, a);
  cout << "What is your email?" << endl;
  getline(cin, e);

  if(input == 1)
  {
    //string dis, p;
    cout << "What is your distance away from campus? (xx miles)" << endl;
    getline(cin, custInfo1);
    cout << "What is your phone number" << endl;
    getline(cin, custInfo2);
    Visitor visitor {n, a, e, custInfo1, custInfo2};

  }
  else if(input == 2)
  {
    //string c, ad;
    cout << "What College do you work for?" << endl;
    getline(cin, custInfo1);
    cout << "What Administration are you in?" << endl;
    getline(cin, custInfo2);
    Employee employee {n, a, e, custInfo1, custInfo2};
  }
  else if(input == 3)
  {
    //string gs, ID;
    cout << "What year of college are you? (Freshman, Sophmore, etc.)" << endl;
    getline(cin, custInfo1);
    cout << "What is your student ID number?" << endl;
    getline(cin, custInfo2);
    Student student {n, a, e, custInfo1, custInfo2};
  }
  else if(input == 4)
  {
    //string s, y;
    cout << "What your Company's Name?" << endl;
    getline(cin, custInfo1);
    cout << "How many years have you worked for the college?" << endl;
    getline(cin, custInfo2);
    Vendor vendor {n, a, e, custInfo1, custInfo2};
  }



  int input2;
  int y;
  string m, d, vehicleInfo1, vehicleInfo2;
  do{
    cout << "What is your vehicle type? " << endl;
    cout << "1 : Motorcycle" << endl;
    cout << "2 : Truck" << endl;
    cout << "3 : Sportscar" << endl;
    cout << "4 : Sedan" << endl;
    cin >> input2;
    cout << endl;
  }while ((input2 != 1) && (input2 !=2) && (input2 != 3) && (input2 != 4));

  cout << "What is the make of your vehicle?" << endl;
  cin.ignore();
  getline(cin, m);
  cout << "What is the model of your vehicle?" << endl;
  getline(cin, d);
  cout << "What is the year of your vehicle?" << endl;
  cin >> y;

  if(input2 == 1)
  {
    //string e, c;
    cout << "What is the engine size in your vehicle? (cc)" << endl;
    getline(cin, vehicleInfo1);
    cout << "What is the color of your vehicle?" << endl;
    getline(cin, vehicleInfo2);
    Motorcycle motorcycle {m, d, y, vehicleInfo1, vehicleInfo2};
  }
  else if(input2 == 2)
  {
    //string g, t;
    cout << "What is the MPG of your vehicle?" << endl;
    cin.ignore();
    getline(cin, vehicleInfo1);
    cout << "What kind of transmission does your vehicle have?" << endl;
    getline(cin, vehicleInfo2);
    Truck truck {m, d, y, vehicleInfo1, vehicleInfo2};
  }
  else if(input2 == 3)
  {
    //string exhaustDB, bodyS;
    int bodySInput;
    cout << "How loud is the exhaust of your vehicle? (decibels)" << endl;
    cin.ignore();
    getline(cin, vehicleInfo1);

    do
    {
      cout << "What is the body style of your vehicle?" << endl;
      cout << "1: Coupe\n2: Roadster\n3: Hatchback\n4: Other\n";
      cin >> bodySInput;
    }while((bodySInput != 1) && (bodySInput != 2) && (bodySInput != 3) && (bodySInput != 4));

    if(bodySInput == 1)
    {
      vehicleInfo2 = "Coupe";
    }
    else if(bodySInput == 2)
    {
      vehicleInfo2 = "Roadster";
    }
    else if(bodySInput == 3)
    {
      vehicleInfo2 = "Hatchback";
    }
    else if(bodySInput == 4)
    {
      cout << "Enter your vehicle's body style" << endl;
      getline(cin, vehicleInfo2);
    }
    Sports sports {m, d, y, vehicleInfo1, vehicleInfo2};
  }

  else if(input2 == 4)
  {
  //string w, e;
  cout << "How heavy is your vehicle? (lbs)" << endl;
  cin.ignore();
  getline(cin, vehicleInfo1);
    do
    {
      cout << "Is your vehicle Electric?" << endl;
      cout << "Yes or No" << endl;
      getline(cin, vehicleInfo2);
    } while((vehicleInfo2 != "Yes") && (vehicleInfo2 != "yes") && (vehicleInfo2 != "No") && (vehicleInfo2 != "no"));

      Sedan sedan {m, d, y, vehicleInfo1, vehicleInfo2};

  }

  int input3 = 0;

  //while ((input3 != 1) && (input3 != 2) && (input3 != 3))
  //{
    //cout << "Please reenter a number 1-3" << endl;
    cout << "How long will you have your permit?" << endl;
    cout << "1: Annual" << endl;
    cout << "2: Semester" << endl;
    cout << "3: One-Day" << endl;
    cin >> input3;
  //}

  Invoice invoice;
  invoice.setCustomerType(input);
  invoice.setVehicleType(input2);
  invoice.setPermitType(input3);
  invoice.setDiscount(custInfo1, 'c', 1);
  invoice.setDiscount(custInfo2, 'c', 2);
  invoice.setDiscount(vehicleInfo1, 'v', 1);
  invoice.setDiscount(vehicleInfo2, 'v', 2);
  invoice.setServiceCharge(custInfo1, 'c', 1);
  invoice.setServiceCharge(custInfo2, 'c', 2);
  invoice.setServiceCharge(vehicleInfo1, 'v', 1);
  invoice.setServiceCharge(vehicleInfo2, 'v', 2);

  invoice.printReceipt(n, a, e, custInfo1, custInfo2, m, d, y, vehicleInfo1, vehicleInfo2);

  return 0;
}
