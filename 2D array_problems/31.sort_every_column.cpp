#include<iostream>

using namespace std;

// Que -> Sort every column of the matrix in ascending order.

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
    for(int j = 0;j<m;j++){
        for(int k = 0;k<n;k++){
            bool flag = false;
            for(int i = 0;i<n - 1 -k;i++){
                if(arr[i][j] > arr[i+1][j]){
                    swap(arr[i][j] , arr[i+1][j]);
                    flag = true; 
                }
            }
            if(!flag){
                break;
            }
        }
    }
    cout<<"\nAnswer : "<<endl;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            cout<<arr[i][j]<<" | ";
        }
        cout<<"\n";
    }
}