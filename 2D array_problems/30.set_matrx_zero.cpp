#include<iostream>
using namespace std;

// Que -> If an element is 0, make its entire row and column zero.

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
    int c[n][m];

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            c[i][j] = arr[i][j];
        }
    }

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(c[i][j] == 0){
                // Row zero 
                for(int k = 0;k<m;k++){
                    arr[i][k] = 0;
                }
                // Column Zero
                for(int k = 0;k<n;k++){
                    arr[k][j] = 0;
                }
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