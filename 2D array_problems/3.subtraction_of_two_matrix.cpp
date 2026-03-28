#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the value of row:";
    cin>>r;
    cout<<"enter the value of column :";
    cin>>c;

    int arr[r][c];
    int brr[r][c];
    // Take input
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    // Output First matrix
    cout<<"First matrix"<<endl;
    cout<<"--------------------"<<endl;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"---------------------"<<endl;
    cout<<"\n";
    // Second matrix input

    cout<<"Take second matrix input"<<endl;

    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            cin>>brr[i][j];
        }
    }
    // Output second matrix
    cout<<"--------------------"<<endl;
    cout<<"Second matrix"<<endl;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"--------------------"<<endl;
    cout<<"\n";

    cout<<"Addition of two matrices"<<endl;
    cout<<"--------------------"<<endl;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            cout<<arr[i][j] - brr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"---------------------"<<endl;

}