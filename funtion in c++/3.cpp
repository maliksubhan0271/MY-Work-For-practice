#include <iostream>
using namespace std;
void swap(int a, int b){

    cout << "Enter a value of a: ";
    cin >> a;
    cout << "ENter a value of b: ";
    cin >> b; 

    cout << "a before swaping" << a<< endl;
    cout << "b before swaping" << b << endl;

    int temp;
    temp = a;
    a = b;
    b= temp;

    cout << "a after swaping" << a << endl;
    cout << "b after swaping" << b<< endl;
  }
 int main()
{
    int a,b;
    swap(a,b);
    return 0;
}