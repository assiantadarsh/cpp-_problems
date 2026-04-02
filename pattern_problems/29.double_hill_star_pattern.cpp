#include<iostream>
using namespace std;

//    *     *
//   ***   ***
//  ***** *****
// *************
// print the pattern ?

int main(){
    int a;
    cout<<"Enter the positive value of a:"<<endl;
    cin>>a;
    
    int nst = 1;
    int nsp = a-1;
    int nsp2 = a+1;
    for(int i = 1;i<=a;i++){

        if(i == a){
            for(int j = 1;j<= 3*a + 1;j++){
                cout<<"*";
            }
        }
        else{
            for(int k = 1;k<=nsp;k++){
                cout<<" ";
            }

            for(int j =1;j<=nst;j++){
                cout<<"*";
            }
        
            for(int k = 1;k<=nsp2;k++){
                cout<<" ";
            }
            for(int j = 1;j<= nst;j++){
                cout<<"*";
            }
            nst += 2;
            nsp--;
            nsp2 -= 2;
        }
        
        cout<<"\n";
    }
}