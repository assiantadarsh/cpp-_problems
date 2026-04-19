#include<iostream>
using namespace std;

// 3. Constructor

// Q3. Create a Car class with:

// .brand (string)
// .price (float)

// Use a constructor to initialize values and a function to display details.

class car{
    public:
    string brand;
    float price;

    car(string brand,float price){
        this->brand = brand;
        this->price = price;
    }
    void display(){
        cout<<brand<<" "<<price;
    }

};

int main(){
    float price;
    string brand;

    cout<<"Enter the brand name :";
    getline(cin,brand);
    cout<<"Enter the price of the car :";
    cin>>price;

    car c(brand,price);
    c.display();




}