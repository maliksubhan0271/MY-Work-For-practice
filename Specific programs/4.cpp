#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a any character: ";
    cin >> ch;
    if((ch>='A')&&(ch<='Z'))
    {
        cout << "YOu enter a Capital latter";
    }
    else if((ch>='a')&&(ch<='z'))
       { cout << "You enter a small latter"; 
       }
    else if ((ch>='0')&&(ch<='9')) 
        {
            cout << "You enter a digits";
        }     
    else
    {
        cout << "you enter a symbol";
    }    
    return 0;
}