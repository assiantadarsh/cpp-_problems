#include<iostream>
using namespace std;

class password_validation {

private:
    string user_name;
    string password;
    string new_password;

public:
    password_validation() {
        password = "a.s@9179";
    }

    void input() {
        cout << "Enter user name : ";
        getline(cin, user_name);

        cout << "Enter password : ";
        cin >> new_password;
    }

    void display() {
        while (true) {
            if (password == new_password) {
                cout << "\nLogin Successful";
                break;
            }
            else {
                cout << "\nWrong password";
                cout << "\nError 404 username or password not found";
                cout << "\nTry Again : \n";

                cin.ignore(); 
                input();
            }
        }
    }
};

int main() {
    password_validation p;
    p.input();
    p.display();

    return 0;
}