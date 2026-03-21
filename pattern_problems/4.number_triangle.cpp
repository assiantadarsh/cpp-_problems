#include<iostream>

// 1
// 12
// 123
// 1234
// 12345
// print the pattern ?

using namespace std;
int main(){
    int n;
    cout<<"Enter number of lines"<<endl;
    cin>>n;

    for(int i = 1;i<=n; i++){
        for(int j = 1;j<=i;j++){
            cout<<j;
        }
        cout<<"\n";
    }


    return 0;
}