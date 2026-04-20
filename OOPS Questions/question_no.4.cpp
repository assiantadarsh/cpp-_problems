#include<iostream>
using namespace std;
// 4. Default Constructor

// Q4. Create a BankAccount class with:

// .account number
// .balance

// Use a default constructor to set balance = 0 and add a deposit function.

class bankaccount{
    public:
    long long account_num;
    float balance; 

    bankaccount(){
        this->balance = 0;
    }
    
    void deposit(int dep){
        this->balance = balance + dep;
    }
    void display(){
        cout<<"Balance : "<<balance;
    }
};


int main(){

    bankaccount b;
    b.deposit(345);
    b.deposit(234);
   
    b.display();
}