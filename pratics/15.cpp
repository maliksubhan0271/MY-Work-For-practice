#include <iostream>
using namespace std;

int main() {
    int n,sum=0;
    cout <<"Enter a number: ";
    cin >> n;
    for(int i=0; i<n; i++){
        sum = sum + n;
    }
    cout << "Sum is: "<< sum <<endl;

    return 0;
}

