#include<iostream>
#include<vector>
#include<algorithm>

// Que -> Count how many even numbers are present in a vector .

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

    int count = 0;

    for(int i = 0;i<n;i++){
        if(v[i] % 2 == 0){
            count++;
        }
    }

    cout<<"\nEven number : "<<count;
    
}