

// C++ program to illustrate Pointer Arithmetic in C++
#include <iostream>
using namespace std;

class OpClass{
private:
  int x {5};
public:
  OpClass()= default;
  OpClass(int val) : x{val} {}
//  int getA(){return a;}
OpClass operator+(OpClass r)
{OpClass sum;
sum.x = this->x + r.x;
return sum;
}
int getX()
{return x;}
};

int main()
{
OpClass a{1}, b{2}, c{0};
cout << a.getX();
cout << b.getX();
cout << c.getX();
c= a+b;
cout << c.getX();
    return 0;
}
