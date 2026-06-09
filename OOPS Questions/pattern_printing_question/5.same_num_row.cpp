#include<iostream>
using namespace std;

// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 print pattern ?

class pattern{

    private:
    int n;

    public:
    pattern(int size){
        n = size;
    }

    void display(){
        for(int i = 1;i <= n;i++){
            for(int j = 1;j <= i;j++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }

};
int main(){

    int size;
    cout<<"Enter the positive value of size : ";
    cin>>size;

    pattern p(size);
    p.display();
    
}