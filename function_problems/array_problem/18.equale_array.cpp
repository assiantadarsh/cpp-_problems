#include<iostream>
using namespace std;

// Check if two arrays have same elements (order doesn't matter).

void equale(int a[],int n,int b[],int m){
    if(n != m){
        cout<<"----------------"<<endl;
        cout<<"No";
        return;
    }
    else{
        for(int i = 0;i<n;i++){
            int flag = 1;
            for(int j = 0;j<m;j++){
                if(a[i] == b[j]){
                    flag = 0; 
                }
            }
            if(flag == 1){
                cout<<"----------------"<<endl;
                cout<<"No";
                return;

            }
        }
    }
    cout<<"----------------"<<endl;
    cout<<"Yes";
}

int main(){
    int n ;
    cout<<"Enter the size of the array one n:";
    cin>>n;

    int arr1[n];

    int m;
    cout<<"Enter the size of the array two m:";
    cin>>m;

    int arr2[m];
    
    cout<<"Enter first array elements "<<endl;

    for(int i = 0;i<n;i++){
        cin>>arr1[i];
    }

    cout<<"Enter second array elements "<<endl;

    for(int i = 0;i<m;i++){
        cin>>arr2[i];
    }
    equale(arr1,n,arr2,m);
    
}