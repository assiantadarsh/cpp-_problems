#include<iostream>
using namespace std;
// 10 9 8 7 
// 6 5 4   
// 3 2     
// 1   
// print the pattern

int main(){
    int a;
    cout<<"Enter the positive value of a:"<<endl;
    cin>>a;
    int nse = 2*a + 2;
    for(int i = 1;i<=a;i++){
        for(int j = a;j >= i;j--){
            cout<<nse<<" ";
            nse--;
        }
        for(int k = 1;k<i;k++){
            cout<<"  ";
        }
        cout<<"\n";
    }
}