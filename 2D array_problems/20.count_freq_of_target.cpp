#include<iostream>
using namespace std;

// Que -> Count how many times a target appears in matrix .

int main(){

    int n,m;
    cout<<"Enter the number of row : ";
    cin>>n;

    cout<<"Enter the value of column : ";
    cin>>m;

    int arr[n][m];

    // Take Input 

    cout<<"Enter the value of matrix \n";

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            cout<<arr[i][j]<<" | ";
        }
        cout<<"\n";
    }
    int target;
    cout<<"Enter the value of target : ";
    cin>>target;

    int count = 0;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            if(arr[i][j] == target){
                count++;
            }
        }
    }

    cout<<"\nTarget appears in : "<<count<<" times .";
}