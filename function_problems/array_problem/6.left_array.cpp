#include<iostream>
using namespace std;

// array left rotate

void reverse(int arr[],int start,int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void leftarray(int arr[] , int n ,int k){
    
    reverse(arr,0,n-1);
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-k-1);

}

int main(){

    int n ;
    cout<<"Enter the positive value of n:";
    cin>>n;

    int arr[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the value of k :";
    cin>>k;
    if(k>n){
        k = k%n;
    }
    leftarray(arr,n,k);

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}