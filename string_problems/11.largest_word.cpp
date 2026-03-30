#include<iostream>

using namespace std;

// Find the largest word in the string??

    int main(){

    string str;
    cout<<"Enter the value of str : ";
    getline(cin,str);


    string current = "";
    string largest = "";
    
    for(int i = 0; str[i] != '\0';i++){
        if(str[i] != ' '){
            current += str[i];
        }
        else {
            if(current.length() > largest.length()){
                largest = current;
            }
            current = "";
        
        }
    // For Last Word 
    if(current.length() > largest.length()){
        largest = current;
    }
    }
    cout<<"-------------------------"<<endl;
    cout<<"LARGEST WORD = "<<largest<<endl;

}
