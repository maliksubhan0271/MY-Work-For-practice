#include <iostream>
using namespace std;
int main(){
    int sum=0,n ;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=0; i<=n; i++){
        
        if(i%2==0)
        cout << i<< endl;

        sum = sum + i;
    }
    
    cout << "Total sum is: " << sum;
    return 0;
}