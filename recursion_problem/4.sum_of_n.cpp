#include<iostream>
long long  sum(int x){
    if (x == 1 || x == 0) return x;
    return x + sum(x-1);
}
// Print sum of n natural number 
using namespace std;

int main(){

    int n;
    cout<<"Enter the positive value of n : ";
    cin>>n;

    
    cout<<"SUM = "<<sum(n);
}