#include<iostream>
using namespace std;

//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * *  print pattern ?

class pyramid{

    public:
    int n;

    pyramid(int size){
        n = size;
    }

    void display(){
        for(int i = 1;i<= n;i++){

            // For spaces
            for(int k = 1;k <= n-i; k++){
                cout<<" ";
            }

            // For star
            for(int j = 1;j <= i;j++){
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

    pyramid p(size);
    p.display();
    
}