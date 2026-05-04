#include<iostream>
#include<vector>
#include<algorithm>

// Que -> Merge two vectors into one .

using namespace std;
int main(){
    int n;
    cout<<"Enter the size of first vector n : ";
    cin>>n;
    int m;
    cout<<"Enter the size of second vector : ";
    cin>>m;

    vector<int>v(n);
    cout<<"enter the value of first vector : \n";
    for(int i = 0; i<n;i++){
        cin>>v[i];
    }
     vector<int>v2(m);
    cout<<"enter the value of second vector : \n";
    for(int i = 0; i < m;i++){
        cin>>v2[i];
    }

    // for(size_t i = 0; i < v2.size();i++){
    //     v.push_back(v2[i]);
    // }

    // Method -> 2

    v.insert(v.end(),v2.begin(),v2.end());

    for(size_t i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}