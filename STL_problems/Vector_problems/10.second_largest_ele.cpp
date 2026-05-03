#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

// Que -> Find the second largest element in the vector .

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

    int max1 = INT_MIN;
    int sec_max = INT_MIN;

    bool flag = false;

    for(size_t i = 0;i<v.size();i++){
        if(max1 < v[i]){

            if(max1 != INT_MIN){
                sec_max = max1;
                flag = true;
                
            }
            max1 = v[i];
        }
        else if(sec_max < v[i] && max1 != v[i]){
            flag = true;
            sec_max = v[i];
        }
    }

    if(!flag){
        cout<<"\nSecond maximum not found";
    }
    else{
        cout<<"\nSecond maximum : "<<sec_max;
    }
    
}