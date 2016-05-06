#include "date.h"
#include <cmath>
Date::Date(int year, int month, int day)
{

    this->day = day;
    this->month = month;
    this->year = year;


}

int Date::distance(Date *date)
{
    int y = this->year;
    int m = this->month;
    int d = this->day;
    int d1 = date->getday();
    int m1 = date->getmonth();
    int y1 = date->getyear();
    if (m == 1 or m == 2)
    {
        m+=12;
        y-+1;

    }
    if (m1 == 1 or m1 == 2)
    {
        m1+=12;
        y1-+1;

    }
    int second;
    int first;
    second= 365*y + y/4
            -y/100 + y/400
            +d+(153*m+8)/5;
    first= 365*y1 + y1/4
            -y1/100 + y1/400
            +d1+(153*m1+8)/5;

    return std::abs(second-first);
}

int Date::getday()
{
    return this->day;
}
int Date::getmonth()
{
    return this->month;
}
int Date::getyear()
{
    return this->year;
}

std::istream& operator>>(std::istream& inputStream, Date& date)
{
    int day;
    int month;
    int year;
    char space;
    inputStream >> year >> space >> month >> space >> day;
    date = Date(year, month, day);
    return inputStream;
}
