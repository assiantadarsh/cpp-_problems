#include <iostream>
using namespace std;

class Calculator {
public:
    Calculator() = default;

    void add() {
        double a, b;
        cout << "\n[Addition]\nEnter two numbers: ";
        cin >> a >> b;
        cout << "Sum: " << a + b << endl;
    }

    void subtract() {
        double a, b;
        cout << "\n[Subtraction]\nEnter two numbers: ";
        cin >> a >> b;
        cout << "Difference: " << a - b << endl;
    }

    void multiply() {
        double a, b;
        cout << "\n[Multiplication]\nEnter two numbers: ";
        cin >> a >> b;
        cout << "Product: " << a * b << endl;
    }

    void divide() {
        double a, b;
        cout << "\n[Division]\nEnter two numbers: ";
        cin >> a >> b;
        if (b != 0)
            cout << "Quotient: " << a / b << endl;
        else
            cout << "Error: Division by zero!" << endl;
    }

    void modulo() {
        int a, b;
        cout << "\n[Modulo]\nEnter two integers: ";
        cin >> a >> b;
        if (b != 0)
            cout << "Remainder: " << a % b << endl;
        else
            cout << "Error: Division by zero!" << endl;
    }
};

int main() {
    Calculator calc;

    // Direct function calls (no conditions)
    calc.add();
    calc.subtract();
    calc.multiply(); 
    calc.divide();
    calc.modulo();

    return 0;
}