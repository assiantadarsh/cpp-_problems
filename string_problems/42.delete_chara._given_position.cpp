#include<iostream>
using namespace std;

// Que -> Delete a character from a specific index.
// Time: O(n)
// Space: O(1)

int main(){

    string s;
    cout<<"Enter string : ";
    getline(cin,s);

    int index;
    cout<<"Enter index number : ";
    cin>>index;

    int n = s.length() -1;

    if(index > n || index < 0){
        cout<<"Not Possible";
        return 0;
    }

    for(int i = 0; i<= n; i++){
        if(i == index) continue;
        cout<<s[i];
    }    
    return 0;
}
