#include "Employee.h"

Employee::Employee(string n, string a, string e, string c, string ad)
{
  n = name;
  a = address;
  e = email;
  c = college;
  ad = administration;
}

void Employee::setName(string n)
{
  n = name;
}

void Employee::setAddress(string a)
{
  a = address;
}

void Employee::setEmail(string e)
{
  e = email;
}

void Employee::setCollege(string c)
{
  c = college;
}
void Employee::setAdministration(string ad)
{
  ad = administration;
}

string Employee::getName()
{
  return name;
}

string Employee::getAddress()
{
  return address;
}

string Employee::getEmail()
{
  return email;
}

string Employee::getCollege()
{
  return college;
}
string Employee::getAdministration()
{
  return administration;
}
