#include<iostream>
// Find the total number of Triplets in given array whose sum is equale to the given value of X .
// Time complexity = O(n^3)
// Space complexity = O(1)

using namespace std;
int main(){
    
    int arr[9] ={2,3,4,5,1,6,7,8,9}; 

    // Use Linear search
   
    int x;
    cout<<"Enter the value of X :";
    cin>>x;

    for(int i = 0;i<9;i++){
        for(int j = i+1;j<9;j++){
            for(int k = j+1;k<9;k++){
                if(arr[i]+arr[j] + arr[k] == x){
                cout<<arr[i]<<" + "<<arr[j]<<" + "<<arr[k]<<" = "<<x<<endl;
            }
            }
            
        }
        
        }
        
    
    
    
}