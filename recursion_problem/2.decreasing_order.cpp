#include<iostream>
// Print n to 1
void dec(int n){
    if (n == 0) return;
    printf("%d\n",n);
    dec(n-1);
    
}
using namespace std;

int main(){

    int n;
    cout<<"Enter the positive value of n : ";
    cin>>n;
    
    dec(n);
}