#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string st;
    ifstream file("basic2.txt");
    while( getline(file,st)) {
       
        file>>st;
        cout<<st<<endl;
    }
    
    file.close();
    cout << "File read successfully!";


    return 0;
}
