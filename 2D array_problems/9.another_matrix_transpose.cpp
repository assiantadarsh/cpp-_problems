#include<iostream>
using namespace std;

// Que -> WAP to print the transpose of the matrix entered by the user and store it in a seprate matrix.

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

    cout<<"\nAfter transpose : \n";

    int result[m][n];

    for(int i = 0; i < m ; i++){
        for(int j = 0; j < n ; j++){
            result[i][j] = arr[j][i];
            cout<<result[i][j]<<" | ";
        }
        cout<<"\n";
    }


}