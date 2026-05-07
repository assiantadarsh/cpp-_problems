#include<iostream>
#include<vector>
#include<algorithm>

// Que -> Find the longest consecutive length in a vector .

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

    int len = 1;
    int new_len = 1;
    int p;
    int k;

    for(int i = 0;i < n -1 ;i++){

        if(v[i+1] == v[i]){
            continue;
        }
        else if(v[i+1] - v[i] == 1){
            len++;
            
        }
        // else{
        //     new_len = max(new_len,len);
        //     len = 1;
        // }
        else if(new_len  < len){
            p = i;
        }
    }
    new_len = max(new_len ,len);

    cout<<"\nLongest consecative : "<<new_len;

}