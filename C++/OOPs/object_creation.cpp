#include<iostream>
using namespace std;

class A{
    public:
    int a=10;
};
int main(){

    // WITHOUT USING POINTERS:-
    // A obj;
    // cout<<obj.a<<endl;
    
    // USING POINTERS:-
    // I)
    // A obj;       //object creation
    // A *ptr;      //pointer creation of type class (storing an object)
    // ptr=&obj;    //ptr pointed to obj
    // cout<<ptr->a<<endl;

    // II)
    // A obj;
    // A *ptr=&obj;
    // cout<<ptr->a<<endl; 

    // III) Similar to Java 
    A *obj=new A; //obj instead of ptr
    cout<<obj->a<<endl;   
}