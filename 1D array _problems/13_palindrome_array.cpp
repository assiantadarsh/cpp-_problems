#include<iostream>
// Check the array was palindrome or not.
// Time complexity = O(n)
// Space complexity = O(1)

using namespace std;
int main(){
    int n;
    cout<<"enter the positive value of n:";
    cin>>n;

    int arr[n]; 

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int x  = 1;
    for(int i = 0;i<n/2;i++){
        if(arr[i] != arr[n-i-1]){
            x = 0;
            cout<<"The array was not palindrome ";
            break;
        }
        
    }

    if(x == 1){
        cout<<"The array was palindrome";
    }

   
    
    
    
}