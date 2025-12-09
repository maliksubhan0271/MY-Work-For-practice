#include<iostream>
using namespace std;
int main()
{
    int studentMarks[5],sum=0,mix,min,count=0;
    float average=0;
    for(int i=0; i<5;i++){
        cout <<"Enter a mark of student"<<i+1<<":";
        cin>> studentMarks[i];
         sum = sum+studentMarks[i];
    }

        cout <<"Total number is"<<sum<<endl;
    average=sum/5;
    cout<<"Average is: "<< average<<endl<<endl;

    for(int i=0; i<5; i++){
        if(studentMarks[i]>50){
            
            count++;
        }
    }
    cout<<count<<"student pass!"<<endl<<endl;

    count=0;
    for(int i=0; i<5; i++){
        if(studentMarks[i]<50){
            
            count++;
        }
    }
    cout<<count<<"student fail!"<<endl<<endl;




    mix=studentMarks[0];
    for(int i=0; i<5; i++){
        if(studentMarks[i]>mix){
            mix=studentMarks[i];
            
        }
    }
    cout << "numbeer is mix: "<<mix<<endl<<endl;


     min=studentMarks[0];
    for(int i=0; i<5; i++){
        if(studentMarks[i]<min){
            min=studentMarks[i];
       }
    }
    cout << "numbeer is min: "<<min<<endl<<endl;


    int num;
    cout <<"Enter a number: ";
    cin >> num;
    bool found;
    found false;
    
    for(int i=0;i<5;i++){
        if(num==studentMarks[i]){
           found=true;
        }
    }
    if(found==true)
    { cout<< "number is  found:";}
    else {
        cout <<"not found:";
    }

 return 0;
 }