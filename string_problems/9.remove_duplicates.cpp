#include<iostream>
using namespace std;
int main(){

    // Remove duplicates characters from a string .

    string str;
    cout<<"Enter your sentence :"<<endl;

    getline(cin,str);
    int k = 0;
    
    for(int i = 0;str[i] !='\0';i++){
        int x = 0;
        for(int j = 0;j<k;j++){
            if(str[i] == str[j]){
                x = 1;
                break;
            }
        }
        if(x == 0){
            str[k] = str[i];
            k++;
        }
    }
    cout<<"Remove duplicates  "<<endl;
    for(int i = 0;i<k;i++){
        cout<<str[i];
    }
    
    return 0;
}