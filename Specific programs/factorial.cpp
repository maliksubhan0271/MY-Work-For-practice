#include <iostream>
using namespace std;
int fictorial (int n){
    int fact = 1;
    for(int i=1; i<=n; i++)
    fact = fact * i;
    return fact;
}
int main()
{
    int n;
    cout << "Value of n: ";
    cin >> n;
    cout << "Fictorial is: " << fictorial (n);

    return 0;
}