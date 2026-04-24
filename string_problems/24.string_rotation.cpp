#include<iostream>
using namespace std;

void rotateclock(string &s){

    char c = s[s.size()-1];
    int i = s.size() - 2;

    while(i >= 0 ){

        s[i+1] = s[i];
        i--;
    }
    s[0] = c;
}

void rotateanticlock(string &s){

    char c = s[0];
    int i = 1;

    while(i  < s.size()){
        s[i-1] = s[i];
        i++;
    }
    s[s.size() - 1] = c;

}

// Que -> “Given two strings, determine if the second string is a result of rotating the first string by exactly 2 positions in either clockwise or anticlockwise direction.”

int main(){
    string s1;
    cout<<"Enter string : ";
    getline(cin,s1);

    string s2;
    cout<<"Enter string second : ";
    getline(cin,s2);

    if(s1.size() != s2.size()){
        cout<<"Not rotated";
        return 0;
    }

    if(s1.size() <= 1){
    if(s1 == s2)
        cout<<"Same string";
    else
        cout<<"Not rotated";
    return 0;
}

    string clockwise = s1;
    string anticlockwise = s1;

    rotateclock(clockwise);
    rotateclock(clockwise);

    if(clockwise == s2){
        cout<<"Its rotate in clock wise direction";
        return 0;
    }

    rotateanticlock(anticlockwise);
    rotateanticlock(anticlockwise);

    if(anticlockwise == s2){
        cout<<"Its rotate in anticlock wise direction";
        return 0;
    }

    cout<<"Not rotated";
    return 0;

}