#include<iostream>
using namespace std;
int main(){

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

            // Function inside Class
            void print(){
                cout<<"Name :"<<name<<" runs : "<<runs<<" average :"<<avg<<endl;
            }

            // Find number of matches
            int matches(){
                return runs/avg;
            }
    };
    cricketer c1(450090,"Adarsh Shukla",45.56);
    cricketer c2(13,"Rohit Sharma",0.56);

    c2.name = "Virat Kohli";

    c1.print();
    c2.print();

    cout<<"Number of matches of "<<c1.name<<" : "<<c1.matches();

    return 0;
}