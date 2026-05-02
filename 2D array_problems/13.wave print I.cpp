#include<iostream>
using namespace std;

// Que -> Wave print
// Input ->
// 1 2 3 
// 4 5 6
// 7 8 9

// Output ->
// 1 2 3 
// 6 5 4
// 7 8 9
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

    for(int i = 0;i<n;i++){
        if(i %2 != 0){

            for(int j = m -1 ; j >= 0 ; j--){
                cout<<arr[i][j]<<" | ";
            }
            cout<<"\n";
        }
        else{
            for(int j = 0 ; j < m ; j++){
                cout<<arr[i][j]<<" | ";
            }
            cout<<"\n";
        }

    }

}