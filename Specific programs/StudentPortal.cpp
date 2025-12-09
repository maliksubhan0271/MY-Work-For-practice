#include <iostream>
using namespace std;
const int totalmarks = 500;

float claculateAverage(int sum, int marks, float average){
    for(int i=0; i<5; i++){
        cout <<"Enter a marks of subject "<<i+1<<": ";
        cin>>marks;
        sum = sum + marks;
    }

    cout << "Obtain marks is: " << sum<<endl;

    average = sum/5.5;
    cout << "Average is: "<< average <<endl;
    return sum;
}

   string claculateGrade(int obtainmarks){

         if(obtainmarks>=400){
                return "A+";
         }
         else if(obtainmarks>=350){
            return "A";
         }
         else if(obtainmarks>=300){
            return "B";
         }
         else if(obtainmarks>=250){
            return "C";
         }
         else if(obtainmarks>=200){
            return "D";
         }
         else {
            return "F";
         }
         
   }

   float convertToGPA(string grade){
       if(grade=="A+"){
        return 4.0;
       }
        else if(grade == "A")
        { 
            return 3.7;
        }
        else if(grade == "B")
        {
            return 3.0;
        }
        else if(grade == "C")
        {    
            return 2.0;
        }
        else if(grade == "D")
        {  
            return 1.0;
        }
        else
        {  
            return 0.0;
        }
   }


int main()
{
    int sum=0,marks;
    float average=0;

  int obtainmarks =  claculateAverage(sum,marks,average);

   string grade = claculateGrade(obtainmarks);
         cout << "Grade: " << grade <<endl;
         
   float CGPA =  convertToGPA(grade);
         cout << "CGPA: "<<CGPA<<endl;
 
    return 0;
}