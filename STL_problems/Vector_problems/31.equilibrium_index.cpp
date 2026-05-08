#include<iostream>
#include<vector>
#include<algorithm>

// Que -> Find the equilibrium index in a vector .
// Time Complexity -> O(n^2)

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
    
    for(int i = 0;i<n;i++){
        int sum_right = 0;
        int sum_left = 0;

        for(int j = 0;j<i;j++){
            sum_left = sum_left + v[j];
        }

        for(int k = i + 1;k<n;k++){
            sum_right = sum_right + v[k];
        }

        if(sum_right == sum_left){
            cout<<"\nEquilibrim index : "<<i;
            return 0;
        }
    }

    cout<<"\nCan not found Equilibrium Index .";
}