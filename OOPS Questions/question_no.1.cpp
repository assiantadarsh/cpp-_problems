#include<iostream>
using namespace std;

// Q1. Create a Student class with:

// .name (string)
// .roll number (int)
// .marks (float)

// Take input from the user and display all details.

class student{
    public:
    string name;
    int rollnum;
    float marks;
};

int main(){
    student s;
    cout<<"Enter name of student :";
    getline(cin,s.name);
    cout<<"Enter roll num of student :";
    cin>>s.rollnum;
    cout<<"Enter marks of student :";
    cin>>s.marks;

    cout<<s.name<<" "<<s.marks<<" "<<s.rollnum;

}