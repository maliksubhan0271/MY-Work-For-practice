#include <iostream>
using namespace std;
int main()
{
     int a=20;
    cout << "The value of a: " <<a<< endl;
    int temp;
    a=30;
   temp = a;
    a = temp;
    cout << "The another value of a is: " <<a<< endl;
    return 0;
}
