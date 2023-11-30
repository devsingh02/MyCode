//ONE Template for ONE class/object

#include<iostream> 
using namespace std;
// template<class T1,class T2,class T3> X // <__,__,__> doesn't match functions' (__,__) parameter

template<class T1,class T2>
void add(T1 a, T2 b){cout<<a+b<<endl;}

template<class T>
void subt(T a, T b){cout<<a-b<<endl;}

int main(){
 // add<int,float>(2,2.2);  ✓
    add(2,2.2); //specification unnecessary in functions
    add('a','z');
    subt(2,4); //different types could give error
    subt('a','z');
}