#include<iostream>
using namespace std;
const int month_in_year = 12;
int main()
{
    int age;
    cout << "enter a age";
    cin >> age;
    int month = age * month_in_year;
    cout << "Total nomber of month =" << month << endl;
    return 0;
}
