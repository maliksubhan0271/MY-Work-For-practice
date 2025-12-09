#include <iostream>
using namespace std;
int const month = 12;
int const day = 365;
int main() {
    int age=18, months, days;
    months = age*month;
    cout << "The total months in your age is: "<<months<<endl;
    days = age*day;
    cout << "The total days in your age is: "<<days<<endl;
    return 0;
}
