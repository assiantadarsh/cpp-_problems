#include<iostream>
using namespace std;

//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     *  print pattern ?

class diamond{
    public:
    int n;

    diamond(int size){
        n = size;
    }

    void upper_pyramid(){
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

    void lower_pyramid(){
        for(int i = 1;i<= n;i++){

            // For spaces
            for(int k = 1;k < i; k++){
                cout<<" ";
            }

            // For star
            for(int j = 1;j <= n- i + 1;j++){
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

    diamond d(size);
    d.upper_pyramid();
    d.lower_pyramid();
    
}