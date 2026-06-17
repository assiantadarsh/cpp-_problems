#include<iostream>
using namespace std;

// Que -> Create a class Rectangle with private data members:
// length and breadth.

// Add public functions:

// create parametrized constructor to take the length and width  
// area()
// perimeter()

// Display the parameter and area ?

class reactangle{

    private:
    float length;
    float width;

    public:
    reactangle(float l,float w){
        length = l;
        width = w;
    }

    void area(){
        float area = length * width;
        cout<<"\nThe area of Reactangle is : "<<area;
    }
    
    void perimeter(){
        cout<<"\nThe length is : "<<length;
        cout<<"\nThe width is : "<<width;
    }

};
int main(){

    float length,width;
    cout<<"Enter lenght : ";
    cin>>length;
    cout<<"Enter the width : ";
    cin>>width;

    reactangle r(length,width);
    r.area();
    r.perimeter();

}