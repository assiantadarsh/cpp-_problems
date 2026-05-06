#include<iostream>
#include<vector>
#include<algorithm>

// Que -> Find all pairs in a vector whose sum is equal to a given target .

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
    cout<<"Enter the value of target : ";
    cin>>target;
    
    sort(v.begin(),v.end());

    int i = 0;
    int j = n - 1;

    while(i < j){
        if(v[i] + v[j] == target){
            cout<<"("<<v[i]<<","<<v[j]<<")"<<endl;
            i++;
            j--;
        }
        else if(v[i] + v[j] > target) j--;
        else i++;
    }
}