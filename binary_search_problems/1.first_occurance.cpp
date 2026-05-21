#include<iostream>

using namespace std;

// Que -> Find the first index of a target in a sorted array with duplicates .
// Time Complexity: O(log n)
// Space Complexity: O(1)

int main(){

    int n;
    cout<<"Enter the positive value of n : ";
    cin>>n;
    int arr[n];

    for(int i = 0;i <n;i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the value of target : ";
    cin>>target;
    

    int i = 0 , j = n-1;
    int ans = -1;

    while(i <= j){
        int mid = i + (j - i)/2;

        if(arr[mid] == target){
            ans = mid;
            j = mid - 1;

        }
        else if(arr[mid] > target){
            j = mid - 1;
        }
        else{
            i = mid + 1;
        }   
    }

    if(ans != -1){
        cout<<"The first index is : "<<ans;
    }
    else{
        cout<<"Target Not found";
    }
    
}