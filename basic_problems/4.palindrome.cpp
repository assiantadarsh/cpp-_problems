#include<iostream>
using namespace std;
int main(){

    int a;
    
    cout<<"enter the value of a:";
    cin>>a;

    int temp = a,rev = 0,rem;

    if(a < 0) cout<<"Negative numbers are not palindrome";

    else{
        while(a > 0){
            rem = a % 10;
            rev = rev * 10 + rem;
            a = a/10;
        }
        if(temp == rev){
            cout<<"The number is palindrome " << endl;
        }
        else{
            cout<<"The number is not palindrome"<< endl;
        }
    }

}