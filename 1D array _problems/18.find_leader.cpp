#include<iostream>
using namespace std;

// Check leader
  
int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    int arr[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int maxright = arr[n-1];
    cout<<maxright<<" ";
    for(int i = n-2;i>=0;i--){
        if(arr[i] >= maxright){
            cout<<arr[i]<<" ";
            maxright = arr[i];
        }
    }


}
