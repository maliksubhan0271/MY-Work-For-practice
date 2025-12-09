#include <iostream>
using namespace std;


void hello(string name){
   cout<<name<<endl;
}
int sum(int a,int b){
    return a +b;
}
void swap(int a,int b)
{
    cout<<"a before swapping:"<<a<<endl;
    cout<<"b  before swapping:"<<b<<endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"a after swapping"<<a<<endl;
    cout<<"b after swapping"<<b<<endl;

}
int main()
{
  int a = 10;
  int b = 30;
  int temp;
  cout << "a =" << a << endl;
  cout << "b =" << b << endl;
  temp = a;
  a = b;
  b = temp;
  cout << "a =" << a << endl;
  cout << "b =" << b << endl;

  int result=sum(5,6);
  cout<<"sum is"<<result<<endl;
 

  swap(a,b);
  hello("Subhan Naveed");
  hello("Subhan Qaiser");
 return 0;

}
