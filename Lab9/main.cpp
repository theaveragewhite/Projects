#include "accum.h"


int main()
{
  vector<int> v1;
  cout << "Enter 4 numbers: ";
  int number;
  for(int i = 0; i < 4; ++i)
  {
  cin >> number;
  v1.push_back(number);
  }
  cout << "The sum of the numbers is " << accum(v1) << endl;
  cout << "Enter 4 strings: ";
  vector<string> v2;
  string name;
  for(int j = 0; j < 4; ++j)
  {
  cin >> name;
  if(j < 3)
  {
  name = name + ", ";
  }
  v2.push_back(name);

  }
  cout << "The sum of the strings is " << accum(v2) << endl;

  return 0;
}
