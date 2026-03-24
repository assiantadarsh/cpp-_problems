#include<iostream>
using namespace std;
// A B C D E 
// A B C D   
// A B C     
// A B       
// A
// print the pattern ?

int main(){
    int a;
    cout<<"Enter the positive value of a:"<<endl;
    cin>>a;
    int nse = a;
    for(int i = 1;i<=a;i++){
        for(int j = 1;j <= nse;j++){
            int d = 64 + j;
            char ch = (char)d;
            cout<<ch<<" ";
        }
        nse--;
        for(int k = 1;k<i;k++){
            cout<<"  ";
        }
        cout<<"\n";
    }
}