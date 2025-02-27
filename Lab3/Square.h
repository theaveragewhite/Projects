#ifndef Square_h
#define Square_h

class Square
{
  private:
    double side;
  public:
    Square();
    Square(int);
    bool setSide(double side);
    double getSide();
    double calcArea();
};

#endif
