#include<iostream>
using namespace std;

// All elements appear twice except one, find that one.


int result(int arr[],int n){
    int ans = 0;

    for(int i = 0;i<n;i++){
        ans = ans ^ arr[i];
    }
    return ans;
}
int main(){
    int n ;
    cout<<"Enter the size of the array one n:";
    cin>>n;

    int arr1[n];

    cout<<"Enter the first array element :"<<endl;

    for(int i = 0;i<n ; i++){
        cin>>arr1[i];
    }
    
    cout<<"Unique element = "<<result(arr1,n);
}