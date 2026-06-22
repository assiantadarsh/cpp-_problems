#include<iostream>
using namespace std;

class FoodOrder {
public:
    virtual void placeOrder() = 0;
};

class PizzaOrder : public FoodOrder {
private:
    int quantity;
    int price;

public:
    void input() {
        price = 200;
        cout << "Enter pizza quantity: ";
        cin >> quantity;
    }

    void placeOrder() {
        int total = quantity * price;
        cout << "\nPizza Order Placed Successfully" << endl;
        cout << "Pizza Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Bill: " << total << endl;
    }
};

class BurgerOrder : public FoodOrder {
private:
    int quantity;
    int price;

public:
    void input() {
        price = 100;
        cout << "Enter burger quantity: ";
        cin >> quantity;
    }

    void placeOrder() {
        int total = quantity * price;
        cout << "\nBurger Order Placed Successfully" << endl;
        cout << "Burger Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Bill: " << total << endl;
    }
};

int main() {

    PizzaOrder p;
    BurgerOrder b;

    p.input();
    p.placeOrder();

    cout << endl;

    b.input();
    b.placeOrder();

    return 0;
}