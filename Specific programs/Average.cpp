#include <iostream>
using namespace std;
float average(float a, float b, float c){
    
    int sum = a+ b + c;
    cout << "Sum is: " << sum << endl;
    return sum/3.0;
}
int main ()
{
    int a,b,c;
    cout << "Enter a value of a: ";
    cin >> a;
    cout << "Enter a value of b: ";
    cin >> b;
    cout << "Enter a value of c: ";
    cin >> c;
    int total = average (a,b,c);
   
    cout << "Avergae is: " << total<< endl;
    return 0;
}