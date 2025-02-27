/*
Name: Colton Owenby
Class: 1020
Date: 1/28/2023
Desc: Determines the length of time need to isolate depending on your test results and vaccination status
Time: 8 hours
*/

#include "Date.h"
#include "calcDays.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>
#include <string>
using namespace std;



int main()
{
    char result; //determines if user is positive or negative
    char exposed; //determines if the user was exposed to covid with a negative test
    char secondDose; //determines if the user has the second dose

    cout << "Enter P if you have tested positive for covid.\nEnter N if you have tested negative for covid." << endl;
    cin >> result;

    if(result == 'N' || result == 'n')
    {
        cout << "Test result: negative" << endl;
        cout << "Exposed to positive case: Y/N?" << endl;
        cin >> exposed;

        if(exposed == 'N' || exposed == 'n')
        {
            cout << "Length of isolation: 0 Days" << endl;
        }
        else if(exposed == 'Y' || exposed == 'y')
        {
            int monthDateExposed = 0, dayDateExposed = 0, yearDateExposed = 0;
            cout << "Date exposed to positive case:" << endl;
            cout << "Month: ";
            cin >> monthDateExposed;
            cout << "Day: ";
            cin >> dayDateExposed;
            cout << "Year: ";
            cin >> yearDateExposed;
            //creates object for dateExposed
            Date dateExposed(dayDateExposed, monthDateExposed, yearDateExposed);
            cout << dateExposed.showDate() << endl;
            cout << "Second vaccination dose received:  Y/N?" << endl;
            cin >> secondDose;

            if(secondDose == 'N' || secondDose == 'n')
            {
              cout << "Vaccination status at time of exposure: not fully vaccinated"<< endl;
              cout << "Length of isolation: 10 days" << endl;
            }

            else if(secondDose == 'Y' || secondDose == 'y')
            {
              int monthDateSecondDose = 0,dayDateSecondDose = 0,yearDateSecondDose = 0;
              cout << "Date second vaccination dose received: " << endl;
              cout << "Month: ";
              cin >> monthDateSecondDose;
              cout << "Day: ";
              cin >> dayDateSecondDose;
              cout << "Year: ";
              cin >> yearDateSecondDose;
              //creates object for dateSecondDose
              Date dateSecondDose(dayDateSecondDose, monthDateSecondDose, yearDateSecondDose);
              cout << dateSecondDose.showDate() << endl;

              int diff = calcDays(dateExposed, dateSecondDose);

              if(diff >= 14)
              {
                cout << "Vaccination status at time of exposure: vaccinated" << endl;
                cout << "Length of isolation: 5 days." << endl;
              }

              else if(diff < 14)
              {
                cout << "Vaccination status at time of exposure: not vaccinated" << endl;
                cout << "Length of isolation: 10 days." << endl;
              }
            }
          }
    }

    else if(result == 'P' || result == 'p')
    {
      int monthDatePositive = 0,dayDatePositive = 0,yearDatePositive = 0;
      cout << "Test result: positive" << endl;
      cout << "Date tested positive:" << endl;
      cout << "Month: ";
      cin >> monthDatePositive;
      cout << "Day: ";
      cin >> dayDatePositive;
      cout << "Year: ";
      cin >> yearDatePositive;
      //creates object for datePositive
      Date datePositive(dayDatePositive, monthDatePositive, yearDatePositive);
      cout << datePositive.showDate() << endl;
      cout << "Length of isolation: 5 days" << endl;
    }
    return 0;
}
