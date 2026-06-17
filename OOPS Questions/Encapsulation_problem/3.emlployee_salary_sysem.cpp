#include<iostream>
using namespace std;

class employee{

    private:
    string name;
    int id;
    float basic_salary;
    int bonus;
    public:

    void input(){
        cout<<"Enter name : ";
        getline(cin,name);
        cout<<"Enter id : ";
        cin>>id;
        cout<<"Enter basic salary : ";
        cin>>basic_salary;
        cout<<"Enter bonus percentage : ";
        cin>>bonus;

    }

    void display(){
        cout<<"\n============================\n";
        cout<<"Name : "<<name<<endl;
        cout<<"ID : "<<id;
        cout<<"\nBasic Salary : "<<basic_salary;
        cout<<"\nBonus percentage : "<<bonus<<"%";

        float final_salary = basic_salary + basic_salary * bonus/100;
        cout<<"\nFinal Salary : "<<final_salary;
        cout<<"\n==============================";
    }
};
int main(){

    employee e;
    e.input();
    e.display();
}