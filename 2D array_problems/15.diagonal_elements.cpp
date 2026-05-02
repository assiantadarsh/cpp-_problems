#include<iostream>
using namespace std;

// Que -> Print the first and second bot diagonal elements .

int main(){

    int n,m;
    cout<<"Enter the number of row : ";
    cin>>n;

    cout<<"Enter the value of column : ";
    cin>>m;

    if(n != m) {
        cout<<"Not possible ";
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

    int first_diagonal[n];
    int second_diagonal[n];

    for(int i = 0;i<n;i++){
        first_diagonal[i] = arr[i][i];
        second_diagonal[i] = arr[i][n - 1 - i];

    }
    cout<<"First diagonal : ";

    for(int i = 0;i<n;i++){
        cout<<first_diagonal[i]<<" ";
    }
    cout<<"\nSecond diagonal : ";
    for(int i = 0;i<n;i++){
        cout<<second_diagonal[i]<<" ";
    }
    

}