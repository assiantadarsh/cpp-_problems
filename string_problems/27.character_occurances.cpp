#include<iostream>
using namespace std;

// Que -> Find all positions of a given character in a string.
//Time Complexity: O(n)
//Space Complexity: O(1)

int main(){

    string s;
    cout<<"Enter string : ";
    getline(cin,s);

    char ch;
    cout<<"Enter character : ";
    cin>>ch;

    int x = 0;
    for(int i = 0;s[i] != '\0';i++){
        if(ch == s[i]){
            cout<<i<<" ";
            x = 1;
        }
    }
    if(x == 0){
        cout<<"Not found";
    }

    return 0;
}
