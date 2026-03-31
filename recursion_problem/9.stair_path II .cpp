#include<iostream>

int fibo(int a) {
    if(a == 2 || a== 1) return a;
    if(a == 3) return a;
    
    return fibo(a-1) + fibo(a-2) + fibo(a-3);
} 
// USE only singal , double and triple step

// WAP to calculte how many ways when a man reach ground to top ???

using namespace std;

int main(){

    int b;
    cout<<"Enter the positive value of n : ";
    cin>>b;
    
    cout<<"ANS = "<<fibo(b);;

}