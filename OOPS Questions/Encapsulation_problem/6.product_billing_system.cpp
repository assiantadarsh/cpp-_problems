#include<iostream>
using namespace std;
class product{

    private:
    string product_name;
    float price;
    float quantity;

    public:

    void input(){
        cout<<"Enter product name : ";
        getline(cin, product_name);
        cout<<"Enter price : ";
        cin>>price;
        cout<<"Enter Quantity : ";
        cin>>quantity;
    }

    void display(){
        cout<<"\n===============================\n";
        cout<<"Name : "<<product_name;
        cout<<"\nPrice : "<<price;
        cout<<"\nQuantity : "<<quantity;
        cout<<"\nTotal bill : "<<price * quantity;
        cout<<"\n================================\n";
    }
};
int main(){

    product p;
    p.input();
    p.display();
}