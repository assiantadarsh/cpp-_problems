#include<iostream>
#include<vector>
#include<algorithm>

// Que -> Find the product of array except self .

using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    vector<int>v(n);

    for(int i = 0; i<n;i++){
        cin>>v[i];
    }

    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
    vector<int>temp(n);

    for(int i = 0;i<n;i++){
        int mul = 1;
        for(int j = 0;j<n;j++){
            if(i == j) continue;
            else{
                mul = mul *  v[j];
            }
        }
        temp[i] = mul;;
    }
    cout<<"\n";

    for(int i = 0;i<n;i++){
        cout<<temp[i]<<" ";
    }
}