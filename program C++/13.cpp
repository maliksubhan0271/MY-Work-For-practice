#include <iostream>
using namespace std;
float const PI = 3.1417;
int main() {
    int R;
    float area;
    cout << "ENter a value of radius: ";
    cin >> R;
    area = PI * R*R;
    cout << "Area = " <<area<<endl;
    return 0;
}
