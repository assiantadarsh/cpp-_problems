#include<iostream>

// Print 1 to n

void inc(int n){
    if (n == 0) return;
    inc(n-1);
    printf("%d\n",n);
    
}
using namespace std;

int main(){

    int n;
    cout<<"Enter the positive value of n : ";
    cin>>n;
    
    inc(n);
}