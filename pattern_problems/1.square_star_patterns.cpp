#include<iostream>

// ****
// ****
// ****
// ****
// print the pattern ?

using namespace std;
int main(){
    int n;
    cout<<"Enter number of lines"<<endl;
    cin>>n;

    for(int i = 1;i<=n; i++){
        for(int j = 1;j<=n;j++){
            cout<<"*";
        }
        cout<<"\n";
    }


    return 0;
}