#include<iostream>
using namespace std;

// Que -> Check Panagram
// Sentence -> "the quick brown fox jumps over the lazy dog".
// All the english alphabet are present in the sentence so the sentence was panagram...
// Time complexity -> O(n)
// Space complexity -> O(1)

int main(){

    string s2;
    cout<<"Enter the sentence :";
    getline(cin,s2);



    if(s2.length() < 26){
        cout<<"Not panagram";
        return 0;
    }

    // convert to lowercase

    for(int i = 0; s2[i] != '\0'; i++){
        if(s2[i] >= 'A' && s2[i] <= 'Z'){
            s2[i] = s2[i] + 32;
        }
    }

    for(int i = 0;i<26;i++){
        int x = 0;
        char ch = char(i + 'a');

        for(int j = 0;s2[j] != '\0';j++){
            if(ch == s2[j]){
                x = 1;
                break;
            }
        }
        if(x == 0){
            cout<<"Not panagram";
            return 0;
        }
    }

    cout<<"Panagram";
    return 0;
}