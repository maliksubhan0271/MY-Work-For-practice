#include <iostream>
using namespace std;
int Square(int x){
    return x * x;
}
int main()
{
    int x;
    cout << "Enter a value of x: ";
    cin >> x;
    int Mult = Square(x);// jb be kise function kpo call kqrne ha 
    // to kise variable ma store kar ky e call ho ge ....
    cout <<"Square is: "<< Mult;
    return 0;
}