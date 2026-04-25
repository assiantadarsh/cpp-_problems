#include<iostream>
using namespace std;

// Que -> Convert Decimal → Octal conversion and given number is positive .

// Time Complexity = O(log n)
// Space Complexity = O(1)


int main(){

    int n;
    cout<<"Enter the positive num :";
    cin>>n;
    int rem[64];

    if(n == 0 || n == 1){
        cout<<n;
        return 0;
    }

    if(n < 0){
        cout<<"Not possible";
        return 0;
    }

    int count = 0;

    while(n>0){
        rem[count] = n%8;
        n = n/8;
       
        count++;   
    }
    cout<<"Octal : ";
    for(int i = count -1;i>=0;i--){
        cout<<rem[i];
    }
    return 0;
}