#include<iostream>
using namespace std;

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// Using single Inheritance ?

class pattern{

    protected:
    int n;

    public:
    void input(int size){
        n = size;
    }
};

class triangle : public pattern{

    public:
    int p;

    void temp(){
        p = 1;
    }

    void display(){
        for(int i = 1; i <= n;i++){
            for(int j = 1;j <= i ;j++){
                cout<<p<<" ";
                p++;
            }
            cout<<"\n";
        }
    }

};

int main(){

    int size;
    cout<<"Enter the positive value of size : ";
    cin>>size;

    // pattern p;
    // p.input(size);
    triangle t;
    t.input(size);
    t.temp();
    t.display();
    
}