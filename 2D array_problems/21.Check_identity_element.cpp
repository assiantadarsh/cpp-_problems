#include<iostream>
using namespace std;

// Que -> Check whether the matrix is an identity matrix.

int main(){

    int n,m;
    cout<<"Enter the number of row : ";
    cin>>n;

    cout<<"Enter the value of column : ";
    cin>>m;

    int arr[n][m];

    if(n != m){
        cout<<"Not possible ";
        return 0;
    }
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

    // Check Identity 
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(i == j && (arr[i][j] != 1)){
                cout<<"\nNot Identity Matrix :";
                return 0;
            }
            else if(arr[i][j] != 0 && i != j){
                cout<<"\nNot Identity Matrix :";
                return 0;
            }
        }
    }

    cout<<"\nIdentity matrix .";
}