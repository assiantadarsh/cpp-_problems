#include<iostream>
using namespace std;

// Que -> Sort each row of the matrix individually.

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

    for(int i = 0;i<n;i++){

        for(int j = 0;j<n;j++){

            bool flag = false;

            for(int k = 0;k<m - 1 - j;k++){

                if(arr[j][k] > arr[j][k+1]){

                    swap(arr[i][k] ,arr[i][k+1]);
                    
                    flag = true;

                }
            }
            if(!flag){
                break;
            }
        }
    }
    cout<<"\nAfter Sorting .\n";

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            cout<<arr[i][j]<<" | ";
        }
        cout<<"\n";
    }
}