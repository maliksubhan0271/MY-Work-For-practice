#include <iostream>
#include<fstream>
#include<sstream>
#include<string>
using namespace std;
int main() {
    string sentence;
    ofstream file("WordCount.txt");
    for(int i=0; i<3; i++){
        cout <<"Enter a sentences: ";
        getline(cin, sentence);
        file<<sentence<<endl;
    }
    file.close();
    cout <<"File write sucessfully!"<<endl;

    cout << "--------------"<<endl;
    
    ifstream file2("WordCount.txt");
    string line,word;
    int count=0;
    while(getline(file2, line)){
        stringstream ss(line);
        while(ss>>word){
            count++;
        }
    }
    cout<<"Total word is: "<<count<<endl;
    file2.close();
    cout << "File read sucessfully!"<<endl;
    return 0;
}
