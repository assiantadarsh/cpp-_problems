#include<iostream>
using namespace std;

// Que -> Check whether a matrix is symmetric.

int main(){

    int n,m;
    cout<<"Enter the number of row : ";
    cin>>n;

    cout<<"Enter the value of column : ";
    cin>>m;

    if(n != m){
        cout<<"Not Symmetry.";
        return 0;
    }

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

    // Check symmetry
    for(int i = 0; i < n ; i++){
        for(int j = i+1; j < m ; j++){
            if(arr[i][j] != arr[j][i]){
                cout<<"\nNot Symmetry";
                return 0;
            }
        }
    }

    cout<<"\nSymmetry";
}