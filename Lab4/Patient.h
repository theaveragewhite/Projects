/*
Name: Colton Owenby
Class: 1021
Date: 2/13/2023
Desc: Header file for validateUserInput
Time: 3 hours
*/
#ifndef Patient_h
#define Patient_h

class Patient
{
  private:
    char patient = 'I'; //Determines if the user is an inpatient or outpatient.
    int days = 0; //Number of days spent at the hospital.
    double roomRate = 0; //The cost of the room per day.
    double serviceCharges = 0; //Service charges from the hospital.
    double medCharges = 0; //Medical charges from the hospital.
    bool validateInput(double);
    bool validateInput(int);
  public:
    Patient() = default;
    Patient(char p, double s, double m) :  patient{p}, serviceCharges{s}, medCharges{m} {}
    Patient(char p, int d, double r, double s, double m) : patient{p}, days{d}, roomRate{r}, serviceCharges{s}, medCharges{m} {}
    bool setPatientType(char p);
    bool setDays(int d);
    bool setRate(double r);
    bool setServices(double s);
    bool setMedication(double m);

    double calcTotalCharges();
    char getPatientType();
    int getDays();
    double getRate();
    double getServices();
    double getMedication();

};


#endif
