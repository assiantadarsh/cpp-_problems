#include<iostream>

int fibo(int a) {
    if(a == 2 || a== 1) return a;
    
    return fibo(a-1) + fibo(a-2);
} 
// USE only singal and double step

// WAP to calculte how many ways when a man reach ground to top ???

using namespace std;

int main(){

    int b;
    cout<<"Enter the positive value of n : ";
    cin>>b;
    
    cout<<"ANS = "<<fibo(b);;

}