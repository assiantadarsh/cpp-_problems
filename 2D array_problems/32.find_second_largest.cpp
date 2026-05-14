#include<iostream>
#include<climits>
using namespace std;

// Que -> Find the second largest element in the matrix .

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
    int max = INT_MIN;
    int sec_max = INT_MIN;

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            if(max < arr[i][j]){
                sec_max = max;
                max = arr[i][j];
            }
            else if(sec_max < arr[i][j] && max != arr[i][j]){
                sec_max = arr[i][j];
                
            }
        }
    }
    cout<<"\nsecond maximum is : "<<sec_max;
}