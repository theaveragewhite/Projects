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
    string firstName;
    string lastName;
    string address;
    string email;
    string college;
    string administration;
  public:
    Employee() = default;
    Employee(string fn, string ln, string a, string e, string c, string a);
    void setFirstName(string fn);
    void setLastName(string ln);
    void setAddress(string a);
    void setEmail(string e);
    void setCollege(string c)
    void setadministration(string a)
    string getFirstName();
    string getLastName();
    string getAddress();
    string getEmail();
    string getCollege();
    string getAdministration();
};

#endif
