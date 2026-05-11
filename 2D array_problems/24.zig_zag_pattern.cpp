#include<iostream>
using namespace std;

// Que -> Print matrix rows alternatively left-to-right and right-to-left.

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
    cout<<"\nAnswer \n";
    
    for(int i = 0;i < n;i++){
        if(i % 2 == 0){
            for(int j = 0;j < m;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j = m - 1;j >= 0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<"\n";
    }
}