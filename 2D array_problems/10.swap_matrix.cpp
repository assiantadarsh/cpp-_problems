#include<iostream>
using namespace std;

// Que -> WAP to change the given n * n matrix to its transpose.

int main(){

    int n,m;
    cout<<"Enter the number of row : ";
    cin>>n;

    cout<<"Enter the value of column : ";
    cin>>m;

    int arr[n][m];

    // Take Input 
    if(n != m){
        cout<<"Not possible to transpose";
        return 0;
    }

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
    cout<<"\nTrnaspose matrix"<<endl;
    for(int i = 0;i<n;i++){
        for(int j = i;j<m;j++){
            if(i != j){
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<arr[i][j]<<" | ";
        }
        cout<<"\n";
    
    }
}