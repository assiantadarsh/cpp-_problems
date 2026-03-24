#include<iostream>
using namespace std;
//     1
//    121
//   12321
//  1234321
// 123454321
// print the pattern

int main(){
    int a;
    cout<<"Enter the positive value of a:"<<endl;
    cin>>a;
    for(int i = 1;i<=a;i++){
         int nse = i-1;
        for(int j = a;j>i;j--){
            cout<<" ";
        }
        for(int k = 1;k<=i;k++){
            cout<<k;
        }
        for(int m = 2;m<=i;m++){
            cout<<nse;
            nse--;
        }
        cout<<"\n";
    }
}