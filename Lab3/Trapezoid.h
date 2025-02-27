#ifndef Trapezoid_h
#define Trapezoid_h

class Trapezoid
{
  private:
    double trapezoidBase1;
    double trapezoidBase2;
    double height;
  public:
    Trapezoid();
    Trapezoid(int, int, int);
    bool setBase1(double trapezoidBase1);
    bool setBase2(double trapezoidBase2);
    bool setHeight(double height);
    double getBase1();
    double getBase2();
    double getHeight();
    double calcArea();
};

#endif
