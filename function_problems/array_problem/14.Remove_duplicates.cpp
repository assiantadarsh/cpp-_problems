#include<iostream>
using namespace std;

// Que -> Remove duplicates from a sorted array in-place.

void removes(int arr[],int n,int temp[]){
    int i = 0 , j = i + 1 ,k = 0;

    while(i<=n-1){
        if(i == n-1){
            temp[k] = arr[i];
            break;
        }
        else if(arr[i] != arr[j]){
            temp[k] = arr[i];
            k++;
            i++;
            j++;
        }
        else{
            i++;
            j++;
        }

    }
    for(int i =0;i<=k;i++){
        cout<<temp[i]<<" ";
    }
}

int main(){

    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int temp[n];
    removes(arr,n,temp);
    return 0;

}