#include<iostream>
using namespace std;

// Que -> Given an array and a num X if X lies in this array print its index , iF X is not lies 
// print NOT .
int main(){
    
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;

    int arr[n];
    

    for(int i = 0 ; i<n; i++){

        cin>>arr[i];
    } 
    
    int X;
    cout<<"Enter the value of X :";
    cin>>X;

    bool flag = true;
    int idx = 0;

    for(int i = 0;i<n;i++){
        if(arr[i] == X){
            idx= i;
            flag = false;
        }
    }
    if (flag == true){
        cout<<"NOT";
    }
    else{
        cout<<"The index is :"<<idx;
    }
}