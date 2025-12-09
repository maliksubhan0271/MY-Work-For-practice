#include <iostream>
using namespace std;
int main() {
    int h,m,s,Sec,hours,mint;
    cout <<"Enter a time in hours, mints and sec: ";
    cin >>h>>m>>s;
     hours= h*60*60;
     mint= m*60;
     Sec = hours+mint;
    cout << "Total second= "<<Sec<<endl;
    return 0;
}
