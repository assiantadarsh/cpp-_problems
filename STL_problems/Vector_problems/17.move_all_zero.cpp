#include<iostream>
#include<vector>
#include<algorithm>

// Que -> Move all zeros to the end of the vector .

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
    
    int i = 0;
    int j = 0;
    
    while(j < n){
        if(v[j] != 0){
            swap(v[i],v[j]);
            i++;
        }
        j++;
    }

    cout<<"\nAfter moving zeros\n";

    for(int k = 0;k<n;k++){
        cout<<v[k]<<" ";
    }
}