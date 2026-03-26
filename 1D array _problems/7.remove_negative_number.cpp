#include<iostream>

// Time complexity = O(n)
// Space complexity = O(1)

using namespace std;
int main(){
    // Remove negative number in the array.
    int arr[9] = {6,-4,-3,4,-6,4,3,-5,1}; 

    // Use Linear search
    
    int j = 0;
    
    for(int i = 0;i<9;i++){
        if(arr[i] >= 0){
            arr[j] = arr[i];
            printf("%d ",arr[j]);
            j++;
            
        }
        
    }

    

    
}