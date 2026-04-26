#include<iostream>
using namespace std;

// Que -> Count the number of words in a sentence.

int main(){

    string s;
    cout<<"Enter string : ";
    getline(cin,s);


    int count = 0;

    for(int i = 0; s[i] != '\0';i++){
        if(s[i] != ' ' && (i == 0 || s[i - 1] == ' ')){
            count++;
        }
    }
    cout<<"words count : "<<count;

    return 0;
}
