#include<iostream>
using namespace std;

// Q6. Create a base class Animal with a function sound().
// Create a derived class Dog that inherits Animal and overrides the sound() function.

class Animal{
    public:
    void sound(){
        cout<<"Animal makes sounds"<<endl;
    }

};

class dog : public Animal{
    public:
    void sound(){
        cout<<"Dog barks"<<endl;
    }


};

int main(){

    dog d;
    d.sound();
    return 0;
}