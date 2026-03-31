#include<iostream>

int power(int a,int b) {
    if(1 == b) return a;
    if(0 == b) return 1;
    int rec = power(a,b/2);
    if(0 == b % 2){
        return rec * rec;
    }
    else{
        return rec * rec * a;
    }

} 
// USE (power function) logrithmic
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