#include <iostream>
using namespace std;
int main() {
    int subjectMarks[5],sum=0;
    float average;
    for(int i=0; i<5; i++){
        cout << "Enter a marks of subject "<<i+1<<":";
        cin>>subjectMarks[i];
        sum = sum + subjectMarks[i];
    }
    cout << "Total marks= "<<sum<<endl;
    average = sum/5.5;
    cout << "Average is= "<< average<<endl;
    return 0;
}
