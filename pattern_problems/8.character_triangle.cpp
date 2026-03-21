#include<iostream>

// A 
// A B 
// A B C 
// A B C D 
// A B C D E 
// print the pattern ?

using namespace std;
int main(){
    int n;
    cout<<"Enter number of lines"<<endl;
    cin>>n;

    for(int i = 1;i<=n; i++){
        for(int j = 1;j<=i;j++){
            int d = 64+j;
            char ch = (char)d;
            cout<<ch<<" ";
        }
        cout<<"\n";

    }


    return 0;
}