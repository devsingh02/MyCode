#include<iostream>
using namespace std;

class Complex{
    public:
    int x,y;
    Complex(){this->x=0; this->y=0;}
    Complex(int x,int y){this->x=x; this->y=y;}

    //<return type> operator<operator>(arguments){<body>}
    Complex operator+(Complex &c2){    //operator '+'
        Complex temp;
        temp.x=this->x+c2.x;
        temp.y=y+c2.y;   //this not required
        return temp;
    }  
};
// OR
// Complex operator+(Complex &c1, Complex &c2){    
//    Complex temp;
//    temp.x=c1.x+c2.x;
//    temp.y=c1.y+c2.y;
//    return temp;
// }

int main(){
    Complex c1(1,2),c2(10,20),c3;
    c3=c1+c2; //'+' not a operator of 2 primitives, but here of 2 non-primitives i.e. c1,c2
  //c3=c1.operator+(c2);
  //note that left operand is the caller object
    cout<<c3.x<<endl<<c3.y<<endl;
}