#include <iostream>
using namespace std;

int main() {
    float vi, t, a,S;
    cout << "Enter a value of vi,t,a: ";
    cin>>vi>>t>>a;

    S = vi* t + 1/2* a * t*t;
    cout << "S= "<<S<<endl;
    return 0;
}
