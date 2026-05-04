#include<iostream>
#include<vector>
#include<algorithm>

// Que -> Remove duplicates from a vector .

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
    
    sort(v.begin(),v.end());
    auto i = unique(v.begin(),v.end());
    v.erase(i,v.end());

    cout<<"\nAfter remove duplicates \n";
    for(size_t i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    

}