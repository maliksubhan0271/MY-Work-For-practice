#include <iostream>
#include<cmath>
using namespace std;
int main() {
    float area,a,b,c,s;
    cout << "Enter a value a,b,c: ";
    cin>>a>>b>>c;
    s = (a+b+c)/2;
    cout <<"s= "<<s<<endl;
    
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout<< "Area= "<<area<<endl;
    return 0;
}
