#include<iostream>
#include<vector>
#include<algorithm>

// Que -> Find all leaders in a vector .

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
    for(int i = 0;i<n;i++){
        int visited = 1;
        for(int j = i + 1;j < n;j++){
            if(v[i] < v[j]){
                visited = 0;
                break;
            }
        }
        if(visited == 1){
            ans.push_back(v[i]);
        }
        
    }
    cout<<"\nLeader are : ";

    for(int i = 0;i < (int)ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
}