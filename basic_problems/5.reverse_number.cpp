#include<iostream>
using namespace std;
int main(){

    int a;
    
    cout<<"enter the value of a:";
    cin>>a;

    int rev = 0,rem;

        while(a > 0){
            rem = a % 10;
            rev = rev * 10 + rem;
            a = a/10;
        }
        cout<<"The reverse number is :"<<rev;
        return 0;
    }

