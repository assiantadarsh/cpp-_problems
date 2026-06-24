#include<iostream>
using namespace std;

/*
Create a class Pattern using encapsulation.
Keep n private.
Print inverted star pyramid pattern.

Example for n = 5:

*********
 *******
  *****
   ***
    *
*/

class Pattern {
private:
    int n;

public:
    void input() {
        cout << "Enter size: ";
        cin >> n;
    }

    void display() {
        for(int i = n; i >= 1; i--) {

            // spaces
            for(int j = 1; j <= n - i; j++) {
                cout << " ";
            }

            // stars
            for(int j = 1; j <= 2 * i - 1; j++) {
                cout << "*";
            }

            cout << endl;
        }
    }
};

int main() {
    Pattern p;

    p.input();
    p.display();

    return 0;
}
