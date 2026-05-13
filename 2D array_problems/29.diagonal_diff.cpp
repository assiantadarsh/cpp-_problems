#include<iostream>
using namespace std;

// Que -> Find difference between primary diagonal sum and secondary diagonal sum .

int main(){

    int n,m;
    cout<<"Enter the number of row : ";
    cin>>n;

    cout<<"Enter the value of column : ";
    cin>>m;

    if(n != m){
        cout<<"Diagonal sum are not possible";
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

    int sum1 = 0;
    int sum2 = 0;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(i == j){
                sum1 += arr[i][j];
            }
            if((i + j) == n-1){
                sum2 += arr[i][j];
            }
        }
    }
    cout<<"\nThe Diagonal difference : "<<sum1 - sum2;
}