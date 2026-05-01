#include<iostream>
#include<climits>
using namespace std;

// Que -> Find the row with maximum Sum.

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

    int max_sum = INT_MIN;
    int maxidx = -1;

    for(int i = 0;i<n;i++){
        int current_sum = 0;

        for(int j = 0;j<m;j++){
            current_sum += arr[i][j];
        }

        if(max_sum < current_sum){
            max_sum = current_sum;
            maxidx = i;
        }
    }

    cout<<"Row with Maximum index  : "<<maxidx;
    cout<<"Maximum sum : "<<max_sum;

}