#include <iostream>
using namespace std;

int checkNum (int num){
    cout << "Enter a number: ";
    cin >> num;
    if(num > 0){
        cout << "num is positive: "<< endl;
        if (num % 2 ==0){
            cout << "Number is even:";
        }
        else {
            cout << "Number is odd:";
        }
    }
    else 
    {
        cout << "Number is a negative:";
    }
    return num;
}
int main()
{
    int num;
    checkNum(num);
    return 0;
}