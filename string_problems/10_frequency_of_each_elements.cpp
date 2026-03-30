#include<iostream>

using namespace std;
int main(){

    string str;
    cout<<"Enter the string : ";
    getline(cin,str);

    for(int i = 0;str[i] !='\0';i++){
        int x = 0;
        int count = 1;
        if(str[i] == ' '){
            i++;
        }
        for(int j = str.length()-1;j>i;j--){
            if(str[i] == str[j]){
                count++;
            }
        }
        for(int k = 0;k<i;k++){
            if(str[i] == str[k]){
                x = 1;
                break;
            }
        }
        if(x == 0){
            cout<<str[i] <<" = "<<count<<endl;
        }
    }
}