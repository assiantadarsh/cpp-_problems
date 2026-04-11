#include<iostream>
#include<cstdbool>
using namespace std;

// Sort array containing only 0, 1, 2 without using sort function.

void sorting(int arr[],int n){

    // Use bubble Sort Algorithem 

    for(int i = 0;i<n;i++){
        bool flag = true;
        for(int j = 0;j<n-1-i;j++){
            if(arr[j+1] < arr[j]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                flag = false;
            }
        }
        if(flag == true){
            break; 
        }
    }

}


int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;

    int arr[n];
    cout<<"Enter the values of array "<<endl;

    for (int i = 0;i<n;i++){
        cin>>arr[i];
    }
    
    sorting(arr,n);

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
