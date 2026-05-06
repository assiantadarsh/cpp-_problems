#include<iostream>
#include<vector>
#include<algorithm>

// Que -> Rearrange vector so that positive and negative numbers alternate .

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

    vector<int>pos;
    vector<int>neg;
    vector<int>ans(n);

    for(int i = 0;i < n;i++){
        if(v[i] >= 0) pos.push_back(v[i]);
        else neg.push_back(v[i]);
    }
    // Merge

    int i = 0;
    int j = 0;
    int k = 0;

    while(i < (int)pos.size() && j < (int)neg.size()){
        ans[k] = pos[i];
        i++;
        k++;
        ans[k] = neg[j];
        j++;
        k++;
    }
    while(i < (int)pos.size()){
        ans[k] = pos[i];
        i++;
        k++;
    }

    while(j < (int)neg.size()){
        ans[k] = neg[j];
        j++;
        k++;
    }

    cout<<"\nAnswer : ";

    for(int p = 0;p<n;p++){
        cout<<ans[p]<<" ";
    }

}