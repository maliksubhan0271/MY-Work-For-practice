#include <iostream>
using namespace std;
const int month_per_year = 12;
int main()
{
    int year;
    cout << "Enter a year";
    cin >> year;
    int month = year * month_per_year;
    cout << "total number of month =" << month << endl;
    return 0;
}