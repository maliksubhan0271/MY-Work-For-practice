#include <iostream>
using  namespace std;
int main() {
    int a,b,c,disc;
    cout << "Enter a value a,b,c: ";
    cin >>a>>b>>c;
    disc= b*b - 4*a*c;
    cout << "Disc= "<<disc;
    return 0;
}
