#include<iostream>
using namespace std;

class student{

    private:
    string name;
    int roll_num;
    int marks;

    public:

    void input(){
        cout<<"Enter name : ";
        getline(cin,name);

        cout<<"Enter roll number : ";
        cin>>roll_num;

        cout<<"Enter marks : ";
        cin>>marks;
    }

    void display(){
        cout<<"=============================="<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Roll number : "<<roll_num<<endl;
        cout<<"Marks : "<<marks<<endl;
        cout<<"=============================="<<endl;
    }
};

int main(){

    student s;
    s.input();
    s.display();
}