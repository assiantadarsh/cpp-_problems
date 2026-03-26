#include<iostream>

// Time complexity = O(n)
// Space complexity = O(1)

using namespace std;
int main(){
    // Count negative number in the array.
    int arr[9] = {6,-4,-3,4,-6,4,3,-5,1}; 

    // Use Linear search
    int count = 0;

    
    for(int i = 0;i<8;i++){
        if(arr[i] < 0){
            count++;
        }
    }
    cout<<"The number of Negative number is : "<<count;
}