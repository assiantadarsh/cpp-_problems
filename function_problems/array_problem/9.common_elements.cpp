#include<iostream>
using namespace std;

// Find common elements in two arrays.

void common(int arr1[],int n,int arr2[],int m){
    for(int i = 0;i<n;i++){
        for(int j =0;j<m;j++){
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
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
    common(arr1,n,arr2,m);

   
}