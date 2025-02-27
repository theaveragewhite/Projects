#ifndef ACCUM_H_
#define ACCUM_H_

#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

template <typename T>
T accum(vector<T> v)
{
  T sum = T();
  for (auto iter = v.begin(); iter != v.end(); iter ++)
  {
    sum += *iter;
  }

  return sum;
}



#endif // ACCUM_H_
