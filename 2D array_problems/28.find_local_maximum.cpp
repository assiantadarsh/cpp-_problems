#include<iostream>
using namespace std;

// Que -> Find all elements greater than all their adjacent neighbors.

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
    cout<<"Local Maximum : ";

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            bool ismax = true;
            int curr = arr[i][j];

            // UP

            if(i > 0 && arr[i-1][j] >= curr){
                ismax = false;
                
            }
            // Right
            if(j < m - 1 && arr[i][j+1] >= curr){
                ismax = false;
                
            }
            // Left
            if(j > 0 && arr[i][j-1] >= curr){
                ismax = false;
                
            }
            // Down
            if(i < n - 1 && arr[i+1][j] >= curr){
                ismax = false;
                
            }

            if(ismax){
                cout<<curr<<" ";
            }
        }
    }
    return 0;
}
