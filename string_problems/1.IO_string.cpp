#include<iostream>
using namespace std;
int main(){

    // Print string using for loop 

    string str;
    cout<<"Enter your sentence :"<<endl;

    getline(cin,str);

    for(int i = 0;str[i] != '\0';i++){
        cout<<str[i];
    }

    return 0;
}