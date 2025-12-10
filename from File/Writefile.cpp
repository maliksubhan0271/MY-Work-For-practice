#include <iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
    string st;
    ofstream file("basic1.txt");
    for(int i=0; i<3; i++){
        cout << "Enter a Text: ";
        getline(cin,st);
        file<<st<<endl;
        
    }
    file.close();
    
    
    return 0;
}
