#include <iostream>
using namespace std;
int main()
{
    int sum=0, num;
    float average;
    for(int i=0; i<10; i++){
        cout << "Enter a num: ";
        cin >> num;
         sum = sum + num;
         average = sum/10.0;
    }
             average = sum/10.0;

            cout << "Ttoal average is: "<< average;

    return 0;
}