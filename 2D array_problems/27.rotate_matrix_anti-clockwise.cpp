#include<iostream>
using namespace std;

// Que -> Rotate matrix by 90 degrees anti-clockwise .

// Input:
// 1 2 3
// 4 5 6
// 7 8 9

// Output:
// 3 6 9
// 2 5 8
// 1 4 7

int main(){

    int n,m;
    cout<<"Enter the number of row : ";
    cin>>n;

    cout<<"Enter the value of column : ";
    cin>>m;

    if(n != m){
        cout<<"Not possible";
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

    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    cout<<"\nAfter rotate \n";

    for(int i = n - 1;i>=0;i--){
        for(int j  = 0;j<n;j++){
            cout<<arr[i][j]<<" | ";
        }
        cout<<"\n";
    }
}