#include<iostream>
using namespace std;

// 1                           
// 12
// 123
// 1234
// 12345

// and second is ---

// 12345
// 1234
// 123
// 12
// 1
class pattern{

    protected:
    int n;

    public:

    void input(int size){
        n = size;
    }
};

class color{
    protected:
    string color;

    public:
    void color_input(string col){
        color = col;
    }
};

class number_triangle : public pattern ,public color{
    public:
    void display(){
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= i; j++) {
                cout << j;
            }
            cout << endl;
        }

        cout<<"\nColor : "<<color;
    }
};

class reverse_triangle : public pattern,public color{

    public:
    void display(){
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n - i + 1; j++) {
                cout << j;
            }
            cout << endl;
        }
        cout<<"\nColor : "<<color;
    }
};

int main(){

    int size;
    cout<<"Enter the positive value of size : ";
    cin>>size;

    number_triangle n1;
    n1.input(size);
    n1.color_input("Sky Blue");
    n1.display();
    cout<<"\n";
    reverse_triangle rt;
    rt.input(size);
    rt.color_input("Black");
    rt.display();
}