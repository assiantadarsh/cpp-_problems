#include<iostream>
using namespace std;

// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 

class pattern

{   private:
    int n;
    
    public:

    pattern(int size){
        n = size;
    }
    // Pattern logic

    void print_pattern(){

        for(int i = 1 ; i <= n ; i++){
            for(int j = 1;j <= n;j++){
                cout<<"*"<<" ";
            }
            cout<<"\n";
        }
    }
};

int main(){

    int size;
    cout<<"Enter the positive value of size : ";
    cin>>size;

    pattern p(size);
    p.print_pattern();

    return 0;
}