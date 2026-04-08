#include<iostream>
#include<climits>
using namespace std;
int largest(int arr[],int n){
    int max = INT_MIN;
    int sec_max = INT_MIN;
    for(int i = 0;i<n;i++){
        if(max < arr[i]){
            sec_max = max;
            max = arr[i];
        }
        else if(arr[i] > sec_max && arr[i] != max)
        {
            sec_max = arr[i];
        }
    }
    
    return sec_max;
}

int main(){

    // Find second largest element 

    int n;
    cout<<"Enter the positive value of n:"<<endl;
    cin>>n;
    int arr[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    
    int ans = largest(arr,n);
    if(ans == INT_MIN){
        cout<<"Maximum element cannot found";
    }
    else{
        cout<<"Second Largest = "<<ans;
    }
    
}