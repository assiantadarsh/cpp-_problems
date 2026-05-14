#include<iostream>
#include<algorithm>
using namespace std;

// Que -> Sort the entire matrix in ascending order.

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
    int size = n*m;
    int temp[size];
    int k = 0;

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            temp[k] = arr[i][j];
            k++;
        }
    }
    for(int i = 0;i < size;i++){
        bool flag = false;
        for(int j = 0;j < size - 1 - i;j++){
            if(temp[j] > temp[j+1]){
                swap(temp[j],temp[j+1]);
                flag = true;
            }
        }
        if(!flag) break;
    }
    int count = 0;
    cout<<"\nFinal Sorted matrix : \n";
    
    for(int i = 0;i < size;i++){
        if(count == m){
            cout<<"\n";
            count = 0;
        }
        cout<<temp[i]<<" ";
        count++;
    }
}