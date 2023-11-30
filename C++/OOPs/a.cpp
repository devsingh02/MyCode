#include<iostream>
using namespace std;

class A{
    int x=10;
    public:
    void f(A obj){ 
        // A obj; 
        cout<<obj.x<<endl; //same
        cout<<x;           //same 
    }
};
int main(){
    A ob;
    ob.f(ob);
}
