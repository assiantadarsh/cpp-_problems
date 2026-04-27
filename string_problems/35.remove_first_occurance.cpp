#include<iostream>
using namespace std;

// Que -> Remove the first occurrence of a character.
// Time Complexity: O(n)
// Space Complexity: O(1)
int main(){

    string s;
    cout<<"Enter string : ";
    getline(cin,s);

    char ch;
    cout<<"Enter character : ";
    cin>>ch;

    int n = s.length();
    int i = 0;
    while(i < n){

        if(s[i] == ch){
            i++;
            break;
        }
        else{
            cout<<s[i];
            i++;
        }
    }

    while(i < n){
        cout<<s[i];
        i++;
    }


    return 0;
}
