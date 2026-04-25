#include<iostream>
#include<cmath>
using namespace std;

// Que -> Convert Binary number to Decimal and given number is positive .
int main(){

    string binary;
    cout<<"Enter the binary number : ";
    cin>>binary;

    int n = binary.length() - 1;
    int decimal = 0;
    for(int i = 0; i <= n; i++){

        if(binary[n - i] == '1'){
            decimal += pow(2,i);
        }
    }

    cout<<"Decimal : "<<decimal;

    return 0;

}