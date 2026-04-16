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


void changes(cricketer* c){
        // (*c).avg = 34.54;    // Method 1
        c->avg = 23.44;         // Method 2
    }
int main(){
    
    cricketer c1(450090,"Adarsh Shukla",45.56);
    cout<<c1.avg<<endl;

    changes(&c1);       // Pass by pointers
    cout<<c1.avg<<endl;

    // cricketer *p = &c1;
    // cout<<p<<endl;  // Adress of c1
    // (*p).runs = 67876; // c1.runs = 67876 Pre-refrence operator


    
    return 0;
}