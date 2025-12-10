#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Enter a value of these number: ";
    cin >> num1 >> num2 >> num3;
    if (num1 > num2 && num1 > num3 ){
        cout << num1 << "is greater.";
    }
    else if(num2 > num1 && num2 > num3){
        cout << num2 << "is grater.";
    }
    else{
        cout << num3 << "is grater.";
    }

    return 0;
}