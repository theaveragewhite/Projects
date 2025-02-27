// This program demonstrates a static class member function.
// Adapted from Program 11-3 in textbook
#include <iostream>
#include <iomanip>
#include "budget2.h"        // For Budget class declaration
using namespace std; 

int main()
{
  const int N_DIVISIONS = 4;   
  
  // Get the budget requests for the main office
  cout << "Enter the main office's budget request: ";
  double amount;
  cin >> amount;

  // Call the static member function of the Budget class
  Budget::mainOffice(amount);

  // get current corporate budget
  //cout << "\nCurrent Requests (main office only): $ ";
  //cout << Budget::getCorpBudget() << endl;
  
  // Create instances of the Budget class	
  // and get the budget requests for each division  
  Budget divisions[N_DIVISIONS];
  for (int count = 0; count < N_DIVISIONS; count++)
    {
      double bud;
      
      cout << "Enter the budget request for division ";
      cout << (count + 1) << ": ";
      cin >> bud;
      divisions[count].addBudget(bud);
    }
  
  // Display the budget for each division
  cout << setprecision(2) << showpoint << fixed;
  cout << "\nHere are the division budget requests:\n";
  for (int count = 0; count < N_DIVISIONS; count++)
    {
      cout << "\tDivision " << (count + 1) << "\t$ ";
      cout << divisions[count].getDivBudget() << endl;
    }
  
  // Print total budget requests
  cout << "Total Requests (including main office): $ ";
  cout << Budget::getCorpBudget() << endl;  
  //cout << divisions[0].getCorpBudget() << endl;  // could also use dot operator now that instances of Budget exist

  return 0;
}
