#include<iostream>
using namespace std;

class vehicle{  // Parent class
    public:
        int speed;
        float mileage;
        string fuel;
};

class twowheeler : public vehicle{     // Child class/ derived class
    public:
   
};

class fourwheeler : public vehicle{    // Child Class/ derived class
    public:

};

class bike :public twowheeler{
    public:
};

class scooty : public twowheeler{

};

class car : public fourwheeler{

};
int main(){



    return 0;
}