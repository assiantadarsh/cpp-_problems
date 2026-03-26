#include<iostream>
// Revese the array without making extra array .
// Time complexity = O(n)
// Space complexity = O(1)

using namespace std;
int main(){
    
    int arr[9] ={2,3,4,5,1,6,7,8,9}; 

    // Use Linear search
   

    for(int i = 0;i<9/2;i++){
        int temp = arr[i];
        arr[i] = arr[9-1-i];
        arr[9-1-i] = temp;
    }
    for(int i = 0;i<9;i++){
        printf("%d ",arr[i]);
    }
        
    
    
    
}