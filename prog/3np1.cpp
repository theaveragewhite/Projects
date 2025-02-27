include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//int len3nplus1(int value);
//int sumSeq3nPlus1(int value);
//int longestSequence(int max);

bool isOdd(int n)
{
    if(n % 2 == 1)
    {
      return true;
    }
    else
    {
      return false;
    }
}

int len3nplus1(int value)
{
  int i = 0;
  while (value != 1){
        if (isOdd(value)){
            value = value * 3;
            value = value + 1;
            i++;
        }

        else if (!isOdd(value)){
            value = value / 2;
            i++;
        }
    }
  return i+1;
}

int sumSeq3nPlus1(int value)
{
  int total = value;

   while (value != 1){
       if (isOdd(value)){
           value = value * 3;
           value = value + 1;
           total += value;
       }
       else if (!isOdd(value)){
           value = value / 2;
           total += value;
       }
   }
   return total;
}
int longestSequence(int max)
{
  int num = 0;

  for (int i = 1; i <= max; i++){
      if (len3nplus1(i) > num){
          num = i;
      }
  }
  return num;
}
