#include<iostream>

long long power(int a,int b) {
    if(b == 0) return 1;
    return a * power(a,b-1);
} 

// WAP to calculate 'a' raised to the power of 'b' ???

using namespace std;

int main(){

    int p, b;
    cout<<"Enter the positive value of base : ";
    cin>>b;
    cout<<"Enter the positive value of power : ";
    cin>>p;
    cout<<"ANS = "<<power(b,p);;

}