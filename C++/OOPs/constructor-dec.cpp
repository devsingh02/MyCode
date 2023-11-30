//Every class has by default a default constructor.
//But when one create's one's own costructor, that default constructor is lost.
#include<iostream>
using namespace std;

class A{
    public:
    A(){ //CONSTRUCTOR : executes/works/initialises as soon as object is created in any function
        cout<<"I am constructor"<<endl;
    }
    ~A(){ //De-CONSTRUCTOR : executes/works/de-initialises as soon as function is finished
        cout<<"I am de-constructor"<<endl;
    }
};

int main(){
    A obj; //constructor begins workingz
    cout<<"Reached main"<<endl;
}