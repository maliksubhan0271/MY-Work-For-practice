#include <iostream>
using namespace std;
const float PI = 3.1417;
int main() {
    float area, R, circumference;
    cout << "Enter a redius: ";
    cin>> R;
    area = PI* R*R;
    cout << "Area of circle is "<<area<<endl;
    circumference = 2*PI*R;
    cout << "Circumference of circle is: "<<circumference;
    return 0;
}
