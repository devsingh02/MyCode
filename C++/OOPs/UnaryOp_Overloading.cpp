#include<iostream>
using namespace std;

class Complex{
    public:
    int x,y;
    Complex(){this->x=0; this->y=0;}
    Complex(int x,int y){this->x=x; this->y=y;}

    //<return type> operator<operator>(arguments){<body>}
    Complex operator-(){    //operator '-'
        Complex temp;
        temp.x=-this->x;
        temp.y=-y;   //this not required
        return temp;
    } 
};

int main(){
    Complex c1(1,2),c3;
    c3=-c1; //'-' not a operator of a primitive, but here of a non-primitive i.e. c1
  //c3=c1.operator-();
    cout<<c3.x<<endl<<c3.y<<endl;
}