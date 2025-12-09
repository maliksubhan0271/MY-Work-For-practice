#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    int result;
    cout << "Enter a value a = ";
    cin >> a;
    cout << "ENter a opertor ";
    cin >> op;
    cout << "Enter a value b = ";
    cin >> b;
    switch(op)
    {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        case '%':
            result = a % b;
            break;
        default:
            cout << "Invalid opertor";       
                    
    }
    cout << "result = " << result;
    return 0; 
} 