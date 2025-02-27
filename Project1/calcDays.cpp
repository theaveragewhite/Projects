/*
Name: Colton Owenby
Class: 1020
Date: 1/28/2023
Desc: Determines the length of time need to isolate depending on your test results and vaccination status
Time: 8 hour
*/

#include "Date.h"
#include "calcDays.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <sstream>
#include <string>
using namespace std;

int calcDays(const Date& dateOne, const Date& dateTwo)
{

  int daysMonth[]{31,28,31,30,31,30,31,31,30,31,30,31}; //array of days in each month
  double daysDiff1;
  double daysDiff2;
  const double defaultDate =  (365 * 2021); //date used to subtract the daysDiff1 and daysDiff2 by
  int total;  //difference between daysDiff1 and daysDiff2

  //gets the number of days from the current year and the day
  daysDiff1 = (dateOne.getYear() * 365) + dateOne.getDay();
  daysDiff2 = (dateTwo.getYear() * 365) + dateTwo.getDay();

  //To start, set daysDiff1 to the year times days in a year and add the amount of days left over in the object



    /*
    if(dateOne.getYear() % 4 == 0)
    {
      daysDiff1 = (dateOne.getYear() + 366) + dateOne.getDay();
    }

    if(dateTwo.getYear() % 4 == 0)
    {
      daysDiff2 = (dateTwo.getYear() + 366) + dateTwo.getDay();
    }
    */


    //Loop through daysMonth, adding the current index's day count to daysDiff1

    for (int i = 0; i < dateOne.getMonth(); i++)
    {
        daysDiff1 = daysDiff1 + daysMonth[i-1];
        /*
        if(i <= dateOne.getMonth())
        {
          daysDiff1 = daysDiff1 - daysMonth[i];
        }
        */
    }




    //Do everything we did for daysDiff1 but for daysDiff2


    //Loop through daysMonth, adding the current index's day count to daysDiff2

    for (int i = 0; i < dateTwo.getMonth(); i++)
    {
        daysDiff2 = daysDiff2 + daysMonth[i-1];

        /*
        if(i <= dateTwo.getMonth())
        {
          daysDiff2 = daysDiff2 - daysMonth[i];
        }
        */
    }

    //subtract daysDiff1 and daysDiff2 from the defualt date.


    daysDiff1 = daysDiff1 - defaultDate;
    daysDiff2 = daysDiff2 - defaultDate;
    //cout << daysDiff1 << " " << daysDiff2 << endl;
    total = daysDiff1 - daysDiff2;

    //takes the absolute value of the total

    return abs(total);
}
