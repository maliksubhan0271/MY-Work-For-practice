#include <iostream>
using namespace std;
int main()
{
    int obtainMarks[5], sum=0;
    float average;
    for(int i = 0; i<5; i++){
        cout << "Marks of student" << i + 1 << ":";
        cin >> obtainMarks[i];
        sum = sum + obtainMarks[0];
    }
    average = sum/5;
    cout << "Sum of total subject: " << sum << endl;
    cout << "Average of total subject: " << average << endl;
}