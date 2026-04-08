#include<iostream>
#include<cstdbool>
using namespace std;
bool issort(int arr[],int n){
    int i = 0;
    while (i < n-1)
    {
        if(arr[i+1] > arr[i]){
            i++;
        }
        else{
            return false;
        }
    }
    return true;
    
}

int main(){

    // Check array is sorted or not ?????

    int n;
    cout<<"Enter the positive value of n:"<<endl;
    cin>>n;
    int arr[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    bool x = issort(arr,n);
    if(!x){
        cout<<"No";

    }
    else{
        cout<<"yes";
    }
    return 0;
}