#include<iostream>
#include<vector>
#include<algorithm>

// Que -> Check if a vector is sorted(increasing order) or not .
// Use is_string

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
    
    if(is_sorted(v.rbegin(),v.rend())){
        cout<<"\nSorted";
    }
    else{
        cout<<"\nNot sorted";
    }
}