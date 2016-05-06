#ifndef DATE_H
#define DATE_H

#include<iostream>
#include<cstdlib>

class Date
{
public:
    Date(int day, int month, int year);
    int getmonth();
    int getday();
    int getyear();
    int distance(Date *Date1);
private:
    int year;
    int month;
    int day;
};

std::istream& operator>>(std::istream& inputStream, Date& date);

#endif // DATE_H
