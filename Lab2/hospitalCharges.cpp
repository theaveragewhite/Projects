/*
Name: Colton Owenby
Class: 1021
Date: 1/31/2023
Desc: Calculates the total cost of an inpatient and an outpatient.
Time: 3 hour
*/

#include "calcTotalCharges.h"
#include "validateUserInput.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    char patient; //Determines if the user is an inpatient or outpatient.
    int days = 0; //Number of days spent at the hospital.
    double roomRate = 0; //The cost of the room per day.
    double serviceCharges = 0; //Service charges from the hospital.
    double medCharges = 0; //Medical charges from the hospital.
    double total; //Total amount of charges.

    cout << "This program will calculate a patient's hospital charges." << endl;

        cout << "Enter I for in-patient or O for out-patient: ";
        cin >> patient;


        while (patient != 'I' && patient != 'O')
        {
            cout << "ERROR Please enter I for in-patient or O for out-patient:" << endl;
            cin >> patient;
        }


        if(patient == 'O')
        {
            do
            {
                cout << "Lab fees and other service charges ($): ";
                cin  >> serviceCharges;
            }while(!validateUserInput(serviceCharges));

            do
            {
              cout << "Medication charges ($): ";
              cin >> medCharges;
            }while(!validateUserInput(medCharges));

            total = calcTotalCharges(serviceCharges, medCharges);
            cout << "Your total hospital bills is $" << fixed << std::setprecision(2) << total << endl;
        }


        else if(patient == 'I')
        {
            do
            {
                cout << "Number of days in the hospital: ";
                cin >> days;
            }while(!validateUserInput(days));

            do
            {
                cout << "Daily room rate ($): ";
                cin >> roomRate;
            }while(!validateUserInput(roomRate));

            do
            {
                cout << "Lab fees and other service charges ($): ";
                cin  >> serviceCharges;
            }while(!validateUserInput(serviceCharges));

            do
            {
                cout << "Medication charges ($): ";
                cin >> medCharges;
            }while(!validateUserInput(medCharges));

            total = calcTotalCharges(days, roomRate, serviceCharges, medCharges);
            cout << "Your total hospital bills is $" << fixed << std::setprecision(2) << total << endl;

        }

return 0;
}
