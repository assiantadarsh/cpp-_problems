#include<iostream>
using namespace std;

// *****
// *   *
// *   *
// *   *
// ***** print pattern ?

class pattern{

    public:
    int n;
    pattern(int size){
        n = size;
    }

    void display(){
        for(int i = 1;i <= n;i++){
            for(int j = 1;j <= n;j++){
                if(i == 1 || j == 1 ||i == n || j == n){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
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
    p.display();
    
}