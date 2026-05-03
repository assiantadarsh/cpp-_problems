#include<iostream>
#include<vector>
#include<algorithm>

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
    int target;
    cout<<"\nEnter target : ";
    cin>>target;
    auto x = find(v.begin(),v.end(),target);

    auto y = v.begin();

    if(x != v.end()){
        cout<<"\nIndex : "<<x - y;
    }
    
    else{
        cout<<"Not found in vector";
    }
}