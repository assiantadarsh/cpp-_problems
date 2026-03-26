#include<iostream>
// Find the total number of pairs in given array whose sum is equale to the given value of X .
// Time complexity = O(n^2)
// Space complexity = O(1)

using namespace std;
int main(){
    
    int arr[9] ={2,3,4,5,1,6,7,8,9}; 

    // Use Linear search
   
    int x;
    cout<<"Enter the value of X :";
    cin>>x;

    for(int i = 0;i<9;i++){
        for(int j = i;j<9;j++){
            if(arr[i]+arr[j] == x){
                cout<<arr[i]<<" + "<<arr[j]<<" = "<<x<<endl;
            }
        }
        
        }
        
    
    
    
}