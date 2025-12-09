#include<iostream>
using namespace std;
const float Kilometer_per_mile = 1.609;
int main()
{
    float Miles;
    cout << "Enter a distence in milies = ";
    cin >> Miles;
    float Kilometer;
    Kilometer = Miles * Kilometer_per_mile;
    cout << "Distence in kilometer = " << Kilometer << endl;
    return 0;
}