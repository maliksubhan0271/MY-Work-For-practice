#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    ifstream file("file1.txt");
    string line = "";

    int sum = 0, counter = 0;
    float average;

    while (!file.eof()) {
        getline(file, line);
        string courseName, obtainedMarks;

        stringstream record(line);
        getline(record, courseName, ',');
        getline(record, obtainedMarks, ',');

        sum = sum + stoi(obtainedMarks);
        counter++;
    }

    file.close();            // close the file

    average = (float) sum / counter;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average;

    ofstream file1("resultFile1.txt");
    if (file1.is_open()) {
        file1 << "Sum = " << sum << "\n";
        file1 << "Average = " << average;
        file1.close();            // close the file
        cout << "File written successfully.";
    } else {
        cout << "Error opening file!";
    }

    return 0;
}