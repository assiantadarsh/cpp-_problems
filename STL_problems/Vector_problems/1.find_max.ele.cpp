#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;

    vector<int>v(n);

    for(int i = 0; i<n;i++){
        cin>>v[i];
    }

    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }

    // max_element -> gives iterator
    // * -> return iterator value

    int maximum = *max_element(v.begin(), v.end());
    cout<<"\nMaximum element: "<<maximum;
}