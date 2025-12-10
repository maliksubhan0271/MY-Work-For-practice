#include <iostream>
#include<fstream>
using namespace std;

int main() {
    string sentence;
    ofstream file("sentences.txt");
    for(int i =0; i<3; i++){
        cout << "Enter a sentence:";
        // cin>>sebtence; ya ni use ho ga agar ya use karna ha to getline na use karo agar getline use karne ha to phir ya n ause karo qk getline sy be input lany hiote haya or cin sy be to in donpo ma sy koi ak use karo.
        getline(cin, sentence);
        file<<sentence<<endl;
    }
    cout << "File write sucessfully"<<endl;
    file.close();
    cout <<"--------------"<<endl;
    string  lines;
    ifstream file2("sentences.txt");
    while(getline(file2, lines)){
        // file2>>lines;  ya ni use ho ga agar ya use karna ha to getline na use karo agar getline use karne ha to phir ya n ause karo qk getline sy be line ko read karte ha or ya be lune ko read karta ha  to in donpo ma sy koi ak use karo.
        cout<< lines<<endl;
    }
    file2.close();
    cout << "File read sucessfully!";
    return 0;
}
