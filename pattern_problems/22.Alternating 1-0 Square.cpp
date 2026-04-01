#include<iostream>
using namespace std;

// 1 0 1 0 
// 0 1 0 1 
// 1 0 1 0 
// 0 1 0 1 
// print the pattern ?

int main(){
    int a;
    cout<<"Enter the positive value of a:"<<endl;
    cin>>a;
    for(int i = 1;i<=a;i++){
        for(int j = 1;j<=a;j++){
           if(i % 2 != 0){
             if(j%2 != 0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
           }
           else{
            if(j%2 != 0){
                cout<<"0 ";
            }
            else{
                cout<<"1 ";
            }
           }
        }
        cout<<"\n";
    }
    
}