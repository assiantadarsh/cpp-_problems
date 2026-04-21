#include<iostream>
using namespace std;

// Create a Student class that stores marks of 5 subjects in an array and calculate total marks.

class student{
    public:
    int marks[5];
    int s = 0;
    
    void total(){
        for(int i = 0;i<5;i++){
            s = s + marks[i];
        }
        cout<<"Result : "<<s;
    }

};

int main(){

    student m;
    cout<<"Enter the marks of student :"<<endl;

    for(int i = 0;i<5;i++){
        cin>>m.marks[i];
    }

    m.total();

    return 0;
}