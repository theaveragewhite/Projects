/*
Name: Colton Owenby
Class: 1021
Date: 1/23/2023
Desc:Calculates how many points you will receive based off of number of bike rides you have taken to campus
Time: 1 hour
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
  int bike; // Inputs number of times youve taken the bike to campus
  int points; // Number of points given to the rider based off of rides bike rides taken.

    cout << "How many bike rides have you taken to campus?" << endl;
    cin >> bike;

    while (bike < 0)
    {
      cout << "The input was invalid and please enter a new number." << endl;
      cin >> bike;
    }

    switch (bike)
    {
      case 0:
      points = 0;
      break;

      case 1:
      points = 3;
      break;

      case 2:
      points = 10;
      break;

      case 3:
      points = 15;
      break;

      case 4:
      points = 30;
      break;

      default:
      points = 50;
      break;
      }
      cout << "You earned " << points << " points this semester." << endl;

  return 0;
}
