#include<iostream>
using namespace std;

// Find the missing number from an array containing numbers from 1 to n.

int missingnum(int arr[],int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    int sum2 = ((n+1)*(n+2))/2;
    return sum2 - sum;
}

int main(){
    int n ;
    cout<<"Enter the positive value of n:";
    cin>>n;

    int arr[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int x = missingnum(arr,n);
    cout<<"Missing num = "<<x;

}