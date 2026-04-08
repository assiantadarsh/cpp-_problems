#include<iostream>
using namespace std;

void rev(int arr[],int n){
    for(int i = 0;i<n/2;i++){
        int temp = arr[i];
        arr[i] = arr[n - 1 -i];
        arr[n - 1 - i ] = temp;
    }
    return;
}
int main(){

    // Reverse an array without using extra space .
    int n;
    cout<<"Enter the positive value of n:"<<endl;
    cin>>n;
    int arr[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    rev(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}