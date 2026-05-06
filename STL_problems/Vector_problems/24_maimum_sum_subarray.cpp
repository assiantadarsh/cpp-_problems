#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

// Que -> Find the subarray with maximum sum .

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
    
    vector<int>ans;
    int k = 0;
    int p = 0;
    int currentsum = INT_MIN;

    for(int i = 0;i<n;i++){
        int sum = 0;
        for(int j  = i;j < n;j++){
            sum += v[j];

            if(sum > currentsum){
            currentsum = sum;
            k = j;
            p = i;
        }
        }
    }
    cout<<"\nAnswer : ";

    for(int i = p;i<=k;i++){
        cout<<v[i]<<" ";
    }

    cout<<"\nMaximum subarray sum : "<<currentsum;
}