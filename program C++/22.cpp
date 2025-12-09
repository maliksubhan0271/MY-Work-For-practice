#include <iostream>
using namespace std;
int main() {
    int age;
    float height;
    string name, gender;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout <<"Enter your height: ";
    cin>> height;
    cout <<"Enter your gender: ";
    cin>> gender;
    cout << "Student name is "<<name<< ". He is "<<age<<" year old.His gender is "<<gender <<" and his height is "<<height<< ".";
    
    return 0;
}
