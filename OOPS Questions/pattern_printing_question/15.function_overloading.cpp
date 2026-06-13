#include<iostream>
using namespace std;

class pattern{
    public:

    void print(int n){
        for(int i = 1;i<= n;i++){
            for(int j = 1;j<= i;j++){
                cout<<"*"<<" ";
            }
            cout<<"\n";
        }
    }

    void print(char ch,int n){
        for(int i = 1;i<= n;i++){
            for(int j = 1;j<= i;j++){
                cout<<ch<<" ";
            }
            cout<<"\n";
        }
    }

    void print(bool reverse,int n){
        if(reverse == true) {
            for(int i = n; i >= 1; i--) {
                for(int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
        }
    }
};

int main(){

    int size;
    cout<<"Enter the positive value of size : ";
    cin>>size;

    pattern p;

    cout << "\nStar Triangle:\n";
    p.print(size);

    cout << "\nHash Triangle:\n";
    p.print('#',size);
    
    cout << "\nReverse Triangle:\n";
    p.print(true,size);
    
}