#include<iostream>
using namespace std;


int perce(int maths,int english,int chem,int physics,int c){
    int percentage = (maths + english + chem + physics + c)/5;
    return percentage;
}


int marks1(int maths,int english,int chem,int physics,int c){
    int aver = (maths + english + chem + physics + c)/5;
    return aver;
}


void student(char name[],char class1[],char section,int enrollment,int i){
    int maths,english,chem,physics,c;

    cout<<"Enter "<< i<< " Student marks of Maths: ";
    cin>>maths;

    cout<<"Enter "<< i<< " Student  marks of English: ";
    cin>>english;

    cout<<"Enter  "<< i<< " Student  marks of Chemistry: ";
    cin>>chem;

    cout<<"Enter  "<< i<< " Student marks of Physics: ";
    cin>>physics;

    cout<<"Enter  "<< i<< " Student marks of C programming: ";
    cin>>c;

    int average = marks1(maths,english,chem,physics,c);
    int percentage = perce(maths,english,chem,physics,c);

    cout<<"\n-----  " << i<< "STUDENT DETAILS -----\n";
    cout<<"\n--------------------------"<<endl;

    cout<<"Name: "<<name<<endl;
    cout<<"Class: "<<class1<<endl;
    cout<<"Section: "<<section<<endl;
    cout<<"Enrollment: "<<enrollment<<endl;
    cout<<"Average: "<<average<<endl;
    cout<<"Percentage: "<<percentage<<endl;

    if (percentage >= 90)
        cout << "Grade: A" << endl;
    else if (percentage >= 80 && percentage< 90)
        cout << "Grade: B" << endl;
    else if (percentage >= 70 && percentage< 80)
        cout << "Grade: C" << endl;
    else if (percentage >= 60 && percentage< 70)
        cout << "Grade: D" << endl;
    else
        cout << "Grade: F ! you will try again" << endl;

    cout<<"\n--------------------------"<<endl;
    cout<<"\n--------------------------"<<endl;

}

int main(){
    char name[100];
    char class1[4];
    char section;
    int enrollment;
    int i = 1;
    while(i<=3){
        cout<<"Enter student name: ";
        cin>>name;

        cout<<"Enter class: ";
        cin>>class1;

        cout<<"Enter section: ";
        cin>>section;

        cout<<"Enter enrollment number: ";
        cin>>enrollment;

        student(name,class1,section,enrollment,i);
        i++;
    }
    cout<<"\n------------------"<<endl;
    cout<<"Thnkyou ! ";
    return 0;
}