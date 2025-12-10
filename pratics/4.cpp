#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter a marks: ";
    cin >> marks;
    if (marks >= 89){
        cout << "A+ grade.";
    }
    else if(marks >= 80){
        cout << "A Grade.";
    }
    else if(marks >=70){
        cout << "B grade";
    }
    else if(marks >= 60){
        cout << "C grade";
    }
    else if(marks >= 50)
    {
        cout << "D grade";
    }
    else{
        cout << "Fail";
    }
    return 0;
}