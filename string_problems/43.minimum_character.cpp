#include<iostream>
#include<climits>
using namespace std;

// Que -> Find the smallest character in a string.
// Time: O(n)
// Space: O(1)

int main(){

    string s;
    cout<<"Enter string : ";
    getline(cin,s);

    char min = CHAR_MAX;
    int n = s.length();

    for(int i = 0; i < n;i++){

        if(min > s[i]){
            min = s[i];
        }
    }
    cout<<"Smallest character : "<<min;

    return 0;
}
