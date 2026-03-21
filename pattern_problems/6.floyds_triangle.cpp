#include<iostream>

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// print the pattern ?

using namespace std;
int main(){
    int n;
    cout<<"Enter number of lines"<<endl;
    cin>>n;
    int ne = 1;
    for(int i = 1;i<=n; i++){
        for(int j = 1;j<=i;j++){
            cout<<ne<<" ";
            ne +=1;
        }
        cout<<"\n";

    }


    return 0;
}