#include<iostream>
using namespace std;

// Right rotate 

void reverse(int arr[],int start,int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int rightarray(int arr[],int n,int k){
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    return 0;
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
    rightarray(arr,n,k);

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}