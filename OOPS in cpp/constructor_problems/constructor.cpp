#include<iostream>

using namespace std;

class student{  // Student is a new Data Type 
    public:
        string name;
        int roll_nu;
        float gpa;

        // Constructor

        student (string s,int r,float g){
            name = s;
            roll_nu = r;
            gpa = g;
        }

};
int main(){

    student x1("Adarsh shukla",34545,9.9);
    // x1.name = "Hamza";
    // x1.gpa = 9.4;
    // x1.roll_nu = 12234;

    student x2("OP",2345,9.3);
    // x2.name = "Hamza";
    // x2.gpa = 9.4;
    // x2.roll_nu = 12234;
    
    cout<<x1.name<<"\n";
    cout<<x1.gpa<<"\n";
    cout<<x1.roll_nu<<"\n";
    cout<<x2.name<<"\n";
    cout<<x2.gpa<<"\n";
    cout<<x2.roll_nu<<"\n";

    return 0;
}