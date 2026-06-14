#include<iostream>
#include<climits>

// Find the maximum subarray sum and also print the subarray which gives that sum.

using namespace std;

int main(){
    int arr[7] = {3,-4,5,4,-1,7,-8};

    int start = 0;
    int ans_start = 0;
    int ans_end = 0;

    int current_sum = 0;
    int max_sum = INT_MIN;

    for(int i = 0;i < 7;i++){

        current_sum += arr[i];
        if(max_sum < current_sum){
            max_sum = current_sum;
            ans_start = start;
            ans_end = i;
        }

        if(current_sum < 0){
            current_sum = 0;
            start = i + 1;
        }
    }

    cout<<"The maximum sum is : "<<max_sum<<endl;
    cout<<"The maximum subarray is : ";
    
    for(int i = ans_start;i<=ans_end;i++){
        cout<<arr[i]<<" ";
    }
}
