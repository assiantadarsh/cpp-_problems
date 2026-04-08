#include<iostream>

using namespace std;

int duplicate(int arr[],int n){
    
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i] == arr[j]){
                return arr[i];
               
            }        
        }
    }
    return -1;
}
int main(){

    // Find duplicate elements if only one element is duplicate if array is not Sorted ?????

    int n;
    cout<<"Enter the positive value of n:"<<endl;
    cin>>n;
    int arr[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    
    int x = duplicate(arr,n);
    if(x == -1) cout<<"Can not find duplicate element";
    else cout<<"Duplicate element = "<<x;
    return 0;
}