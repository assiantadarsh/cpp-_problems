#include<iostream>
//     1 
//    1 1 
//   1 2 1 
//  1 3 3 1 
// 1 4 6 4 1 
// print the pattern

int factorial(int x){
    int fact = 1;
    for(int i = 2;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}
int combination(int n,int r){
    return factorial(n)/(factorial(r) * factorial(n-r));
    
}
using namespace std;
int main(){

    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    for(int i = 0;i<n;i++){
        for(int k = n;k>i+1;k--){
            cout<<" ";
        }
        for(int j = 0;j <=i;j++){
            int x = combination(i,j);
            cout<<x<<" ";
        }
        cout<<"\n";
    }

}