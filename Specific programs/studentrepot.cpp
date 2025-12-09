#include<iostream>
#include<string>
using namespace std;
int main()
{
    string studentNam[5];
    int studentMarks[5];
    for(int i=0; i<5; i++){
        cout<<"Enter a name of student "<<i+1<<": ";
        cin>>studentNam[i];
    }
    for(int i=0; i<5; i++){
        cout<< "\n  Enter a marks of "<<studentNam[i]<<": ";
        cin>>studentMarks[i];
    }

    int sum=0;
    for(int i=0; i<5; i++){
        sum= sum + studentMarks[i];
    }
    cout<< "Total number is: "<<sum<<endl;

    float average=0;
    average = sum/5;
    cout <<"total average is: "<<average<<endl;

    if(average>70){
        cout <<"Class performance: Good"<<endl;
    }
    else if(average>50){
        cout << "Performance is Average"<<endl;
    }
    else{
        cout << "Perfoirmance is Poor"<<endl;
    }

    int count=0;
    for(int i=0; i<5; i++){
        if(studentMarks[i]>=50){
            cout<<studentNam[i] << " is passed." << endl;
            count++;
        }
    }
    cout << "Total passed student is: " <<count << endl;

        count=0;
    for(int i=0; i<5; i++){
        if(studentMarks[i]<50){
            cout<<studentNam[i]  << " is failed." << endl;
            count++;
        }
    }
    cout << "Total failed student is: " <<count << endl;

    int highest=studentMarks[0];
    string topperName=studentNam[0];
    for(int i=0; i<5; i++){
        if(studentMarks[i]>highest){
            highest=studentMarks[i];
            topperName=studentNam[i];
            
        }
    }
    cout <<"The Topper sutdent name is: " << topperName<<" and his marks: "<<highest <<endl;

    int lowest=studentMarks[0];
    string lowName=studentNam[0];
    for(int i=0; i<5; i++){
        if(studentMarks[i]<lowest){
            lowest=studentMarks[i];
            lowName=studentNam[i];
        }
    }
    cout <<"The lowest student name is "<<lowName<<" and his number is: " <<lowest<<endl;


    string name;
    cout <<"Enter a name: "<<endl;
    cin >>name;
    int marks;
    bool found=false;
    for(int i=0; i<5; i++){
        if(name==studentNam[i]){
            found=true;
            marks=studentMarks[i];
        }
    }

    if(found==true){
        cout << "Name is match and his number is:- "<<marks<<endl;
    }
    else{
        cout << "Name doen't match."<<endl;
    }
    return 0;
}