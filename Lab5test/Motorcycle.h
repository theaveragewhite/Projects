/*  Carl Brandenburg
    February 20 2023
    CPSC 1021-005
    Motorcycle class declaration.

*/

// Motorcycle.h is the class specification file

#ifndef MOTORCYCLE_H_
#define MOTORCYCLE_H_

class Motorcycle
{
  private:
    string make {};
    string model {};
    int year {};
    string engineSize {};
    string color {};

  public:
    // Default constructor
    Motorcycle() = default;

    // Parameter constructor
    Motorcycle(string ma, string mo, int y, string eS, string co);

    // Setters
    void setMake(string ma);
    void setModel(string mo);
    void setYear(int y);
    void setEngineSize(string eS);
    void setColor(string co);

    // Getters
    string getMake();
    string getModel();
    int getYear();
    string getEngineSize();
    string getColor();

};

#endif
