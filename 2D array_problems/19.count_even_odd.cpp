#include<iostream>
using namespace std;

// Que ->

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
    int count_even = 0;
    int count_odd = 0;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            if((arr[i][j] % 2 == 0)){
                count_even++;
            }
            else{
                count_odd++;
            }
        }
    }

    cout<<"\nEven numbers : "<<count_even;
    cout<<"\nOdd numbers : "<<count_odd;

}