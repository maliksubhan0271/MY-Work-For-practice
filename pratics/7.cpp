#include <iostream>
using namespace std;
int main()
{
    int age;
    bool citizan;
    cout << "ENter a age: ";
    cin >> age;
    if (age >= 18){
        cout << "You are citizan: (1 for yes or 0 for not): ";
        cin >> citizan;
        if(citizan){
            cout << "You are eligible for voting....";
        }
        else{
            cout << "You are not Eligible for voting bcz you are not citizan";
        }
    }
    else {
        cout << "You are not eligible for voting bcz you age is under 18.";
    }
}