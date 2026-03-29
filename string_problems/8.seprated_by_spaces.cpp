#include<iostream>
using namespace std;
int main(){

    // Count the number of words in a string (words are seprated by spaces).

    string str;
    cout<<"Enter your sentence :"<<endl;

    getline(cin,str);
    int count = 0;
    for(int i = 0;str[i] != '\0';i++){
        if(str[i] == ' '){
            count++;
        }
    }
    cout<<"Words are seprated by spaces = "<<count;
    return 0;
}