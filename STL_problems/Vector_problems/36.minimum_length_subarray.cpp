#include<iostream>
#include<vector>
#include<algorithm>

// Que -> Find the minimum length subarray with sum ≥ target .

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
    
    int p;
    int k;

    int target;
    cout<<"\nEnter the target : ";
    cin>>target;
    
    int min_count  = n + 1;

    for(int i = 0; i < n;i++){
        int sum = 0;

        for(int j = i;j<n;j++){
            sum += v[j];

            if(sum >= target){
                int count = j - i + 1;
                if(min_count > count){
                    min_count = count;
                    p = i;
                    k = j;
                }
            }
        }
    }
    if(p == -1){
        cout<<"No subarray found";
    }
    else{

        cout<<"Minimum Length Subarray : ";

        for(int i = p; i <= k; i++){
            cout<<v[i]<<" ";
        }

        cout<<"\nLength : "<<min_count;
    }
}