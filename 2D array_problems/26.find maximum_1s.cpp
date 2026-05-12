#include<iostream>
using namespace std;

// Que -> Find the row having maximum number of 1s.

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

    int max_sum = 0;
    
    int p = -1;

    for(int i = 0;i<n;i++){
        int sum = 0;
        for(int j = 0;j<m;j++){
            sum += arr[i][j];
        }
        if(max_sum < sum){
            max_sum = sum;
            p = i;
        }
    }
    cout<<"The MAximum 1s row : "<<p;
}