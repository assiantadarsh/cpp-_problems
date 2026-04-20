#include<iostream>
using namespace std;

// 5. Copy Constructor

// Q5. Create a Box class with:

// .length, width, height

// Implement a copy constructor and display both original and copied object values.

class box{
    public:
    int length,width,height;

    // Original Constructor

    box (int l,int w,int h){
        
        length = l;
        width = w;
        height = h;
    }

    // Copy Constructor

    box(box &b){
        length = b.length;
        width = b.width;
        height = b.height;
    }
    void display(){
        cout<<"Length : "<<length;
        cout<<" Width : "<<width;
        cout<<" Height : "<<height;
    }

};

int main(){
    cout<<"\nOrifinal Constructor \n";
    box b1(34,45,33);
    b1.display();

    cout<<"\nCopy Constructor\n";
    box b2(b1);
    b2.display();

    return 0;
}