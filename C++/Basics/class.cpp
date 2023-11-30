#include<iostream>
using namespace std;

class A{
    public:      //private by default
    string name;
    int rollno;
    string password;

    A(string name, int rollno, string password){
        this->name=name;
        this->rollno=rollno;
        this->password=password;
    }
};
int main(){
    A obj("Devansh",1234,"khuljasimsim");
    cout<<obj.password<<endl;
}