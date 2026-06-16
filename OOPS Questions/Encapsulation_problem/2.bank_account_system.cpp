#include<iostream>
using namespace std;

class bank{

    private:
    int accout_number;
    string account_holder_name;
    int curr_balance;
    int deposit_amount;
    int withdraw_amount;
    int available_balance;
    public:

    void input(){
        cout<<"Enter account holder name : ";
        getline(cin,account_holder_name);
        cout<<"Enter the account number : ";
        cin>>accout_number;
        cout<<"Enter balance : ";
        cin>>curr_balance;
    }
    void deposit(){
        cout<<"Enter deposited amount : ";
        cin>>deposit_amount;

        available_balance = curr_balance - deposit_amount;
    }

    void withdraw(){
        cout<<"Enter withdraw_amount : ";
        cin>>withdraw_amount;
        available_balance = available_balance + withdraw_amount;
    }
    
    void display_balance(){

        cout<<"==========================="<<endl;
        cout<<"Balance Record"<<endl;
        cout<<"Name : "<<account_holder_name<<endl;
        cout<<"Account Number : "<<accout_number<<endl;
        cout<<"Current balance : "<<curr_balance<<endl;
        cout<<"Deposit amount : "<<deposit_amount<<endl;
        cout<<"Withdraw amount : "<<withdraw_amount<<endl;
        cout<<"Available balance : "<<available_balance<<endl;
        cout<<"==========================="<<endl;

    }

};
int main(){

    bank b;
    b.input();
    b.deposit();
    b.withdraw();
    b.display_balance();
}