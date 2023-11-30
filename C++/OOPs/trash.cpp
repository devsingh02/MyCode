#include<iostream>
using namespace std;

class Parent {
public: virtual void disp(){cout<<"Parent"<<endl; }
};
class Child: public Parent{
    public: void disp(){cout<<"Child"<<endl; }
};

int main(){
        Child *Cptr; Parent *Pptr; 
        Child c; Parent p;
        Cptr=&c; Pptr=&p; 
        //All objects of child
        Cptr->disp(); //child pointer
        c.disp(); //child object
        Pptr->disp(); //Parent pointer
        p.disp(); //Parent object
    }