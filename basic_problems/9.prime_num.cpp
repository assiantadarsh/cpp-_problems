#include<iostream>
using namespace std;
int main(){

    int a;
    bool flag = true;
    cout<<"enter the value of a:";
    cin>>a;

    for (int i = 2;i<a;i++){
        if(a % i == 0){
            flag =false;
            break;
        }
    }

    if(flag == true) cout<<"The number is prime";

    else cout<<"The number is not prime";

    return 0;
    }

