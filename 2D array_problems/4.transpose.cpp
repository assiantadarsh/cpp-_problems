#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the value of row:";
    cin>>r;
    cout<<"enter the value of column :";
    cin>>c;

    int arr[r][c];
   
    // Take input
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    // Output Original matrix

    cout<<"Original matrix"<<endl;
    cout<<"--------------------"<<endl;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"---------------------"<<endl;
    cout<<"\n";

    cout<<"After transpose"<<endl;

    cout<<"-----------------------"<<endl;
    for(int i = 0;i<c;i++){
        for(int j = 0;j<r;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<"\n";
    }
    cout<<"------------------------"<<endl;

}