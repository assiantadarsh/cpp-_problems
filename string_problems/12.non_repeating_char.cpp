#include<iostream>

using namespace std;

// Take a string as input and find the first non - repeating character .???

    int main(){

    string str;
    cout<<"Enter the value of str : ";
    getline(cin,str);

    

    for(int i = 0;str[i] != '\0';i++){
        int x = 0;
        for(int j = str.length()-1;j>i;j--){
            if(str[i] == str[j]){
                x = 1;
                break;
            }
        }
        if(x == 0){
            cout<<"First non repeating character is : "<<str[i];
            break; 
        }
    }
    }