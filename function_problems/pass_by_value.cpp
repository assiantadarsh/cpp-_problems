#include<iostream>
using namespace std;
int add(int a,float b);   //function decleration
   
int add(int a,float b)    // function definition 
{
    // cout<<"Enter the value of a & b :";
    // cin>>a>>b;
    int c = a+b;
    cout<<"addition is "<<c;
}
int main(){
    add(16,34);  // call by value
    
}