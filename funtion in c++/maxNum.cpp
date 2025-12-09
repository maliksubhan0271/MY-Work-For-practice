#include<iostream>
using namespace std;
int maxNum(int a, int b){
    if (a > b){
        cout << "a is max number: "<< a<< endl;
        return a;
    }
    else{
        cout << "b is max number: "<< b << endl;
        return b;
    }
}
int main ()
{
    int a,b;
    cout << "Enter a value of a: ";
    cin >> a;
    cout << "Enter a value of b: ";
    cin >> b;
    maxNum(a,b);
    return 0;
    
}