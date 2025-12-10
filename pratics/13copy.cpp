#include<iostream>
using namespace std;
int main()
{
    int arr[7],count=0;
    for(int i=0; i<7;i++){
        cout <<"Enter a value"<< i+1 << ":";
        cin>> arr[i];
    }
    for(int i=0; i<7;i++){
        if(arr[i]<50){
        cout << "Valur less than 50: "<<arr[i]<<endl;
        count++;  
        }
    }
    cout << "cout the value who less 50: "<< count<<endl;
}