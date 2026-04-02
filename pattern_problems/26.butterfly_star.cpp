#include<iostream>
using namespace std;

// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *
// print the pattern

int main(){

    int n ;
    cout<<"Enter the positive value of n :";
    cin>>n;
    int nsp = 2*n - 2;
    int nst = n - 1;
    int nsp2 = 2;
    for(int i = 1;i<=2*n;i++){
        if(i == n || i == n+1){
            for(int j = 1;j<=2*n;j++){
                cout<<"*";
            }
        }
        else if(i<n){
            for(int j = 1;j<=i;j++){
                cout<<"*";
            }
            for(int k = 1;k<=nsp;k++){
                cout<<" ";
            }
            for(int j = 1;j<=i;j++){
                cout<<"*";
            }
            nsp -=2;
            }
        else{
            for(int j = nst;j>=1;j--){
                cout<<"*";
            }
            for(int k = 1;k<=nsp2;k++){
                cout<<" ";
            }
            for(int j = nst;j>=1;j--){
                cout<<"*";
            }
            nsp2 +=2;
            nst--;

        }
       
        cout<<"\n";
    }


    return 0;
}