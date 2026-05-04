#include<iostream>
#include<vector>
#include<algorithm>

// Que -> Rotate a vector by one position to the right .

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

    rotate(v.begin(),v.end()-1,v.end());
    cout<<"\n";
    
    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
}