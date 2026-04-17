#include<iostream>
using namespace std;

class cricketer{
        public:
            int runs;
            string name;
            float avg;


            // Constructor
            cricketer(int runs,string name,float avg){
                this->avg = avg;
                this->name = name;
                this-> runs = runs;
            }
    };
int main(){
    // Static Allocation

    cricketer c1(234,"Virat",34.2);

    // Dynamic Alloactio

    cricketer *c2 = new cricketer(21,"Rohit",23.4);

    cout<<(*c2).avg<<endl;
    cout<<c2->name<<endl;
    
    return 0;
}