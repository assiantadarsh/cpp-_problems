#include<iostream>
using namespace std;

class student{  // Student is a new Data Type 
    public:
        string name;
        int roll_nu;
        float gpa;

};

void print(student c){
    cout<<"Name : "<<c.name<<" CGPA : "<<c.gpa<<" "<<"Roll number : "<<c.roll_nu<<" "<<endl;
}
int main(){

    student x1;
    x1.name = "Hamza";
    x1.gpa = 9.4;
    x1.roll_nu = 12234;

    student x2;
    x2.name = "Sp Aslam";
    x2.gpa = 5.4;
    x2.roll_nu = 65234;
    
    student x3;
    x3.name = "Rehman Dakait";
    x3.gpa = 3.4;
    x3.roll_nu = 232343;

    print(x1);
    print(x2);      // Pass by value 
    print(x3);

    return 0;
}