#include<iostream>
using namespace std;

class student{

    public:
        int rn;
        string name;
        student(){

    }
        student(int r,int m,string s){
            name = s;
            rn = r;
            marks = m;

    }
        void display(){         // Getter 
            cout<<name<<" "<<marks<<" "<<rn;
        }
        void setmarks(int m){         // Setter 
            marks = m;
        }

    private:
        int marks;

    
};
int main(){

    student s(232,12,"adarsh"); // set but not print 

    s.display();
    s.setmarks(67);
    s.display();
    student s2;
    //s2.marks = 23; // error
    s2.name = "adarsh";


    return 0;
}