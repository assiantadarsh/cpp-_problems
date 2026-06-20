#include<iostream>
using namespace std;

class bank {

public:
    virtual void input() = 0;
    virtual void interest() = 0;
};

class SBI : public bank {
private:
    int interest_rate;
    float principal;
    int time;

public:
    void input() {
        interest_rate = 23;

        cout << "\nEnter principal amount for SBI: ";
        cin >> principal;

        cout << "Enter time in years: ";
        cin >> time;
    }

    void interest() {
        float si = (principal * interest_rate * time) / 100;

        cout << "\nSBI interest rate is: " << interest_rate << "%";
        cout << "\nInterest amount is: " << si;
        cout << "\nTotal amount after interest is: " << principal + si << endl;
    }
};

class HDFC : public bank {
private:
    int interest_rate;
    float principal;
    int time;

public:
    void input() {
        interest_rate = 28;

        cout << "\nEnter principal amount for HDFC: ";
        cin >> principal;

        cout << "Enter time in years: ";
        cin >> time;
    }

    void interest() {
        float si = (principal * interest_rate * time) / 100;

        cout << "\nHDFC interest rate is: " << interest_rate << "%";
        cout << "\nInterest amount is: " << si;
        cout << "\nTotal amount after interest is: " << principal + si << endl;
    }
};

class ICICI : public bank {
private:
    int interest_rate;
    float principal;
    int time;

public:
    void input() {
        interest_rate = 20;

        cout << "\nEnter principal amount for ICICI: ";
        cin >> principal;

        cout << "Enter time in years: ";
        cin >> time;
    }

    void interest() {
        float si = (principal * interest_rate * time) / 100;

        cout << "\nICICI interest rate is: " << interest_rate << "%";
        cout << "\nInterest amount is: " << si;
        cout << "\nTotal amount after interest is: " << principal + si << endl;
    }
};

int main() {
    SBI s;
    HDFC h;
    ICICI i;

    s.input();
    s.interest();

    h.input();
    h.interest();

    i.input();
    i.interest();

    return 0;
}