#include<iostream>
long long  fact(int x){
    if (x == 1 || x==0) return 1;
    return x * fact(x-1);
}
using namespace std;

int main(){

    int n;
    cout<<"Enter the positive value of n : ";
    cin>>n;
    if(n<0) {
        cout<<"Not possible";
        return 0;
    }
    cout<<"Factorial = "<<fact(n);
}