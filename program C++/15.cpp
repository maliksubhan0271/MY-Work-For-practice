#include <iostream>
using namespace std;
int main() {
    int a=4, b=10;
    cout<<"Before interchange"<<endl;
    cout <<"a= "<<a<< "and b= "<<b<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<< "After interchanging"<<endl;
    cout << "a= "<<a<<" b= "<<b<<endl;
    return 0;
}
