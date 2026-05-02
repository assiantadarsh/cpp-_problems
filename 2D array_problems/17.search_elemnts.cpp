#include<iostream>
using namespace std;

// Que -> Search elemnts in the matrix if the target was exist return index otherwise return -1 .

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

    int target;
    cout<<"Enter the target : ";
    cin>>target;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(arr[i][j] == target){
                cout<<"("<<i<<","<<j<<")";
                return 0;
            }
        }
    }
    cout<<"-1";

}