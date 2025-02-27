#include <iostream>
using namespace std;

void my_int_func(int x) {
   cout << x << endl;
}

int main( ){
   void (*foo)(int);
   foo = &my_int_func;

   foo(10);
   (*foo)(3);
   (*foo)(8);
   foo(1);

   return 0;
}
