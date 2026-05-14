#include<iostream>
using namespace std;

// Que -> Count total prime numbers present in matrix.

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
    int count = 0;
    for(int i = 0;i < n;i++){

        for(int j = 0; j < m;j++){
            bool flag = true;
            
            if(arr[i][j] < 2) continue;

            for(int k = 2;k < arr[i][j];k++){
                if(arr[i][j] % k == 0){
                    flag = false;
                    break;
                }
            }
            if(flag) count++;   
        }
    }

    cout<<"The number of prime number : "<<count ;
}