#include<iostream>
using namespace std;
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// print the pattern ?

int main(){
    int a;
    cout<<"Enter the positive value of a:"<<endl;
    cin>>a;

    for(int i = 1;i<=a;i++){
        for(int j = a;j>=i-1;j--){
            cout<<" ";
        }
        for(int k = 1;k<=i;k++){
            int d = 64 + k;
            char ch = (char)d;
            cout<<ch;
        }
        for(int q = i-1;q>=1;q--){
            int d = 64 + q;
            char ch = (char)d;
            cout<<ch;
        }
        cout<<"\n";
    }
    
}