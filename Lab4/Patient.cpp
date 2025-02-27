/*
Name: Colton Owenby
Class: 1021
Date: 2/13/2023
Desc: Calculates inpatient on outpatient totals
Time: 3 hours
*/
#include "Patient.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/*Patient::Patient(char p, double s, double m)
{
  patient = p;
  serviceCharges = s;
  medCharges = m;
  p = 'o';
  s = 0;
  m = 0;
}

Patient::Patient(char p, int d, double r, double s, double m)
{
  patient = p;
  days = d;
  roomRate = r;
  serviceCharges = s;
  medCharges = m;
  p = 'o';
  d = 0;
  r = 0;
  s = 0;
  m = 0;
}*/

bool Patient::validateInput(int)
{
  if(days < 0)
  {
    return false;
  }
  else
  {
    return true;
  }
}
bool Patient::validateInput(double)
{
  if(roomRate < 0 || serviceCharges < 0 || medCharges < 0)
  {
    return false;
  }
  else
  {
    return true;
  }
}


bool Patient::setPatientType(char p)
{
  patient = p;
  return true;
}

char Patient::getPatientType()
{
  return patient;
}

bool Patient::setDays(int d)
{
  if(validateInput(d))
  {
  days = d;
  }
  return true;
}

int Patient::getDays()
{
  return days;
}

bool Patient::setRate(double r)
{
  roomRate = r;
  return true;
}

double Patient::getRate()
{
  return roomRate;
}

bool Patient::setServices(double s)
{
  serviceCharges = s;
  return true;
}

double Patient::getServices()
{
  return serviceCharges;
}

bool Patient::setMedication(double m)
{
  medCharges = m;
  return true;
}

double Patient::getMedication()
{
  return medCharges;
}

double Patient::calcTotalCharges()
{
  if(patient == 'I')
  {
  return ((days*roomRate)+serviceCharges+medCharges);//Calculates inpatient total charges.
  }
  else if(patient == 'O')
  {
  return serviceCharges+medCharges; //Calculates outpatient total charges.
  }
  else
  {
    return false;
  }
}
