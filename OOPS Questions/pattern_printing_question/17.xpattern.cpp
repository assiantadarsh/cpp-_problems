#include<iostream>
using namespace std;

class XPattern {
private:
    int n;

public:
    void input() {
        cout << "Enter odd size: ";
        cin >> n;
    }

    void print() {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                if(i == j || i + j == n + 1)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    XPattern x;
    x.input();
    x.print();

    return 0;
}