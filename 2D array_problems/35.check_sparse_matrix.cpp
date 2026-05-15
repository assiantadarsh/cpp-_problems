#include<iostream>
using namespace std;

// Que -> Check Matrix is Sparse or Not
// Sparse matrix -> A matrix is sparse if most elements are 0. Check whether matrix is sparse.

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
    int count = 0;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
           if(arr[i][j] == 0) count++;
        }
    }
    if(count >= ((n*m)/2) + 1){
        cout<<"\nThis is sparse matrix";
    }
    else{
        cout<<"\nNot a sparse matrix";
    }
}