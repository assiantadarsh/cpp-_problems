#include<iostream>
#include<vector>
#include<algorithm>

// Que -> Check if there exists a subarray with sum equal to zero .

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
        int sum = 0;
        for(int j = i;j<n;j++){
            sum += v[j];
            if(sum == 0){
            cout<<"\nYes";
            return 0;
        }
        }
    }

    cout<<"\nNo";
}