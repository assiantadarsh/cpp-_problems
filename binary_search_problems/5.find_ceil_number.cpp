#include<iostream>
using namespace std;

// Que -> Find Ceil of a Number
// Ceil means -> If the number is greator than or equale to the Target .
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
    cout<<"Enter Target : ";
    cin>>target;
    int ansidx = -1;

    int i = 0 ,j = n - 1;

    while(i <=j){
        int mid = i + (j - i)/2;

        if(arr[mid] >= target){
            ansidx = mid;
            j = mid - 1;
        }
        else{
            i = mid +1 ;
        }
    }

    if(ansidx != -1){
        cout<<"Ceil number : "<<arr[ansidx];
    }
    else{
        cout<<"Ceil Number Does Not Exist";
    }
}