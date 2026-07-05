#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the positive value of n : ";
    cin>>n;

    int arr[n];

    for(int i = 0; i < n;i++){
        cin>>arr[i];
    }
    int max_count = 0;
    int value = 0;

    for(int i = 0 ; i < n; i++){
        int count = 0;
        bool isvisited = false;

        for(int k = 0; k < i; k++){
            if(arr[i] == arr[k]){
                isvisited = true;
            }
        }

        if(isvisited) continue;

        else{
            for(int j = 0; j < n;j++){
                if(arr[i] == arr[j]){
                    count++;
                }
            }
            if(max_count < count){
                max_count = count;
                value = arr[i];
            }
        }
    }

    cout<<"Maximum capacity element : "<<value;
}