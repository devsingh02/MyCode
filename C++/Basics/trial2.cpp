#include<iostream>
using namespace std;

class A{
int i=2;

friend void show();
};
void show(A a){cout<<a.i<<endl;}
int main(){
    A obj;
    show(obj);
}