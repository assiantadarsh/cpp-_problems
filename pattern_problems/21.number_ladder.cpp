#include<iostream>
using namespace std;

// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// print the pattern ?

int main(){
    int a;
    cout<<"Enter the positive value of a:"<<endl;
    cin>>a;
    for(int i = 1;i<=a;i++){
        for(int j = i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    
}