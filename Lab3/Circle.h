#ifndef Circle_h
#define Circle_h

class Circle
{
  private:
    double radius;
  public:
    Circle();
    Circle(int);
    bool setRadius(double radius);
    double getRadius();
    double calcArea();

};

#endif
