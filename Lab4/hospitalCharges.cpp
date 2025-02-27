/*
Name: Colton Owenby
Class: 1021
Date: 2/13/2023
Desc: Calculates the total cost of an inpatient and an outpatient.
Time: 3 hour
*/

#include "Patient.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  char p = 'O'; //Determines if the user is an inpatient or outpatient.


    cout << "This program will calculate a patient's hospital charges." << endl;

        cout << "Enter I for in-patient or O for out-patient: ";
        cin >> p;


        while (p != 'I' && p != 'O')
        {
            cout << "ERROR Please enter I for in-patient or O for out-patient:" << endl;
            cin >> p;
        }


        if(p == 'O')
        {
          double s = 0; //Service charges from the hospital.
          double m = 0; //Medical charges from the hospital.
          Patient outPatient(p, s, m);
          outPatient.setPatientType(p);

            do
            {
                cout << "Lab fees and other service charges ($): ";
                cin  >> s;
            }while(!outPatient.setServices(s));

            do
            {
              cout << "Medication charges ($): ";
              cin >> m;
            }while(!outPatient.setMedication(m));

            cout << "Your total hospital bills is $" << fixed << std::setprecision(2) << outPatient.calcTotalCharges() << endl;
        }


        else if(p == 'I')
        {
          int d = 0; //Number of days spent at the hospital.
          double r = 0; //The cost of the room per day.
          double s = 0; //Service charges from the hospital.
          double m = 0; //Medical charges from the hospital.
          Patient inPatient(p, d, r, s, m);
          inPatient.setPatientType(p);
            do
            {
                cout << "Number of days in the hospital: ";
                cin >> d;
            }while(!inPatient.setDays(d));

            do
            {
                cout << "Daily room rate ($): ";
                cin >> r;
            }while(!inPatient.setRate(r));

            do
            {
                cout << "Lab fees and other service charges ($): ";
                cin  >> s;
            }while(!inPatient.setServices(s));

            do
            {
                cout << "Medication charges ($): ";
                cin >> m;
            }while(!inPatient.setMedication(m));

            cout << "Your total hospital bills is $" << fixed << std::setprecision(2) << inPatient.calcTotalCharges() << endl;

        }

return 0;
}
