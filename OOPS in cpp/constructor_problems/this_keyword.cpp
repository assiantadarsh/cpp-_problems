#include<iostream>
using namespace std;
class cricketer{
    public:
        string name;
        int runs;
        cricketer(string name,int runs){
            this->name = name;
            this->runs = runs;     
        }
};
int main(){
    cricketer c1("Virat kohli",25000);
    cricketer c2("Rohit Sharma",16000);

    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2.name<<" "<<c2.runs<<endl;
}
