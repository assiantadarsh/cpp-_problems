#include<iostream>
using namespace std;

/*
Question 1:
Create a class LibraryBook using encapsulation.
Keep bookName, authorName, and price private.
Use public functions to input book details and display them.
*/

class LibraryBook {
private:
    string bookName;
    string authorName;
    int price;

public:
    void input() {
        cout << "Enter book name: ";
        cin >> bookName;

        cout << "Enter author name: ";
        cin >> authorName;

        cout << "Enter book price: ";
        cin >> price;
    }

    void display() {
        cout << "\n----- Book Details -----" << endl;
        cout << "Book Name: " << bookName << endl;
        cout << "Author Name: " << authorName << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    LibraryBook b;

    b.input();
    b.display();

    return 0;
}