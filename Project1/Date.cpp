/*
Name: Colton Owenby
Class: 1020
Date: 1/28/2023
Desc: Determines the length of time need to isolate depending on your test results and vaccination status
Time: 8 hours
*/
#include "Date.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>
#include <string>
using namespace std;

Date::Date(int d, int m, int y)
{
   if ((!setMonth(m)) || (!setDay(d)) ||  (!setYear(y)))
   {
    day = 1;
    month = 1;
    year = 2021;
    }
}



bool Date::setMonth(int m)
{
  //Makes sure the month is in the range of 1-12
  if(m >= 1 && m <= 12)
  {
    month = m;
    return true;
  }

  else if(m <  1 && m > 12)
  {
    month = 1;
    return false;
  }

  return false;
}

bool Date::setDay(int d)
{
  int daysInMonth[] {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  //Makes sure the day in the month has the correct number of days
  if (d >= 1 && d <= daysInMonth[month-1])
  {
       day = d;
       return true;
  }

  else if (d < 1 && d > daysInMonth[month-1])
  {
    day = 1;
    return false;
  }
  return false;
}

bool Date::setYear(int y)
{
  if(y < 2021 || y > 2022)
  {
    year = 2021;
    return false;
  }
  else
  {
    year = y;
    return true;
  }
  //return false;
}

int Date::getDay() const
{
  return day;
}

int Date::getMonth() const
{
  return month;
}

int Date::getYear() const
{
  return year;
}


string Date::showDate()
{


  string d = to_string(day);
  string m = to_string(month);
  string y = to_string(year);
  string date;
  if(day >= 10 && month >= 10)
  {
    date = m + "/" + d + "/" + y;
  }
  else if(day < 10 && month < 10)
  {
    date = "0" + m + "/" + "0" + d + "/" + y;
  }
  else if(month < 10)
  {
    date = "0" + m + "/" + d + "/" + y;
  }
  else if(day < 10)
  {
    date = m + "/" + "0" + d + "/" + y;
  }
  return date;
}
