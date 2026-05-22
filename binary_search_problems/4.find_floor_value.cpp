#include<iostream>
using namespace std;

// Que -> Find Floor of a Number
// Floor means -> The Element is less than or equale to the Target

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

    int i = 0, j = n - 1;
    while(i <= j){
        int mid = i + (j - i)/2;
        
        if(arr[mid] <= target){
        ansidx = mid;
        i = mid + 1;
        }
        
        else if(arr[mid] > target){
            j = mid - 1;
        }
        else{
            i = mid + 1;
        }
    }

    if(ansidx != -1){
        cout<<"Floor : "<<arr[ansidx];
    }
    else{
        cout<<"Floor Does not Exist";
    }

}