#include<iostream>
using namespace std;

class scooty{       // Parent Class
    public:
        int speed;
        float mileage;
    private:
        int bootspace;
};

class bike : public scooty{    // Child Class
    public:
        int gears;
};

int main(){

    bike b;
    b.gears = 4;
    b.mileage = 23.45;
    b.speed = 245;

    return 0;
}