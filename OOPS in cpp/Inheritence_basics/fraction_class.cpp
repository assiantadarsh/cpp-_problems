#include<iostream>
using namespace std;

class fraction {
    public:
        int num;
        int den;
    fraction(int num,int den){
        this->num = num;
        this->den = den;
    }

    fraction operator+(fraction f){
        int newnum = this->num * f.den + f.num * this ->den;
        int newden = this->den * f.den;
        fraction ans(newnum,newden);
        return ans;
    }

    void display(){
        cout<<num <<" / "<<den<<endl;
    }

};
int main(){
    fraction f1(2,3);
    fraction f2(3,4);
    
    //fraction f3 = f1.add(f2);
    fraction f3 = f1 + f2;
    f3.display();

    return 0;
}