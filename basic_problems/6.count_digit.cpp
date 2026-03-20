#include<iostream>
using namespace std;
int main(){

    int a;
    
    cout<<"enter the value of a:";
    cin>>a;

    int count = 0;

        while(a > 0){
            a = a/10;
            count++;
        }
        cout<<"The number of digit is :"<<count;
        return 0;
    }

