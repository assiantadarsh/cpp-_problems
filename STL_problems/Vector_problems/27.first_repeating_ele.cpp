#include<iostream>
#include<vector>
#include<algorithm>

// Que -> Find the first repeating element in a vector .

using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    vector<int>v(n);

    for(int i = 0; i<n;i++){
        cin>>v[i];
    }

    for(int i = 0;i < n;i++){
        cout<<v[i]<<" ";
    }

    for(int i = 0;i<n;i++){
        bool isvisited = false;
        for(int k = 0;k<i;k++){
            if(v[i] == v[k]){
                isvisited = true;
                break;
            }
        }
        if(isvisited == true){
            cout<<"\nFirst Repeating element : "<<v[i];
            return 0;
        }
        
    }
    cout<<"\nNot repeating element in the array all element are unique";
    
}