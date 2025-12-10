#include <iostream>
#include<fstream>
#include<sstream>
#include<string>
using namespace std;
int main() {
    ofstream file("studentReport.txt");
   string studentName[5];
   int studentNum[5][3];

   for(int i=0; i<5; i++){
    cout << "Enter a Student name: ";
    cin.ignore();
    getline(cin,studentName[i]);

    for(int j=0; j<3; j++){
        cout <<"ENter a marks of subject "<<i+1<<":";
        cin>>studentNum[i][j];
    }

    file<<studentName[i]<< " ";
    for(int j=0; j<3; j++){
    
        file<<studentNum[i][j]<< " ";
}
    file<<endl;

}
   cout << "File write sucessfully"<<endl;
 file.close();

   cout << "File reading is start!"<<endl;

   ifstream file2("studentReport.txt");  //file open
   string line;

   int sum=0, counter=0;
   float average;
    while(getline(file2, line)){
        stringstream ss(line); // line ko word ma torny ky leya
        string name;
        int marks;

        ss>>name; // phly word name ha to name ky leya
        while(ss>>marks){
            sum = sum + marks;
            counter++;
        }
        cout << "Name: "<<name<< endl;
        cout << "Total number is: "<<sum<<endl;
        average= (float) sum/counter;
        cout<< "Average is: "<<average<<endl;
        if(average>85){
            cout << "Grade:A+"<<endl;
        }
        else if(average>80){
            cout << "Grade:A"<<endl;
        }
        else if(average>75){
            cout << "Grade:B+"<<endl;
        }
        else if(average>70){
            cout << "Grade:B"<<endl;
        }
        else if(average>60){
            cout << "Grade:C"<<endl;
        }
        else if(average>50){
            cout << "Grade:D"<<endl;
        }
        else{
            cout << "Fail"<<endl;
        }

    }
    file2.close();
    

    return 0;
}
