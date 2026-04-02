#include<iostream>
using namespace std;

// 1     7
//  2   6 
//   3 5  
//    4   
//   3 5  
//  2   6 
// 1     7
// print the pattern ?

int main(){
    int a;
    cout<<"Enter the positive value of a:"<<endl;
    cin>>a;
    int total = 2 * a - 1;
    for(int i = 1; i <= total; i++){
        for(int j = 1; j <= total; j++){
            if(j == i || j == total - i + 1){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    
}