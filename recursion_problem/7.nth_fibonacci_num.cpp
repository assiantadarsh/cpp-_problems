#include<iostream>

int fibo(int a) {
    if(a == 0 || a== 1) return a;
    return fibo(a-1) + fibo(a-2);
} 

// Print the nth fibonacci number ???

using namespace std;

int main(){

    int b;
    cout<<"Enter the positive value of n : ";
    cin>>b;
    
    cout<<"ANS = "<<fibo(b);;

}