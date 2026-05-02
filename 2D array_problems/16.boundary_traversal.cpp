#include<iostream>
using namespace std;

// Que -> Print only the boundary elements .

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
    int minr = 0;
    int maxr = n - 1;
    int minc = 0;
    int maxc = m - 1;

    for(int i = minc; i<= maxc;i++){
        cout<<arr[minr][i]<<" ";
    }
    minr++;
    for(int i = minr;i<= maxr;i++){
        cout<<arr[i][maxc]<<" ";
    }
    maxc--;
    for(int i = maxc;i>= minc;i--){
        cout<<arr[maxr][i]<<" ";
    }
    maxr--;
    for(int i = maxr; i>=minr;i--){
        cout<<arr[i][minc]<<" ";
    }

}