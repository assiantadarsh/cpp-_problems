#include<iostream>
using namespace std;

// Que -> Given an n X m matrix 'a' print all elements of the matrix in spiral order .
// Platform -> Leetcode(54)

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
    cout<<"\nSpiral matrix \n";

    int minr = 0;
    int maxr = n - 1;
    int minc = 0;
    int maxc = m - 1;
    int tne = n*m;
    int count = 0;

    while(count < tne){

        // Print minimum row 
        for(int j = minc;j<= maxc;j++){
            cout<<arr[minr][j]<<" ";
            count++;
        }
        minr++;
        if(count >= tne) break;
        // print maximum column
        for(int i = minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
            count++;
        }
        maxc--;
        if(count >= tne) break;
        // Print maximum row in reverse order 
        for(int j = maxc;j>=minc;j--){
            cout<<arr[maxr][j]<<" "; 
            count++;
        }
        maxr--;
        if(count >= tne) break;
        // Print minimum column in reverse order 
        for(int i = maxr;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
            count++;
        }
        minc++;
        if(count >= tne) break;
        
    }

}