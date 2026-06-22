#include<iostream>
using namespace std;

class Course {
public:
    virtual void showCourseDetails() = 0;
};

class CPPcourse : public Course {
public:
    void showCourseDetails() {
        cout << "\nCourse Name: C++ Programming" << endl;
        cout << "Duration: 2 Months" << endl;
        cout << "Fees: 3000" << endl;
    }
};

class PythonCourse : public Course {
public:
    void showCourseDetails() {
        cout << "\nCourse Name: Python Programming" << endl;
        cout << "Duration: 3 Months" << endl;
        cout << "Fees: 4000" << endl;
    }
};

int main() {

    CPPcourse c;
    PythonCourse p;

    c.showCourseDetails();
    p.showCourseDetails();

    return 0;
}