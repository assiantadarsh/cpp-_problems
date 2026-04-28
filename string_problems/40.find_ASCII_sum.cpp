#include<iostream>
using namespace std;

// Que -> Find the sum of ASCII values of all characters.
// Time: O(n)
// Space: O(1)

int main(){

    string s;
    cout<<"Enter string : ";
    getline(cin,s);

    int sum = 0;
    
    int n = s.length();
    
    for(int i = 0;i<n;i++){
        int d = int(s[i]);
        sum += d;
    }

    cout<<"Sum : "<<sum;
    return 0;
}
