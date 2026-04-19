#include<iostream>
using namespace std;

// 2. Class with Function

// Q2. Create a Rectangle class with:

// .length and breadth

// Write a function area() that returns the area of the rectangle.

class Reactangle{
    private:
    int l;
    int b;
    // void area(){
    //     this->b = b;
    //     this->l = l;
    //     cout<<"Area : "<<l*b;
    // }

    // Method 2
    public:
    void input(){
        cout<<"Enter the value of length : ";
        cin>>l;
        cout<<"Enter the value of width :";
        cin>>b;
    }
    int area(){
        return l*b;
    }

    void display(){
        cout<<"The area of Reactangle : "<<area()<<endl;
    }
};

int main(){
    
Reactangle r;
// r.l = 34;
// r.b = 21;

// r.area();

// Method 2

r.input();
r.display();

}