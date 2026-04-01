#include<iostream>
using namespace std;

//   *
//   *
// *****
//   *
//   *
// print the pattern ?

int main(){
    int a;
    cout<<"Enter the positive but odd value of a:"<<endl;
    cin>>a;
    for(int i = 1;i<=a;i++){
        if(i == (a/2)+ 1){
            for(int j = 1;j<=a;j++){
                cout<<"*";
            }
        }
        else{
            for(int k = 1;k<=a/2;k++){
                cout<<" ";
            }
            for(int j = 1;j<=1;j++){
                cout<<"*";
            }
        }
        cout<<"\n";
    }
    
}