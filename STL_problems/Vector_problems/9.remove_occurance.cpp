#include<iostream>
#include<vector>
#include<algorithm>

// Que -> Remove all occurrences of a given element from a vector .

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
    cout<<"\nEnter Target : ";
    cin>>target;

    v.erase(remove(v.begin(),v.end(),target),v.end());

    for(int i = 0;i< (int)v.size();i++){
        cout<<v[i]<<" ";
    }    

}