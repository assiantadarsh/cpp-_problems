#include<iostream>
using namespace std;
// Q7. Create three classes:

// Class A (base class)
// Class B inherits A
// Class C inherits B

// Create an object of Class C and access functions of all classes.

class college{
    public:
    string college_name;
};
class branch : public college{
    public:
    string branch_name;
};
class student :public branch{
    public:
    string student_name;

};

int main(){
    student s;
    s.college_name = "Sage University";
    s.branch_name = "CSE(Data Analytics)";
    s.student_name = "Adarsh Shukla";
    cout<<s.college_name<<endl;
    cout<<s.branch_name<<endl;
    cout<<s.student_name<<endl;

    return 0;
}