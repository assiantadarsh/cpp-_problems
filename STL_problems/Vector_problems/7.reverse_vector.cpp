#include<iostream>
#include<vector>
#include<algorithm>

// Que -> Reverse a vector .

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
    cout<<"\nAfter Reverse\n";

    // for(int i = (int)v.size()-1;i>=0;i--){
    //     cout<<v[i]<<" ";
    // }

    // Method -> 2
    reverse(v.begin(),v.end());

    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
}