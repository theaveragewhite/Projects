#ifndef date_h
#define date_h
#include <string>
using std::string;

class Date {
private:
    int day = 1;
    int month = 1;
    int year = 2021;
public:
    Date() = default;
    Date(int d, int m, int y);
    bool setDay(int d);
    bool setMonth(int m);
    bool setYear(int y);
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    string showDate();
};

#endif
