#include<iostream>
#include<vector>
#include<algorithm>

// Que -> Find the missing number in a vector (1 to n) .
// Method 2 -> XOR method 

using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    vector<int>v(n-1);

    for(int i = 0; i<n;i++){
        cin>>v[i];
    }

    for(size_t i = 0;i< v.size();i++){
        cout<<v[i]<<" ";
    }
    
    int xor1 = 0;
    for(int i = 1; i<= n;i++){
        xor1 = xor1 ^ i;
    }

    int xor2 = 0;

    for(int i = 0;i< n - 1;i++){
        xor2 = xor2 ^ v[i];
    }

    cout<<"\nMissing number is : "<<(xor1 ^ xor2);
}