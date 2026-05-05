#include<iostream>
#include<vector>
#include<algorithm>

// Que -> Find the missing number in a vector (1 to n) .

using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    vector<int>v(n-1);

    for(int i = 0; i<n;i++){
        cin>>v[i];
    }

    for(size_t i = 0;i< v.size();i++){
        cout<<v[i]<<" ";
    }
    
    int sum = 0;
    for(size_t i = 0;i < v.size();i++){
        sum += v[i];
    }

    int sum2 = ((n)*(n+1))/2;

    cout<<"\nMissing num : "<<sum2 - sum;
}