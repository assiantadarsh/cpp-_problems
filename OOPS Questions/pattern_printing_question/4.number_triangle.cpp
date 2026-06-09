#include<iostream>
using namespace std;

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5  print pattern ?

class pattern{

    public:
    int n;
    pattern(){
        cout<<"Enter the value of n: ";
        cin>>n;
    }
    void display(){

        for(int i = 1;i <= n;i++){
            for(int j = 1;j <= i;j++){
                cout<<j<<" ";
            }
            cout<<"\n";
        }

    }
};
int main(){

   pattern p;
   p.display();
    
}