#include<iostream>
using namespace std;
int checkEvenOrOdd(int n){
    if(n%2==0){
        cout << "Number is Even: ";
        return n;
    }
    else{
        cout << "Number is Odd: ";
        return n;
    }
}
int main ()
{
    int n;
    cout << "Enter a value of n: ";
    cin >> n;
    checkEvenOrOdd(n);
    return 0;
}