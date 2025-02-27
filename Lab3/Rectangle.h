#ifndef Rectangle_h
#define Rectangle_h

class Rectangle
{
  private:
     double length;
     double width;
  public:
    Rectangle();
    Rectangle(int, int);
    bool setLength(double length);
    bool setWidth(double width);
    double getLength();
    double getWidth();
    double calcArea();
};

#endif
