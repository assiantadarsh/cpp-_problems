#include<iostream>
using namespace std;

// *
// * *
// *   *
// *     *
// * * * * *
// print the pattern ?

int main(){
    int a;
    cout<<"Enter the positive value of a:"<<endl;
    cin>>a;
    int nsp = 0 ,n = -1;
    for(int i = 1;i<=a;i++){
        if(i == a){
            for(int j = 1; j <= a; j++){
                cout<<"* ";
         }
        }
        else{
             for(int j = 1;j<=1;j++){
                 cout<<"*";
        }
            for(int k = 1;k<nsp;k++){
                cout<<" ";
        }
            for(int j = i;j<= n + 1;j++){
                cout<<"*";
        }
            nsp += 2;
            n = i;
            cout<<"\n";
        }
       
    }
    
    
}