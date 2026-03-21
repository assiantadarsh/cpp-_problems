#include<iostream>

//     *
//    ***
//   *****
//  *******
// *********
// print the pattern ?

using namespace std;
int main(){
    int n;
    cout<<"Enter number of lines"<<endl;
    cin>>n;
    int nsp =n,nst=1;
    for(int i = 1;i<=n; i++){
        for(int j = 1;j<nsp;j++){
            cout<<" ";
        }
        for(int k= 1;k<=nst;k++){
            cout<<"*";
        }
        nsp--;
        nst +=2;
        cout<<"\n";

    }


    return 0;
}