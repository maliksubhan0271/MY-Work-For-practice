#include <iostream>
#include<fstream>
using namespace std;

int main() {
    // jb program sy kase file ma store karny ho koi name ya value add karne ho to "ofstream" use karty hay is ka matlb out yani prpogram sy out or kase file ma..
    string Name = "Subhan";
    ofstream file("firstFile.txt");
    file<<Name;
    file.close();
    // jb kase file ka data kase program ma show karvana ho to "ifstream" use karty hay is ka matlb "in" kase file sy program ma in... 

    string Name1;
    ifstream file2("firstFile2.txt");
    getline(file2, Name1);      //getline pori line ko read karny ky leya use hota ha .... or ya tab tak line ko read karta ha jb tak usy new line na mely...
    file2>>Name1;
    file2.close();
    cout<<Name1;
    return 0;
}
// file2>>lines;  ya ni use ho ga agar ya use karna ha to getline na use karo agar getline use karne ha to phir ya n ause karo qk getline sy be line ko read karte ha or ya be lune ko read karta ha  to in donpo ma sy koi ak use karo


// cin>>sebtence; ya ni use ho ga agar ya use karna ha to getline na use karo agar getline use karne ha to phir ya n ause karo qk getline sy be input lany hiote haya or cin sy be to in donpo ma sy koi ak use karo.