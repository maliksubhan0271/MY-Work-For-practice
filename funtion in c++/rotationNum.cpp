#include<iostream>
using namespace std;
int main ()
{
    int number[5] = {1,2,3,4,5}, temp;
    cout << "Before number rotation" << endl;

    for(int i = 0; i<5; i++){
        cout << number[i];
    }
    
    temp = number[0];
    for(int i=0; i<4; i++){
        number[i]= number[i+1];
    }
    number[4] = temp;
    cout << endl<<"Number after rotation"<< endl;
    for(int i=0; i<5; i++){
        cout << number[i];
    }
    return 0;
}