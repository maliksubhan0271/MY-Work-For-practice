#include <iostream>
using namespace std;
int main() {
    int num1,num2,result;
    char oprater;
    cout<< "Enter a num1: ";
    cin >>num1;
    cout <<"Enter a oprater: ";
    cin >>oprater;
    cout << "ENter a num2: ";
    cin >>num2;
    switch(oprater){
        case '+':
        result=num1 + num2;
        cout<<num1<< oprater<< num2 <<" = "<<result<<endl;
        break;
        case '-':
        result=num1 - num2;
        cout<<num1<<<< oprater<<<< num2 <<" = "<<result<<endl;
        break;
        case '*':
        result=num1 * num2;
        cout<<num1<< oprater<< num2 <<" = "<<result<<endl;
        break;
        case '/':
        result=num1 / num2;
        cout<<num1<< oprater<< num2 <<" = "<<result<<endl;
        break;
        case '%':
        result=num1 % num2;
        cout<<num1<< oprater<< num2 <<" = "<<result<<endl;
        break;
        deflut:
        cout << "Please enter a only interger number and using valid operater";
    }
    return 0;
}

