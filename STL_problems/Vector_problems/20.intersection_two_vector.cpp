#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

// Que -> Find the intersection of two vectors .

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

    cout<<"\nsecond vector"<<endl;

    int m;
    cout<<"Enter the value of m : ";
    cin>>m;
    vector<int>v2(m);

    for(int i = 0; i<m;i++){
        cin>>v2[i];
    }

    for(int i = 0;i<m;i++){
        cout<<v2[i]<<" ";
    }

    vector<int>ans;
    vector<bool> visited(m,false);

    int k = 0;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(v[i] == v2[j] && visited[j] == false){
                ans.push_back(v[i]);
                visited[j] = true;
                // v2.erase(v2.begin() + j);
                // v2[j] = INT_MAX;
                k++;
                break;
            }
        }
    }

    cout<<"\nFinal Answer : \n";
    for(int i = 0;i<k;i++){
        cout<<ans[i]<<" ";
    }
    
}