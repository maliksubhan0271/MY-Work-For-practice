#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter a value of num1: ";
    cin >> num1;
    cout << "Enter a value of num2: ";
    cin >> num2;
    if(num1 > num2)
    {
        cout << "Num1 is greater: "<< num1;
    }
    else if(num2 > num1){
        cout << "num2 is greater: " << num2;
    }
    else{
       cout << "dono bara bar hay";

    }
    return 0;
}