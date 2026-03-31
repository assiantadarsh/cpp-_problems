#include<iostream>
using namespace std;

//     *
//    **
//   ***
//  ****
// *****
//  ****
//   ***
//    **
//     *
// print the pattern ?

int main(){
    int a;
    cout<<"Enter the positive value of a:"<<endl;
    cin>>a;
    // For upper triangle 
    for(int i = 1;i<=a; i++){
        for(int k = a;k>i;k--){
            cout<<" ";
        }
        for(int j = 1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    // For lower triangle
    for(int i = 1;i<=a-1; i++){
        for(int k = 1;k<=i;k++){
            cout<<" ";
        }
        for(int j = a-1;j>=i;j--){
            cout<<"*";
        }
        cout<<"\n";
    }

}