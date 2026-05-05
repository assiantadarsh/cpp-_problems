#include<iostream>
#include<vector>
#include<algorithm>

// Que -> Find the intersection of two vectors .
// Approach -> Two pointer 

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

    cout<<"\nsecond vector"<<endl;

    int m;
    cout<<"Enter the value of m : ";
    cin>>m;
    vector<int>v2(m);

    for(int i = 0; i<m;i++){
        cin>>v2[i];
    }

    for(int i = 0;i<m;i++){
        cout<<v2[i]<<" ";
    }

    vector<int> ans;

    sort(v.begin(),v.end());
    sort(v2.begin(),v2.end());
    int i = 0;
    int j  = 0;

    
    while(i < n && j < m){
        if(v[i] == v2[j]){
            ans.push_back(v[i]);
            i++;
            j++;
        }
        else if(v2[j] > v[i]) i++;
        else j++;

    }

    cout<<"\nFinal answer : ";
    for(size_t k = 0; k < ans.size();k++){
        cout<<ans[k]<<" ";
    }

    
    
}