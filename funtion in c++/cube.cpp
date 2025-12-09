#include <iostream>
using namespace std;
int cube(int n){
    return n * n* n;
}
int main()
{
    int n;
    cout << "Enter a value of n: ";
    cin >> n;
    cout << "Cube is: " << cube(n);
    return 0;
}