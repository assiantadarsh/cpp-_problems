#include<iostream>
#include<climits>
using namespace std;

// Que -> Find the second largest character in a string.

int main(){

    string s;
    cout<<"Enter string : ";
    getline(cin,s);

    char max = CHAR_MIN;
    char secmax = CHAR_MIN;

    for(int i = 0;s[i] != '\0';i++){

        if(s[i] == ' ') continue; 
        if(max < s[i]){
            secmax = max;
            max = s[i];
        }
        else if(secmax < s[i] && max != s[i]){
            secmax = s[i];
        }
        
    }
    if(secmax == CHAR_MIN){
        cout<<"The second maximum not found";
    }
    else{
        cout<<"The second maximum character is : "<<secmax;
    }

    return 0;
}
