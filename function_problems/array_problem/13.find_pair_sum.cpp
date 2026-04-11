#include<iostream>
using namespace std;

// Que -> Check if any two elements sum to a given target.

void sum(int arr[],int n,int target){
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]+arr[j] == target){
                cout<<"Yes";
                return;
            }
            
        }
        
    }
    cout<<"No";
}

int main(){

    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cout<<"\nEnter the value of target:";
    cin>>target;


    sum(arr,n,target);

    return 0;

}