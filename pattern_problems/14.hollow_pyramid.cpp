#include<iostream>
using namespace std;
//     1
//    2 2
//   3   3
//  4     4
// 555555555
// print the pattern
int main(){
    int a;
    cout<<"Enter the positive value of a:"<<endl;
    cin>>a;
    for(int i = 1;i<=a;i++){
        if(i == a){
            for(int j = 1;j<=2*i -1;j++){
                cout<<i;
                
            }
        }
        else{
            for(int j = a;j>i;j--){
            cout<<" ";
        }
        for(int k = 1;k<=2*i - 1;k++){
            if(k==1 || k == 2*i - 1){
                cout<<i;
            }
            else{
                cout<<" ";
            }
        }
        }
        
        cout<<"\n";
    }
}