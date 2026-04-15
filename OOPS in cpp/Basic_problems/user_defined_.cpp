#include<iostream>
using namespace std;

class student{  // Student is a new Data Type 
    public:
        string name;
        int roll_nu;
        float gpa;

};
int main(){

    student x1;
    x1.name = "Hamza";
    x1.gpa = 9.4;
    x1.roll_nu = 12234;

    student x2;
    x2.name = "Hamza";
    x2.gpa = 9.4;
    x2.roll_nu = 12234;
    
    cout<<x1.name<<"\n";
    cout<<x1.gpa<<"\n";
    cout<<x1.roll_nu<<"\n";
    cout<<x2.name<<"\n";
    cout<<x2.gpa<<"\n";
    cout<<x2.roll_nu<<"\n";

    return 0;
}