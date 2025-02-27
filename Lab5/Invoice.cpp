#include "Visitor.h"
#include "Employee.h"
#include "Student.h"
#include "Vendor.h"

#include "Motorcycle.h"
#include "Truck.h"
#include "Sports.h"
#include "Sedan.h"

#include "Invoice.h"

int main()
{
  int input;
  do{
  cout << "What is your permit type? " << endl;
  cout << "1 : Visitor" << endl;
  cout << "2 : Employee" << endl;
  cout << "3 : Student" << endl;
  cout << "4 : Vendor" << endl;
  cin >> input;
    }while ((input != 1) || (input !=2) || (input != 3) || (input != 4));

    if(input == 1)
    {
      string fn, ln, a, e, d, p;
      Visitor visitor(fn, ln, a, e, d, p);
      cout << "What is your first name?" << endl;
      cin >> fn;
      cout << "What is your last name?" << endl;
      cin >> ln;
      cout << "What is your address?" << endl;
      cin >> a;
      cout << "What is your email?" << endl;
      cin >> e;
      cout << "What is your distance away from campus?" << endl;
      cin >> d;
      cout << "What is your phone number" << endl;
      cin >> p;
    }
    if(input == 2)
    {
    string fn, ln, a, e, c, a;
    Employee Employee(fn, ln, a, e, c, a);
    cout << "What is your first name?" << endl;
    cin >> fn;
    cout << "What is your last name?" << endl;
    cin >> ln;
    cout << "What is your address?" << endl;
    cin >> a;
    cout << "What is your email?" << endl;
    cin >> e;
    cout << "What college are you in?" << endl;
    cin >> c;
    cout << "What administration are you in?" << endl;
    cin >> ad;
    }
    if(input == 3)
    {
      string fn, ln, a, e, dg, es;
      Student Student(fn, ln, a, e, dg, es);
      cout << "What is your first name?" << endl;
      cin >> fn;
      cout << "What is your last name?" << endl;
      cin >> ln;
      cout << "What is your address?" << endl;
      cin >> a;
      cout << "What is your email?" << endl;
      cin >> e;
      cout << "When is your graduation date?" << endl;
      cin >> dg;
      cout << "What is your enrollment status?" << endl;
      cind >> es;

    }
    if(input == 4)
    {
      Vendor Vendor;
      string fn, ln, a, e, sn, ye;
      cout << "What is your first name?" << endl;
      cin >> fn;
      cout << "What is your last name?" << endl;
      cin >> ln;
      cout << "What is your address?" << endl;
      cin >> a;
      cout << "What is your email?" << endl;
      cin >> e;
      cout << "What is your company name?" << endl;
      cin >> sn;
      cout << "How many years have you been employed?" << endl;
      cin >> ye;
    }
    do{
      cout << "What is your vehicle type? " << endl;
      cout << "1 : Motorcycle" << endl;
      cout << "2 : Truck" << endl;
      cout << "3 : Sportscar" << endl;
      cout << "4 : Sedan" << endl;
      cin >> input;
      }while ((input != 1) || (input !=2) || (input != 3) || (input != 4));

        if(input == 1)
        {

          string m, d, y, e, c;
          Motorcycle motorcycle(m, d, y, e, c);
          cout << "What is the make of your vehicle?" << endl;
          cin >> m;
          cout << "What is the model of your vehicle?" << endl;
          cin >> d;
          cout << "What is the year of your vehicle?" << endl;
          cin >> y;
          cout << "What is the engine in your vehicle?" << endl;
          cin >> e;
          cout << "What is the color of your vehicle?" << endl;
          cin >> c;
        }
        else if(input == 2)
        {
          {
            string m, d, t;
            int y;
            double g;
            Truck Truck(m, d, g, y, t);
            cout << "What is the make of your vehicle?" << endl;
            cin >> m;
            cout << "What is the model of your vehicle?" << endl;
            cin >> d;
            cout << "What is the year of your vehicle?" << endl;
            cin >> y;
            cout << "What is the mpg of your vehicle?" << endl;
            cin >> g;
            cout << "What is the transmission of your vehicle?" << endl;
            cin >> t;
          }
        }
        else if(input == 3)
        {
          string m, d, y, nd, nhp;
          Sportscar Sportscar(m, d, y, nd, nhp);
          cout << "What is the make of your vehicle?" << endl;
          cin >> m;
          cout << "What is the model of your vehicle?" << endl;
          cin >> d;
          cout << "What is the year of your vehicle?" << endl;
          cin >> y;
          cout << "What is the number of doors on your vehicle?" << endl;
          cin >> nd;
          cout << "What is the horsepower of your vehicle?" << endl;
          cin >> nhp;
        }
        else if(input == 4)
        {
          string m, d, y, r, w;
          Sedan Sedan(m, d, y, r, w);
          cout << "What is the make of your vehicle?" << endl;
          cin >> m;
          cout << "What is the model of your vehicle?" << endl;
          cin >> d;
          cout << "What is the year of your vehicle?" << endl;
          cin >> y;
          cout << "What is the weight of your vehicle?" << endl;
          cin >> r;
          cout << "Is your vehicle electric?" << endl;
          cin >> w;
        }


  string p;
  double d, sc;
  Invoice Invoice(p, d, sc);
  cout << "How long will you have your permit?" << endl;
  cout << "Semester" << endl;
  cout << "Annual" << endl;
  cout << "Daily" << endl;
  cin >> p;


  cout << "The total cost of your permit is" << permit() << endl;
  cout << "Your permit will display the following:" << endl;





  //if there are multiple words in a string (separated by spaces), use getLine




  return 0;
}
