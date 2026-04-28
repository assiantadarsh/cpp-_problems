#include<iostream>
using namespace std;

// Que -> Count how many uppercase and lowercase letters are in a string.
// ✔ Best Time: O(n)
// ✔ Best Space: O(1)

int main(){

    string s;
    cout<<"Enter string : ";
    getline(cin,s);

    int small_letter = 0;
    int upper_letter = 0;

    int i = 0;
    int n = s.length();

    while(i<n){

        if(s[i] >= 'a' && s[i] <= 'z'){
            small_letter++;
        }

        else if(s[i] >= 'A' && s[i] <= 'Z'){
            upper_letter++;
        }

        i++;
    }

    cout<<"Upper Letter : "<<upper_letter<<endl;
    cout<<"Small Letter : "<<small_letter;

    return 0;
}
