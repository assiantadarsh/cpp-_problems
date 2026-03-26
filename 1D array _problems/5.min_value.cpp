#include<iostream>

// Time complexity = O(n)
// Space complexity = O(1)

using namespace std;
int main(){
    // Find max number in the array.
    int arr[9] = {6,4,3,4,6,4,3,5,1}; 

    // Use Linear search
    
    int min = arr[0];
    for(int i = 0;i<8;i++){
        if(min > arr[i+1]){
            min = arr[i+1];
        }
    }
    cout<<"The minimum number is : "<<min;
}