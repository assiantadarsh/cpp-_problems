#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

// Que -> Replace every element with the greatest element on its right .
// Time Space - O(n^2)

using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    vector<int>v(n);

    for(int i = 0; i<n;i++){
        cin>>v[i];
    }

    for(int i = 0;i < n;i++){
        cout<<v[i]<<" ";
    }

    vector<int>temp;

    for(int i = 0 ;i < n ; i++){
        int maxi = INT_MIN;

        for(int j = i + 1 ; j < n ; j++){
            if(maxi < v[j]){
                maxi = v[j];
            }
        }
        if(i == n -1){
                maxi = -1;
            }
        temp.push_back(maxi);
    }

    cout<<"\n";

    for(int i = 0 ; i < n ; i++){
        cout<<temp[i]<<" ";
    }
}