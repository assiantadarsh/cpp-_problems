#include<iostream>
#include<vector>
#include<algorithm>

// Que -> Rearrange vector so that max and min numbers alternate .

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

    sort(v.begin(),v.end());
    int i = 0;
    int j = n - 1;
    
    vector<int>temp;
    while(i < j){
        temp.push_back(v[j]);
        j--;
       
        temp.push_back(v[i]);
        i++;
    }
    if(i == j) temp.push_back(v[i]);

    cout<<"\nFinal Answer \n";
    for(int i = 0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    
}