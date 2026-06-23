#include<iostream>
using namespace std;

/*
Question 2:
Create a class ElectricityBill using encapsulation.
Keep customerName, units, and billAmount private.
Use public functions to input customer details, calculate bill, and display bill.
Bill formula:
If units <= 100, rate = 5 per unit
If units > 100, rate = 8 per unit
*/

class ElectricityBill {
private:
    string customerName;
    int units;
    int billAmount;

public:
    void input() {
        cout << "Enter customer name: ";
        cin >> customerName;

        cout << "Enter electricity units: ";
        cin >> units;
    }

    void calculateBill() {
        if(units <= 100) {
            billAmount = units * 5;
        }
        else {
            billAmount = units * 8;
        }
    }

    void displayBill() {
        cout << "\n----- Electricity Bill -----" << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Units Used: " << units << endl;
        cout << "Total Bill: " << billAmount << endl;
    }
};

int main() {
    ElectricityBill e;

    e.input();
    e.calculateBill();
    e.displayBill();

    return 0;
}