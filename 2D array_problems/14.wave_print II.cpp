#include<iostream>
using namespace std;

// Que -> Wave print II

// Input ->
// 1 | 2 | 3 | 
// 4 | 5 | 6 | 
// 7 | 8 | 9 | 

// Output
// 7 | 4 | 1 | 
// 2 | 5 | 8 | 
// 9 | 6 | 3 | 

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
    cout<<"\nWave print\n";
    for(int j = 0;j < m;j++){
        if(j %2 == 0){
            for(int i = n - 1 ; i>= 0;i--){
                cout<<arr[i][j]<<" | ";
            }
        }
        else{
            for(int i = 0 ; i< n;i++){
                cout<<arr[i][j]<<" | ";
            }
        }
        cout<<"\n";
    }

}