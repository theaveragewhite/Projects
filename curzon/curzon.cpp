#include <iostream>
#include <math.h>
using namespace std;

bool isCurzon(int number)
{
  long long p = pow(2,number) + 1;
  long long q = 2 * number + 1;
  return (!(p%q));
}

int main(int argc, char* argv[])
{
  int x;
  x = stoi(argv[1]);
  if(isCurzon(x)) cout << x << " is a Curzon number" << endl;
  else cout << x << " is not a Curzon number" << endl;
  return 0;
}
