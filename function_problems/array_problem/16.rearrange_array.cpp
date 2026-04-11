#include<iostream>
using namespace std;

// Given a sorted array, rearrange it in max-min form.

void arrange(int arr[],int n,int temp[]){
    int i = 0,j = n-1,k = 0;
    while(i<j){
        temp[k] = arr[j];
        j--;
        k++;
        temp[k] = arr[i];
        i++;
        k++;
    }
    
    // For handle the odd case ????

    if(i == j){
        temp[k] = arr[i];
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;

    int arr[n];
    cout<<"Enter the values of array "<<endl;

    for (int i = 0;i<n;i++){
        cin>>arr[i];
    }
    
    int temp[n];

    arrange(arr,n,temp);

    for(int i = 0;i<n;i++){
        cout<<temp[i]<<" ";
    }
}
