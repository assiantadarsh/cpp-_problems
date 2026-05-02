#include<iostream>
using namespace std;

int main(){

    int n = 4, m = 4;

    int arr[4][4] = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10,13,14,17}
    };

    int target;
    cout<<"Enter target: ";
    cin>>target;

    int i = 0;
    int j = m - 1;

    while(i < n && j >= 0){
        if(arr[i][j] == target){
            cout<<"Found at ("<<i<<","<<j<<")";
            return 0;
        }
        else if(arr[i][j] > target){
            j--;  // move left
        }
        else{
            i++;  // move down
        }
    }

    cout<<"-1";
    return 0;
}