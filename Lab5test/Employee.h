#include <iostream>
#include <iomanip>
#include <cmath>
#include <string.h>
#include <string>
using namespace std;
#ifndef PersonalInfo_h
#define PersonalInfo_h

class Employee
{
  private:
    string name;
    string address;
    string email;
    string college;
    string administration;
  public:
    Employee() = default;
    Employee(string n, string a, string e, string c, string ad);

    void setName(string n);
    void setAddress(string a);
    void setEmail(string e);
    void setCollege(string c);
    void setAdministration(string ad);
    string getName();
    string getAddress();
    string getEmail();
    string getCollege();
    string getAdministration();
};

#endif
