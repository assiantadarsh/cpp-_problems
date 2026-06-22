#include<iostream>
using namespace std;

class Pattern {
public:
    virtual void printPattern() = 0;   // pure virtual function
};

class TrianglePattern : public Pattern {
private:
    int n;

public:
    void input() {
        cout << "Enter size for triangle pattern: ";
        cin >> n;
    }

    void printPattern() {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

class SquarePattern : public Pattern {
private:
    int n;

public:
    void input() {
        cout << "Enter size for square pattern: ";
        cin >> n;
    }

    void printPattern() {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main() {

    TrianglePattern t;
    SquarePattern s;

    t.input();
    cout << "\nTriangle Pattern:\n";
    t.printPattern();

    s.input();
    cout << "\nSquare Pattern:\n";
    s.printPattern();

    return 0;
}