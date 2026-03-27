#include<iostream>
using namespace std;

// Que -> Given array containig element from (1 - 10) except one element in this range is missing find the missing number 
int main(){
    
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;

    int arr[n];
    int sum = 0;

    for(int i = 0 ; i<n; i++){

        cin>>arr[i];
        sum = sum + arr[i];
    } 
    // 10 elements sum 
    int sum2 = ((n+1)*(n+2)) / 2;

    cout<<"The missing number is :"<< sum2 - sum;
}