#include<iostream>
#include<climits>
using namespace std;

// Find the contiguous subarray with maximum sum.

int maximum(int arr[],int n){
    int max = INT_MIN;
    for(int i = 0;i<n;i++){
        int sum1 = 0;
        for(int j = i;j<n;j++){
            sum1= sum1 + arr[j];
            if(sum1 > max){
                max = sum1;
            }
        }
        
    }
    
    return max;

}

int main(){
    int n ;
    cout<<"Enter the size of the array one n:";
    cin>>n;

    int arr1[n];

    for(int i = 0;i<n;i++){
        cin>>arr1[i];
    }

    int x = maximum(arr1,n);
    cout<<x;
   
}