#include<iostream>
#include<string>
using namespace std;

// Que -> Convert a number to numeric string with to_string().

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;

    string s = to_string(n);
    cout<<s;
}