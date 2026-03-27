#include<iostream>

using namespace std;

// Que -> FInd second largest element . 
int main(){
    
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;

    int arr[n];
    

    for(int i = 0 ; i<n; i++){

        cin>>arr[i];
    } 
    
   int max = arr[0];
    int secmax = arr[0];
   for(int i = 0;i<n;i++){
    if(max<arr[i]){
        secmax = max;
        max = arr[i];
    }
    else if(secmax < arr[i] && max != arr[i]){
        secmax = arr[i];
    }
   }
   cout<<"SECOND MAX = "<<secmax;
}