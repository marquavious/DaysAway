#include <iostream>
#include "date.h"

using namespace std;

int main()
{
    Date Date1 =  Date(0, 0, 0);
    Date Date2 = Date(0, 0, 0);
    cout << "enter a date in format year/month/date)" << endl;
    cin >> Date1;
    cout << "enter in another date in format year/month/day" << endl;
    cin >> Date2;
    cout << "the distance between the two dates is: " << Date1.distance(&Date2) << endl;

}
