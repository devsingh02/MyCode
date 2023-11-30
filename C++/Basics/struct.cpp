#include<iostream>
using namespace std;

struct A{
    string name;    //public by default
    int rollno;
    string password;
};
int main(){
    struct A obj;  // A obj("Devansh",1234,"khuljasimsim"); not possible since no constructors in struct
    obj.name="Devansh";
    obj.rollno=1234;
    obj.password="khuljasimsim";
    cout<<obj.password<<endl;
}