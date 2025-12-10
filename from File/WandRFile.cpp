#include <iostream>
#include<fstream>
using namespace std;


int main() {
    cout <<"File write!"<<endl;
    int num;
   ofstream file("WandRFile.txt");
    for(int i=0; i<5; i++){
        cout <<"Enter a number: ";
        cin>>num;
        file<<num<<endl;
    }
    file.close();
    cout<< "File Write sucessfully!"<<endl<<endl;
cout <<"File read"<<endl;

ifstream file2("WandRFile.txt");
    int sum=0;
    string number;
    while(!file2.eof()){
        file2>>number;
        sum= sum + stoi(number);
        
    }
    cout <<"Sum is: "<<sum<<endl;

    file2.close();
    cout <<"File read sucessfully!"<<endl;
    
    
    ofstream file3("WandRFile.txt");
    cout<<"----------------------"<<endl<<endl;
    file3<<"sum is: "<<sum<<endl;
    file3.close();
    cout<< "Sum store in file sucessfully!";


    return 0;
}
