#include<iostream>
#include<vector>
#include<algorithm>

// Que -> Check if a vector is sorted(increasing order) or not .

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

    for(size_t i = 1;i < v.size();i++){
        if(!(v[i] >= v[i - 1])){
            cout<<"\nNot sorted ";
            return 0;
        }
    }
    cout<<"\nSorted";
}