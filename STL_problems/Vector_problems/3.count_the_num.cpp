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
    
    int cnt = count(v.begin(),v.end(),4);
    cout<<"\nCount : "<<cnt;
    
}