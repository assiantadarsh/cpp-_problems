#include<iostream>
using namespace std;

// Find element appearing more than n/2 times.

void frequency(int arr[],int n){
    int t = n/2;
    for(int i = 0;i<n;i++){
        int count = 0;

        int visited = 0;
        for(int k = 0;k<i;k++){
            if(arr[i] == arr[k]){
                visited = 1;
                break;
            }
        }
        if(visited == 1) continue;
        else{
            for(int j = i;j<n;j++){
                if(arr[i] == arr[j]){
                    count++;
                } 
        }
        if(count >= t){
            cout<<"Majority element : "<<arr[i]<<endl;
        }
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
    frequency(arr,n);

}
