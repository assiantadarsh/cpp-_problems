#include<iostream>
using namespace std;

class shape{        // abstraction class

    public:
    virtual void  area() = 0; // Pure abstraction or virual function 
};

class circle : public shape{

    private:
    float radius;

    public:

    void input(){
        cout<<"Enter The radius : ";
        cin>>radius;
    }
    void area(){
        cout<<"Circle Area : "<<3.14 * radius * radius<<endl;
    }
};

class reactangle : public shape{

    private:
    float length;
    float width;

    public:

    void input(){
        cout<<"Enter length : ";
        cin>>length;

        cout<<"Enter width : ";
        cin>>width;
    }

    void area(){
        cout<<"Ractangle Area : "<<length * width;
    }
};

int main(){

    // shape s  Error 

    circle c;
    reactangle r;
    c.input();
    c.area();

    r.input();
    r.area();
}