#include<iostream>
using namespace std;

// Que -> Print frequency of each element in the matrix .

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

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            temp[k] = arr[i][j];
            k++;
        }
    }

    for(int i = 0;i<size;i++){
        int count = 0;
        bool isvisited = false;
        for(int k = 0;k < i;k++){
            if(temp[i] == temp[k]){
                isvisited = true;
                break;
            }
        }
        if(isvisited) continue;

        else{
            for(int j = i;j < size;j++){
                if(temp[i] == temp[j]){
                    count++;
                }
            }
            cout<<"\n"<<temp[i]<<" -> "<<count;
        }
    }

}