#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[7] = {3,-4,5,4,-1,7,-8};

    int current_sum = 0;
    int max_sum = INT_MIN;

    for(int i = 0;i < 7;i++){

        current_sum += arr[i];
        max_sum = max(current_sum,max_sum);

        if(current_sum < 0){
            current_sum = 0;
        }
    }

    cout<<"The maximum sum is : "<<max_sum;
}