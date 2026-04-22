#include <iostream>
#include <string>
using namespace std;

// Que -> Check if one string is rotation of another.

int main() {
    string s1,s2,temp;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    if (s1.length() != s2.length()) {
        cout << "Not Rotation";
        return 0;
    }

    // s1 + s1
    temp = s1 + s1;

    // check substring so we will use find function

    if(temp.find(s2) != string :: npos){
        cout<<"Rotation";
    }
    else{
        cout<<"Not Rotation";
    }


    return 0;
}