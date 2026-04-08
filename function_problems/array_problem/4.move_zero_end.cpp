#include<iostream>
#include<cstdbool>
using namespace std;

void move(int arr[],int n){
    for(int i = 0;i<n;i++){
        int b = 1;
        for(int j = i;j<n-1;j++){
            if(arr[j] == 0){
                b = 0;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
            if(b == 1){
                break;
            }
        }
    }
    
}
int main(){

    // Move Zero at the end ?????

    int n;
    cout<<"Enter the positive value of n:"<<endl;
    cin>>n;
    int arr[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    
    move(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}