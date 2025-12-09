#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a alphabet: ";
    cin >> ch;
    switch (ch)
    {
        case 'a':
        case 'A':
        cout << "it's a vawel";
        break;
        case 'e':
        case 'E':
        cout << "it's vaewl";
        break;
        case 'i':
        case 'I':
        cout << "it's a vowel";
        break;
        case 'o':
        case 'O':
        cout << "it's a vowel";
        break;
        case 'u':
        case 'U':
        cout << " it's a vowel";
        break;
        default:
        cout << "it's not a vowel";
    }
    return 0;
}