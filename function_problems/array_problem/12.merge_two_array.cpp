#include<iostream>
using namespace std;

// Merge two sorted arrays into one sorted array.

void merge(int a[],int n,int b[],int m,int arr[]){
    int i = 0;
    int j = 0;
    int k =0;
    while(i < n && j < m){
        if(a[i] <= b[j]){
            arr[k] = a[i];
            i++;
        }
        else{
            arr[k] =b[j];
            j++;
        }
        k++;

    }
    while(i < n){
        arr[k] = a[i];
        i++;
        k++;
    }
    while(j < m){
        arr[k] = b[j];
        j++;
        k++;
    }
}
int main(){
    int n ;
    cout<<"Enter the size of the array one n:";
    cin>>n;

    int arr1[n];

    int m;
    cout<<"Enter the size of the array two m:";
    cin>>m;

    int arr2[m];
    
    cout<<"Enter first array elements "<<endl;

    for(int i = 0;i<n;i++){
        cin>>arr1[i];
    }

    cout<<"Enter second array elements "<<endl;

    for(int i = 0;i<m;i++){
        cin>>arr2[i];
    }
    int new_array[n+m];
    merge(arr1,n,arr2,m,new_array);

    for(int i = 0;i<n+m;i++){
        cout<<new_array[i]<<" ";
    }
}