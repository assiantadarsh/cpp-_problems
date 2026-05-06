#include<iostream>
#include<vector>
#include<algorithm>

// Que -> Find the majority element in a vector (appears more than n/2 times) .

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

    int count = 0;
     int candidate = v[n/2];

     for(int i = 0;i< n;i++){
        if(v[i] == candidate) count++;
     }

     if(count > n / 2) cout<<"\n"<<candidate<<" -> "<<count<<endl;
     else{
        cout<<"\nNo majority elements ";
     }
}