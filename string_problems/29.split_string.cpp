#include<iostream>
using namespace std;

// Que -> Split a string based on a delimiter.

int main(){

    string s;
    cout<<"Enter string : ";
    getline(cin,s);

    char delimeter;
    cout<<"Enter delimeter : ";
    cin>>delimeter;

    for(int i = 0;s[i] != '\0';i++){


        if(s[i] == delimeter){
            if(s[0] == delimeter || s[i -1] == delimeter){
                continue;
        }
            cout<<"\n";
            continue;
        }
        cout<<s[i];
    }

    return 0;
}
