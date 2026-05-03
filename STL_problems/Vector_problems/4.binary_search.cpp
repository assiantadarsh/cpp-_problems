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
    sort(v.begin(),v.end());

    cout<<"\nAfter Sorting \n";

    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }

    int target;
    cout<<"\nEnter target : ";
    cin>>target;

    bool x = binary_search(v.begin(),v.end(),target);
    cout<<x;
}