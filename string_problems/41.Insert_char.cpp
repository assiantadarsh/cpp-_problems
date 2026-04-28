#include<iostream>
using namespace std;

// Que -> Insert a character at a specific index.

int main(){

    string s;
    cout<<"Enter string : ";
    getline(cin,s);

    char ch;
    cout<<"Enter character : ";
    cin>>ch;

    int index;
    cout<<"Enter index number : ";
    cin>>index;

    if(index > s.length()){
        cout<<"Not Possible";
        return 0;
    }

    string temp = "";

    for(int i = 0; i < s.length(); i++){
        if(i == index){
            temp += ch;
        }
        temp += s[i];
    }

    // Agar index last pe ho

    if(index == s.length()){
        temp += ch;
    }

    cout<<"Result : "<<temp;

    return 0;
}