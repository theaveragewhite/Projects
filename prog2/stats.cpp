#include "stats.h"

Stats::Stats()
{
  num.resize(100);
  fileName = "";
}

Stats::Stats(string fileName)
{
  ifstream myFile(fileName);
  if(myFile.is_open())
  {
    int counter = 0;
    while(myFile >> counter)
    {
      num.push_back(counter);
    }
    myFile.close();
  }
}


int Stats::capacity()
{
  return num.capacity();
}


int Stats::count()
{
  return num.size();
}


int Stats::countEven()
{
  int countE = 0;
    for(unsigned int i = 0; i < num.size(); i++)
    {
      if(num[i]%2 == 0)
      {
        countE++;
      }
    }
    return countE;
}


int Stats::countOdd()
{
  int countO = 0;
   for(unsigned int i = 0; i < num.size(); i++)
   {
     if(num[i]%2 == 1)
     {
       countO++;
     }
   }
   return countO;
}


int Stats::countFib()
{
  float countF = 0.0;
    for (unsigned int i = 0; i < num.size(); i++)
    {
        if (num[i] == ((num[i] -1) + (num[i]-2)))
            countF ++;
    }
    return countF;
}


float Stats::avgAll()
{
  float avgA = 0.0;
  float sum = 0.0;

    for(unsigned int i = 0; i < num.size(); i++)
    {
      sum += num[i];
      avgA ++;
    }

    return avgA/sum;
}


float Stats::avgEven()
{
  float avgE = 0.0;
  float sum = 0.0;
  for(unsigned int i = 0; i < num.size(); i++)
  {
    if(num[i] % 2 == 0)
    {
      sum += num[i];
      avgE++;
    }
  }
  return avgE / sum;
}


float Stats::avgOdd()
{
  float avgO = 0.0;
  float sum = 0.0;
    for(unsigned int i = 0; i < num.size(); i++)
    {
      if(num[i] % 2 == 1)
      {
        sum += num[i];
        avgO++;
      }
    }
    return avgO / sum;
}


float Stats::avgFib()
{
  double avgF = 0.0;
  double sum = 0.0;
  double final;
  for(unsigned long int i = 0; i < num.size(); i++)
  {
    if(num[i] == ((num[i] - 1) + (num[i] - 2)))
    {
      sum += num[i];
      avgF ++;
    }

  }
  setprecision(20);
  final = sum / avgF;
  return final;
}
