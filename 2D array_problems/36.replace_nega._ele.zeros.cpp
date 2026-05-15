#include<iostream>
using namespace std;

// Que -> Replace all negative numbers in matrix with 0.

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

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            if(arr[i][j] < 0){
                arr[i][j] = 0;
            }
        }  
    }
    cout<<"\nFinal Answer : \n";
    
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            cout<<arr[i][j]<<" | ";
        }
        cout<<"\n";
    }
}