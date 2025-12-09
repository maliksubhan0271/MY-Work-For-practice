#include <iostream>
using namespace std;
float const PI = 3.1417;
int main() {
    int R,H;
    float volume;
    cout << "Enter a value of Radius and height: ";
    cin >>R>>H;
    cout << "the value of Radius is "<<R<<" and the value of height is: "<<H<<endl;
    volume = PI * R*R * H;
    cout << "volume= "<<volume<<endl;
    return 0;
}
