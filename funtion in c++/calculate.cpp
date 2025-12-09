#include <iostream>
using namespace std;
int calculate( char opertor, int num1, int num2){
 int result;
    switch (opertor){
        case '+':
        result = num1 + num2;
        break;
        case '-':
        result = num1 - num2;
        break;
        case '*':
        result = num1 * num2;
        break;
        case '/':
        result = num1 / num2;
        break;
        case '%':
        result = num1 % num2;
        break;
        default:
        cout << "Plz enter a Invalid opertor..." << endl;
        
    }
    return result;
}
int main()
{
    int num1, num2;
    char  opertor;
    cout << "Enter a num1: ";
    cin >> num1;
    cout << "Enter a opertor: ";
    cin >> opertor;
    cout << "Enter a num2: ";
    cin >> num2;
    int result = calculate(opertor,num1,num2);
    cout << "Calculate value is: " << result << endl;
    return 0;
}