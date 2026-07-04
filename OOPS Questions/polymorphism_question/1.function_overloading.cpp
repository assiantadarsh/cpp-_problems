#include<iostream>
using namespace std;

class calculator{
    public:
    int add(int a , int b){
      return a + b;  
    }

    float add(int a , float b){
        return a + b;
    }

    double add(double a , double b){
        return a + b;
    }
};

int main(){
    calculator c;

    int r = c.add(4,5);
    cout<<"Result : "<<r;
    cout<<"\nResult : "<<(c.add(2,3.4f));
    cout<<"\nResult : "<<(c.add(3.4,4.56));

}