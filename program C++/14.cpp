#include <iostream>
using namespace std;
const float   inch = 25.4;
int main() {
    float mm, inch;
    
    cout << "Enter a value of milimeter: ";
    cin >> mm;
     inch = mm/25.4;
     cout<<"\n" <<mm<<" milimeter is equal to "<<inch <<" inch."<<endl;

    return 0;
}
