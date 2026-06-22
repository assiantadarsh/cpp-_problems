#include<iostream>
using namespace std;

class Notification {
public:
    virtual void send() = 0;   // pure virtual function
};

class EmailNotification : public Notification {
public:
    void send() {
        cout << "Email notification sent successfully." << endl;
    }
};

class SMSNotification : public Notification {
public:
    void send() {
        cout << "SMS notification sent successfully." << endl;
    }
};

class WhatsAppNotification : public Notification {
public:
    void send() {
        cout << "WhatsApp notification sent successfully." << endl;
    }
};

int main() {

    EmailNotification e;
    SMSNotification s;
    WhatsAppNotification w;

    e.send();
    s.send();
    w.send();

    return 0;
}