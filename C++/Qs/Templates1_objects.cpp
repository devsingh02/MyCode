//Templates are either used for classes (constructor, data variables) or Functions

#include<iostream> 
using namespace std;
// template<class T1=int,class T2=float,class T3=char> //specification unnecessary 
template<class T1,class T2,class T3> //for class A only
class A{ 
    public:
    T1 a; T2 b; T3 c;
    A(T1 x,T2 y,T3 z){ //class' constructor should have = arguments as of its template
        a=x; b=y; c=z;
    }
    void display(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
    }
};
int main(){
    //A debu(21,12.12,'c'); --> ERROR
    A<int,float,char> debu(21,12.12,'c'); //<specification> necessary in objects
    debu.display();
    A<double,string,bool> nishu(11.1,"Nishant",true);
    nishu.display();
}