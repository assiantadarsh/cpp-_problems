#include<iostream>
using namespace std;

class pattern{

    protected:
    int n;
    public:
    void input(int size){
        n = size;
    }
};
class star_diamond : public pattern{
    public:
    void display(){
        // Upperbound
        for(int i = 1;i<= n;i++){

            // For spaces
            for(int k = 1;k <= n-i; k++){
                cout<<" ";
            }

            // For star
            for(int j = 1;j <= i;j++){
                cout<<"*"<<" ";
            }

            cout<<"\n";
        }

        // Lower bound
        for(int i = 1;i<= n;i++){

            // For spaces
            for(int k = 1;k < i; k++){
                cout<<" ";
            }

            // For star
            for(int j = 1;j <= n- i + 1;j++){
                cout<<"*"<<" ";
            }

            cout<<"\n";
        }
    }
};
class NumberDiamond : public pattern{
public:
    void display() {
        cout<<"\n";
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n - i; j++) cout << " ";
            for(int j = 1; j <= i; j++) cout << j << " ";
            cout << endl;
        }

        for(int i = n - 1; i >= 1; i--) {
            for(int j = 1; j <= n - i; j++) cout << " ";
            for(int j = 1; j <= i; j++) cout << j << " ";
            cout << endl;
        }
    }
};

int main(){

    int size;
    cout<<"Enter the positive value of size : ";
    cin>>size;

    star_diamond st;
    st.input(size);
    st.display();

    NumberDiamond nu;
    nu.input(size);
    nu.display();
    
}