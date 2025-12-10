#include <iostream>
using namespace std;
int main()
{
    string pass, user;
    cout << "Enter a username: ";
    cin >> user;
    if (user == "admin"){
        cout << "Enter a password: ";
        cin >> pass;
        if (pass == "1234"){
            cout << "Password is correct: ";
        }
        else{
            cout << "Password is incorrect: ";
        }
    }
    else {
        cout << "username is incorrect: ";
    }
    return 0;
}