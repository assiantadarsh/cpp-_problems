#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the positive value of n: ";
    cin >> n;

    // Upper half
    for (int i = 1; i <= n; i++) {
        // outer spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        cout << "*";

        // inner spaces
        for (int j = 1; j <= 2 * i - 3; j++) {
            cout << " ";
        }

        if (i != 1) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        // outer spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        cout << "*";

        // inner spaces
        for (int j = 1; j <= 2 * i - 3; j++) {
            cout << " ";
        }

        if (i != 1) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}