#include<iostream>
#include<vector>
#include<algorithm>

// Que -> Find the sum of all elements in a vector .

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

    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += v[i];
    }

    cout<<"\nSum of all elements : "<<sum;
    
}