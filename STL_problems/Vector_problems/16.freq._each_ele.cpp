#include<iostream>
#include<vector>
#include<algorithm>

// Que -> Find the frequency of each element in a vector .

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
    
    for(int i = 0;i< n;i++){
        int count = 0;
        int visited = 0;

        for(int k = 0;k< i ;k++){
            if(v[i] == v[k]){
                visited = 1;
                break;
            } 
        }
        if(visited == 1) continue;
        else{
            for(int j = 0;j<n;j++){
                if(v[i] == v[j]) count++;
            }
            cout<<"\n"<<v[i]<<" -> "<<count;
        }

    }
}