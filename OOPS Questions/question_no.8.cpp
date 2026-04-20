#include<iostream>
using namespace std;

// Q10. Create a base class Shape with function area().
// Create derived classes Circle and Square and override area() in both.

// This is Called Function Overriding (Polymorphism) .

class shape{
    public:
    void area(){
        cout<<"Area of shape";

    }
};
class circle : public shape{
    public:
    void area(){
        cout<<"Area of Circle"<<endl;
    }
};
class square : public shape{
    public:
    void area(){
        cout<<"Area of Square"<<endl;
    }
};

int main(){

    circle c;
    square s;
    c.area();
    s.area();

    return 0;
}