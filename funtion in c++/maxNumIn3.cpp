#include <iostream>
using namespace std;
int findNum(int a, int b, int c){
    
    if(a>b && a>c){
        cout << "a is a max number: " << a << endl;
    }
    else if(b > a && b > c){
        cout << "b is a max number: "<< b << endl;
    }
    else{
        cout << "c is a max number: " << c << endl;
    }
}    
    int main()
    {
        int a,b,c;
        cout << "Enter a value of a: ";
        cin >> a;
        cout << "Enter a value of b: ";
        cin >> b;
        cout << "Enter a value of c: ";
        cin >> c;
        findNum (a,b,c);
        return 0;

    }
