#include<iostream>
using namespace std;

int x=10; //global variable : visible everywhere

namespace a{
    void trip(){ //initialisation
        cout<<"Life is a Trip na"<<endl;
    }
}

namespace b{
    void trip(); //only declaration
}
void b::trip(){ //initialisation
    cout<<"Life is a Trip nb"<<endl;
}

class A{
    char ch1='A'; //private variable : only visible in class/ accessible within class
    public:
    void trip(){ //initialisation
    cout<<"Life is a Trip "<<ch1<<endl;
    }
};

class B{
    char ch2='B'; //private variable : only visible in class
    public:
    int trip(int,int); //only declaration with expected arguments
};
int B::trip(int x,int y){ //initialisation
    cout<<"Life is a Trip "<<ch2<<endl;
    x=222;
    return x;
}

int main(){
    int x=-10; //local to main

    cout<<"Access global variable using :: --> "<<::x<<endl; //10
    cout<<"Access local variable as usual --> "<<x<<endl;    //-10

// A::trip(); won't work since it is "necessary to create object to use class"
// (class itself has no memory, object does, so it can operate/work) 
    
    A objA; B objB; //created objects

  //cout<<objA.ch1<<objB.ch2<<endl;  --> won't work since ch1,ch2 are private variables
    
    objA.trip(); //calling function through obj [class]
    objB.trip(2,4);
    a::trip();   //calling function using specifier :: [namespace]
    b::trip();
}