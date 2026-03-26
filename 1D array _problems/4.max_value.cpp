#include<iostream>
using namespace std;
int main(){
    // Find max number in the array if the array is sorted
    int arr[6] = {2,2,4,4,5,7}; 

    // Use binary search

    int start = 0,end = 5,mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] <= arr[end]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    cout<<"The maximum number is :"<<arr[end];
}