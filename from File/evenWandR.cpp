#include <iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
    ofstream file("evenWandR.txt");
    int num;
    for(int i=0; i<10; i++){
        cout <<"Enter a number: ";
        cin>>num;
        file<<num<<endl;
        // agar file ma even number save karny ho to ya if wale condition ko uncomment kar lana..
        // if(num%2 ==0){
        //     file<<num<<endl;
        // }
    }
    file.close();
    cout << "File write sucessfully!"<<endl;

    cout << "--------------"<<endl;
    ifstream file2("evenWandR.txt");
    string number;
    int x, count=0;
    while(getline(file2, number)){
        x = stoi(number);
        if(x %2 ==0){

            cout << x <<endl;
            count++;
        }
    }
    cout << "Total even number is: "<<count<<endl;
    file2.close();
    cout << "File read sucessfully!"<<endl;
    return 0;
}
