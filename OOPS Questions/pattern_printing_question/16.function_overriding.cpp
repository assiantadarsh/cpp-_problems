#include<iostream>
using namespace std;

class Pattern {
public:
    virtual void display() {
        cout << "Base class pattern";
    }
};

class Butterfly : public Pattern {
public:
    void display() {
        int n = 4;

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= i; j++) cout << "*";
            for(int j = 1; j <= 2 * (n - i); j++) cout << " ";
            for(int j = 1; j <= i; j++) cout << "*";
            cout << endl;
        }

        for(int i = n; i >= 1; i--) {
            for(int j = 1; j <= i; j++) cout << "*";
            for(int j = 1; j <= 2 * (n - i); j++) cout << " ";
            for(int j = 1; j <= i; j++) cout << "*";
            cout << endl;
        }
    }
};

class HollowSquare : public Pattern {
public:
    void display() {
        int n = 5;

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                if(i == 1 || i == n || j == 1 || j == n)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
    }
};

class Diamond : public Pattern {
public:
    void display() {
        int n = 5;

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n - i; j++) cout << " ";
            for(int j = 1; j <= i; j++) cout << "* ";
            cout << endl;
        }

        for(int i = n - 1; i >= 1; i--) {
            for(int j = 1; j <= n - i; j++) cout << " ";
            for(int j = 1; j <= i; j++) cout << "* ";
            cout << endl;
        }
    }
};

int main() {
    Pattern *p;

    Butterfly b;
    HollowSquare h;
    Diamond d;

    cout << "\nButterfly Pattern:\n";
    p = &b;
    p->display();

    cout << "\nHollow Square:\n";
    p = &h;
    p->display();

    cout << "\nDiamond:\n";
    p = &d;
    p->display();

    return 0;
}