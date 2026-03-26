#include<iostream>
using namespace std;

// WAP to find duplicatzes elements from a given array of integers if only one element is duplicate
int main(){
    int n;
    cout<<"enter the positiive value of n :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i] == arr[j]){
                cout<<"The duplicate element is "<<arr[i];
                break;
            }
        }
    }

}