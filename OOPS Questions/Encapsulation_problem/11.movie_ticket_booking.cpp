#include<iostream>
using namespace std;

/*
Question 4:
Create a class MovieTicket using encapsulation.
Keep movieName, ticketPrice, and numberOfTickets private.
Use public functions to input movie details, calculate total amount,
and display ticket booking details.
Formula:
totalAmount = ticketPrice * numberOfTickets
*/

class MovieTicket {
private:
    string movieName;
    int ticketPrice;
    int numberOfTickets;
    int totalAmount;

public:
    void input() {
        cout << "Enter movie name: ";
        cin >> movieName;

        cout << "Enter ticket price: ";
        cin >> ticketPrice;

        cout << "Enter number of tickets: ";
        cin >> numberOfTickets;
    }

    void calculateTotal() {
        totalAmount = ticketPrice * numberOfTickets;
    }

    void display() {
        cout << "\n----- Movie Ticket Details -----" << endl;
        cout << "Movie Name: " << movieName << endl;
        cout << "Ticket Price: " << ticketPrice << endl;
        cout << "Number of Tickets: " << numberOfTickets << endl;
        cout << "Total Amount: " << totalAmount << endl;
    }
};

int main() {
    MovieTicket m;

    m.input();
    m.calculateTotal();
    m.display();

    return 0;
}