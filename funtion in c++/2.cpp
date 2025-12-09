#include <iostream>
using namespace std;
int Sum (int a, int b){
     cout << "Enter a value of a: ";
    cin >> a;
    cout << "Enter a value of b: ";
    cin >> b;
     int result = a+b;
    return result;
}
int main()
{
    int a,b;
    int Total = Sum(a,b);
    cout << "sum is: "<<Total<<endl;
    return 0;
}