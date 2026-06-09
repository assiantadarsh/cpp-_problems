#include<iostream>
using namespace std;

// * * * * * 
// * * * * 
// * * * 
// * * 
// * print pattern ?

class pattern{

    private:
    int n;
    public:
    
    void input(){

        cout<<"Enter the positive value of size : ";
        cin>>n;
    }

    void display(){

        for(int i = 0;i < n;i++){
            for(int j  = 1;j<=n-i;j++){
                cout<<"*"<<" ";
            }
            cout<<"\n";
        }

    }
};

int main(){
    
    pattern p;
    p.input();
    p.display();
}