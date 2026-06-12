#include<iostream>
using namespace std;

// @
// @ @
// @   @
// @     @
// @ @ @ @ @  print pattern ? 
// Encapsulation Based printing .

class pattern{

    private:
    int n;

    public:
    void input(int size){
        n = size;
    }
    void display(){

        for(int i = 1;i < n;i++){

            cout<<"@";
            // spaces

            for(int j = 1;j <= 2 * i -3;j++){
                cout<<" ";
            }
            if(i > 1){
                cout<<"@";
            }

            cout<<"\n";
        }

        // Last line
        for(int k = 1;k <= n;k++){
            cout<<"@"<<" ";
        }

    }

};

int main(){

    int size;
    cout<<"Enter the positive value of size : ";
    cin>>size;

    pattern p;
    p.input(size);
    p.display();
    
}