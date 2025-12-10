//this program from sir:
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

float getGradePoint(int obtainedMarks);

int main() {
    ifstream marks("CGPA.txt");
    string line;
    int creditHours[6];
    
    getline(marks, line);
    getline(marks, line);
    
    stringstream row(line);
    string crHr;
    getline(row, crHr, ',');
    getline(row, crHr, ',');
    creditHours[0] = stoi(crHr);
    getline(row, crHr, ',');
    creditHours[1] = stoi(crHr);
    getline(row, crHr, ',');
    creditHours[2] = stoi(crHr);
    getline(row, crHr, ',');
    creditHours[3] = stoi(crHr);
    getline(row, crHr, ',');
    creditHours[4] = stoi(crHr);
    getline(row, crHr, ',');
    creditHours[5] = stoi(crHr);

    for (int i=0; i<6; i++) {
        cout << creditHours[i] << endl;
    }

    while (!marks.eof()) {
        getline(marks, line);
        cout << line << endl;
    }

}

float getGradePoint(int obtainedMarks) {
    float gradePoint;

    if (obtainedMarks>84) {
        gradePoint = 4.0;
    } else if (obtainedMarks>79) {
        gradePoint = 3.7;
    } else if (obtainedMarks>74) {
        gradePoint = 3.4;
    } else if (obtainedMarks>69) {
        gradePoint = 3.0;
    } else if (obtainedMarks>64) {
        gradePoint = 2.5;
    } else if (obtainedMarks>59) {
        gradePoint = 2.0;
    } else if (obtainedMarks>54) {
        gradePoint = 1.0;
    } else {
        gradePoint = 0.0;
    }

    return gradePoint;
}
