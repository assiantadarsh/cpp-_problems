#include<iostream>
#include<string>
using namespace std;

string convert(int n){
    string s = "";

    if(n == 0) return "0";
    bool isnegative = false;
    if(n  < 0){
        n = -n; // Positive
        isnegative = true;

    }

    while(n>0){
        int digit = n % 10;
        s =  char(digit + '0') + s;
        n = n/10;

    }
    if(isnegative == true){
        return "-" + s;
    }

    return s;
}
int main(){

    int n;
    cout<<"Enter number of n : ";
    cin>>n;

    cout<<"String Form : "<<convert(n);
}