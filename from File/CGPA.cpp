#include <iostream>
#include <fStream>
#include <string>
#include <sstream>

using namespace std;

float getGradePoint(int obtainedMarks);    //FUnction

int main() {
    ifstream file("CGPA.txt"); // file open
    string line;

    string subject[6]; // For subject
    getline(file,line);

    stringstream row1(line);
    string sub;
    getline(row1,sub,',');

    for (int i=0; i<6; i++){   //loop start for subject
       
        getline(row1,sub,',');
        subject[i]=sub;
        
    }
    
    int creditHours[6],sum=0;   // For Credit Hours
    getline(file,line);

    stringstream row(line);
    string CrHr;
    int totalCH=0;
    getline(row,CrHr,',');

    for(int i=0; i<6; i++){    // loop start for CH

        getline(row,CrHr,',');
        creditHours[i] = stoi(CrHr);
        totalCH = sum +stoi(CrHr);
    }
    
    cout << "Credit Hours of Subjects: "<<endl;

    for(int i=0; i<6; i++){                 // Loop start for showing output
       
        cout << subject[i]<<": "<<creditHours[i] <<endl;

    }
    
    float gradePoint,average=0;
    string num;

    while(!file.eof()){         // loop start for file
        getline(file,line);
        
        stringstream row3(line);
            getline(row3,num,',');
            cout << "Roll num: "<<num<<endl;
            
            cout << "Grade point of subject"<<endl;
            
        sum=0;
         int obtainedMarks[6];
        float gp[6];

        for(int i=0; i<6; i++){     // Loop start for total num and function

            getline(row3,num,',');
            sum = sum + stoi(num);
            obtainedMarks[i] = stoi(num);
           gp[i] =  getGradePoint(obtainedMarks[i]); // function call
        
            }
            cout << "Total number: "<<sum<<endl;
            
            float gpXch[6], totalGPxCh=0,CGPA;

            for(int i=0; i<6; i++){         // Loop for CGPA calculation
            gpXch[i] =  gp[i]* creditHours[i];
            totalGPxCh = totalGPxCh + gpXch[i];
            }
                
                CGPA = totalGPxCh/ totalCH;
                cout << "CGPA is: "<<CGPA<<endl;
        }
        
        
    return 0;
}
    
    float getGradePoint(int obtainedMarks){         //Function
        float gradePoint;
        if(obtainedMarks>84){
            gradePoint = 4.0;
        }  
        else if(obtainedMarks>79){
            gradePoint = 3.7;
        }
        else if(obtainedMarks>74){
            gradePoint = 3.3;
        }
        else if(obtainedMarks>69){
            gradePoint = 3.0;
        }
        else if(obtainedMarks>64){
            gradePoint = 2.7;
        }
        else if(obtainedMarks>59){
            gradePoint = 2.3;
        }
        else if(obtainedMarks>54){
            gradePoint = 2.0;
        }
          else if(obtainedMarks>50){
            gradePoint = 1.7;
        }
        else{
            gradePoint = 0.0;
        }
        cout << "Grade Point: "<<gradePoint<<endl;
        return gradePoint;
    }
// is ma sara program ok ha bs CGPA ki calculation ma issue araha ha....
