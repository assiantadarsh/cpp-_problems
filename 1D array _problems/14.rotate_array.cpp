#include<iostream>

// Rotate the given array by k STeps , where k is non negative 
// NOTE -> K can be greator than n as well as where n is the size of the array ?

void reverse(int arr[],int start, int end ){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

using namespace std;
int main(){

    int n;
    cout<<"Enter the size of the array :";
    cin>>n;

    int arr[n];

    for(int i = 0 ; i<n; i++){

        cin>>arr[i];
    }

    int k;
    cout<<"Enter the value of k :";
    cin>>k;

    if(k>n){
        k = k%n;
    }
    if(k == 0){
        for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    }
    else{
        // Complete array reverse 

        reverse(arr,0,n-1);


        // K element reverse 

        reverse(arr,0,k-1);

        // Remaining element reverse

        reverse(arr,k,n-1);
    
        for(int i = 0;i<n;i++){
            cout<<arr[i]<<" ";
         }
    }
    

    return 0;
}