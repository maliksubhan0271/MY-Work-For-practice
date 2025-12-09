#include <iostream>
using namespace std;

int main() {
    float num= 15.58971, fractional;
    int integral;
    integral = (int)num;
    fractional = num - integral;
    cout << "Integral part is: "<<integral<<endl;
    cout<< "Fractional part is: "<<fractional<<endl;
    return 0;
}
