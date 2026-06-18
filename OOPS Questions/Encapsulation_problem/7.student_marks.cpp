#include<iostream>
using namespace std;

class Result {

private:
    string studentName;
    int marks1, marks2, marks3;
    int total;
    float percentage;

public:
    void input() {
        cout << "Enter student name: ";
        getline(cin,studentName);

        cout << "Enter marks of subject 1: ";
        cin >> marks1;

        cout << "Enter marks of subject 2: ";
        cin >> marks2;

        cout << "Enter marks of subject 3: ";
        cin >> marks3;
    }

    void calculateTotal() {
        total = marks1 + marks2 + marks3;
    }

    void calculatePercentage() {
        percentage = total / 3.0;
    }

    void displayResult() {
        cout << "\n----- Student Result -----" << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Marks 1: " << marks1 << endl;
        cout << "Marks 2: " << marks2 << endl;
        cout << "Marks 3: " << marks3 << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if(percentage >= 33) {
            cout << "Result: Pass" << endl;
        }
        else {
            cout << "Result: Fail" << endl;
        }
    }
};

int main() {

    Result r;

    r.input();
    r.calculateTotal();
    r.calculatePercentage();
    r.displayResult();

    return 0;
}