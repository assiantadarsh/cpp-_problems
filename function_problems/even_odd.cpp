#include<iostream>
using namespace std;
// int even(int x);
// int odd(int x);
void even(int x)
{
     cout<<x <<" is even number"; 
}

void odd(int x){
    cout<<x<<" is odd number";
}
int main(){

    int a;
    cout<<"Enter the value of a :";
    cin>>a;
    if(a% 2 == 0){
        even(a);
    }
    else{
        odd(a);
    }
}