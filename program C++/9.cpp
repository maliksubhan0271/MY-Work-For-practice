#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout << "Enter the value of a,b,c,d = ";
    cin >> a >> b >> c >> d;
    if(a > b && a > c && a > d)
        cout << "a is a Miximum Number";
    else if (b > a && b > c && b > d)
        cout << "b is a Miximum Number";
    else if (c > a && c > b && c > d)
        cout << "c is a Miximum Number";
    else if (d > a && d > b && d > c)
        cout << "d is a Miximum Number";
        return 0;            

        
    
    
}