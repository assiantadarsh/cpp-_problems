#include<iostream>
using namespace std;

class vehicle{  // Parent class
    public:
        int speed;
        float mileage;
        string fuel;
};

class car : public vehicle{     // Child class/ derived class
    public:
    bool sunroof; // yes/no
};

class bike : public vehicle{    // Child Class/ derived class
    public:

};
int main(){



    return 0;
}