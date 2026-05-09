#include<iostream>
#include<vector>
#include<algorithm>

// Que -> Find the product of array except self .
// IF v[i] != 0

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

    long long all_pd = 1;

    for(int i = 0;i<n;i++){
        all_pd = all_pd * v[i];
    }
    
    for(int i = 0;i<n;i++){
            temp[i] = all_pd / v[i];
        
    }
    cout<<"\n";

    for(int i = 0;i<n;i++){
        cout<<temp[i]<<" ";
    }
}