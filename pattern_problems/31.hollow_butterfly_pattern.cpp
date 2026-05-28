#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the positive value of n: ";
    cin >> n;

    // Upper
    int ne = 1;
    int pe = 1;

    for (int i = 1; i <= n; i++) {
        // Left
        cout << "*";

        if (i > 2) {
            for (int k = 1; k <= ne; k++) {
                cout << " ";
            }
            ne++;
        }

        if (i > 1) cout << "*";

        for (int j = n - 1; j >= i; j--) {
            cout << " ";
        }

        // Right
        for (int j = n - 1; j >= i; j--) {
            cout << " ";
        }

        if (i > 1) cout << "*";

        if (i > 2) {
            for (int k = 1; k <= pe; k++) {
                cout << " ";
            }
            pe++;
        }

        cout << "*";
        cout << "\n";
    }

    // Lower
    for (int i = n; i >= 1; i--) {
        cout << "*";

        if (i > 2) {
            for (int k = 1; k <= i - 2; k++) {
                cout << " ";
            }
        }

        if (i > 1) cout << "*";

        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        if (i > 1) cout << "*";

        
        if (i > 2) {
            for (int k = 1; k <= i - 2; k++) {
                cout << " ";
            }
        }

        cout << "*";
        cout << "\n";
    }

    return 0;
}