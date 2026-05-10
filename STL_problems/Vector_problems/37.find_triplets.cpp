#include<iostream>
#include<vector>
#include<algorithm>

// Que -> Find all triplets whose sum is equal to zero .

using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    vector<int>v(n);

    for(int i = 0; i<n;i++){
        cin>>v[i];
    }
    cout<<"Original Vector : ";

    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
    bool flag = true;
    for(int i = 0;i<n;i++){
        for(int j = i + 1;j<n;j++){
            for(int k = j + 1;k<n;k++){
                if(v[i] + v[j] + v[k] == 0){
                    cout<<"\n"<<v[i]<<" "<<v[j]<<" "<<v[k]<<" ";
                    flag = false;
                }
            }
        }
    }
    if(flag){
        cout<<"\nNo triplet found whose sum is zero. .";
    }
}