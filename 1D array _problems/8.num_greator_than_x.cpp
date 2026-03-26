#include<iostream>
// Count the number of element in given array greator than X.
// Time complexity = O(n)
// Space complexity = O(1)

using namespace std;
int main(){
    
    int arr[9] = {6,4,3,4,6,4,3,5,1}; 

    // Use Linear search
    int count = 0;
    int x;
    cout<<"Enter the value of X :";
    cin>>x;

    for(int i = 0;i<9;i++){
        if(arr[i] > x){
            count++;
            
        }
        
    }
    cout<<"The number of elements that are greator than x : "<<count;
    
}