#include<iostream>
using namespace std;
int main(){

    int a;
    
    cout<<"enter the value of a:";
    cin>>a;

    int sum = 0,rem;

        while(a > 0){
            rem = a%10;
            sum +=rem;
            a = a/10;
            
        }
        cout<<"The sum of digit is :"<< sum;
        return 0;
    }

