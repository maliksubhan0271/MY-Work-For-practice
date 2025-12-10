#include <iostream>
using namespace std;
int main() {
    int num,result;
    cout << "Enter a number: ";
    cin>>num;
    
    for(int i=1; i<=10; i++){
    result = num * i ;
    cout << num<<"*"<<i<<"="<<result<<endl;
    }
    return 0;
}
