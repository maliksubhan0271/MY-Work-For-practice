#include<iostream>
using namespace std;
int main ()
{
    int a = 10 , b =70;
    
    cout << a <<endl;
    cout << b <<endl;

    a = a+b;
    b = a-b;
    a = a-b;
    cout<<a<<endl;
    cout<<b;
    return 0;
}