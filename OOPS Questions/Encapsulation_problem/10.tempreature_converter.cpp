#include<iostream>
using namespace std;

/*
Question 3:
Create a class Temperature using encapsulation.
Keep celsius and fahrenheit private.
Use public functions to input temperature in Celsius,
convert it into Fahrenheit, and display result.
Formula:
fahrenheit = (celsius * 9 / 5) + 32
*/

class Temperature {
private:
    float celsius;
    float fahrenheit;

public:
    void input() {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
    }

    void convertToFahrenheit() {
        fahrenheit = (celsius * 9 / 5) + 32;
    }

    void display() {
        cout << "\nTemperature in Celsius: " << celsius << endl;
        cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    }
};

int main() {
    Temperature t;

    t.input();
    t.convertToFahrenheit();
    t.display();

    return 0;
}