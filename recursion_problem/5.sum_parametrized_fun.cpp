#include<iostream>
void sum(int x,int s){
    if (x == 0){
        std :: cout<<"SUM = "<<s;
        return;
    }
    sum(x-1,s+x);
    return;
    
}
// Print sum of n natural number using parametrized ???

using namespace std;

int main(){

    int n;
    cout<<"Enter the positive value of n : ";
    cin>>n;

    sum(n,0);
}