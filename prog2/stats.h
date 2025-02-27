#ifndef STATS_H_
#define STATS_H_
#include <cmath>
#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
class Stats {
    private:
        vector <int> num;
        string fileName;
    public:
        Stats();
        Stats(string fileName);
        int capacity();
        int count();
        int countEven();
        int countOdd();
        int countFib();
        float avgAll();
        float avgEven();
        float avgOdd();
        float avgFib();
};

#endif
