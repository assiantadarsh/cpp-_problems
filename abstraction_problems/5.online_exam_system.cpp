#include<iostream>
using namespace std;

class Exam {
public:
    virtual void startExam() = 0;   // Pure virtual function
};

class MCQExam : public Exam {
public:
    void startExam() {
        cout << "\nMCQ Exam Started";
        cout << "\nRead the question carefully.";
        cout << "\nSelect one correct option from A, B, C, D.";
    }
};

class CodingExam : public Exam {
public:
    void startExam() {
        cout << "\nCoding Exam Started";
        cout << "\nRead the problem statement carefully.";
        cout << "\nWrite the code and run test cases.";
    }
};

int main() {
    MCQExam m;
    CodingExam c;

    m.startExam();
    cout << endl;

    c.startExam();

    return 0;
}