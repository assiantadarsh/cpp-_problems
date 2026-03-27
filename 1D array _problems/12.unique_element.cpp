#include<iostream>
// Find the unique elements if all element are double only one element are unique .
// Time complexity = O(n)
// Space complexity = O(1)

using namespace std;
int main(){
    
    int arr[9] ={5,6,7,8,9,9,8,7,6}; 

    // Use XOR method
   int XOR = 0;

    for(int i = 0;i<9;i++){
        XOR = XOR^arr[i];
    }
    
    cout<<"The unique element is :"<<XOR; 
    
    
    
}