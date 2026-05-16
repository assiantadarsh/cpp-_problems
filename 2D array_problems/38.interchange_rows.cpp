#include<iostream>
using namespace std;

// Que -> Swap first row with last row.

int main(){

    int n,m;
    cout<<"Enter the number of row : ";
    cin>>n;

    cout<<"Enter the value of column : ";
    cin>>m;

    if(n <= 0 || m <= 0){
        cout<<"Can't possible";
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

    cout<<"After swap : \n";

    for(int j = 0;j<m;j++){
        swap(arr[0][j],arr[n-1][j]);
    }

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            cout<<arr[i][j]<<" | ";
        }
        cout<<"\n";
    }

}