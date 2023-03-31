#include<bits/stdc++.h>
using namespace std;

class Complex{
    public:
    int x;
    int y;
    Complex(){}
    Complex(int x,int y){
        this->x=x;
        this->y=y;
    }
    void show(){
        cout<<x<<"+"<<y<<"i"<<endl;
    }
    friend Complex operator+(Complex c1, Complex c2);
    // Complex operator+ (Complex c){
    //     Complex temp;
    //     temp.x = this->x+c.x;
    //     temp.y = this->y+c.y;
    //     return temp;
    // }
    friend ostream& operator<<(ostream &o , Complex &c);
};

//overloading cout << operator

ostream & operator <<(ostream &o , Complex &c){
    o<<c.x<<"+"<<c.y<<"i"<<endl;
    return o;
}

Complex operator+ (Complex c1 , Complex c2){
        Complex temp;
        temp.x = c1.x+c2.x;
        temp.y = c1.y+c2.y;
        return temp;
    }


int main(){
    Complex c1(5,6);
    Complex c2(1,2);
    Complex c3;
    c3= c1+c2;
    c3.show();
    cout<<c3;
    return 0;
}