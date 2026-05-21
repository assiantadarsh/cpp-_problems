#include<iostream>
using namespace std;

// Que -> Count how many times a target appears in a sorted array.

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

    // First Occurrence

    int i = 0 , j = n-1;
    int last = -1;
    int first = -1;

    while(i <= j){
        int mid = i + (j - i)/2;

        if(arr[mid] == target){
            first = mid;
            j = mid - 1;

        }
        else if(arr[mid] > target){
            j = mid - 1;
        }
        else{
            i = mid + 1;
        }   
    }

    if(first == -1){
        cout<<"Target Not Found";
        return 0;
    }
    int k = first;
    int q = n -1 ;
    while(k <= q){
        int mid1 = k + (q - k)/2;

        if(arr[mid1] == target){
            last = mid1;
            k = mid1 + 1;

        }
        else if(arr[mid1] > target){
            q = mid1 - 1;
        }
        else{
            k = mid1 + 1;
        }   
    }

    cout<<"Number of Occurrence : "<<last - first+ 1;
    }
