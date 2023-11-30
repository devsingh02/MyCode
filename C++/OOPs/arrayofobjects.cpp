#include<iostream>
using namespace std;

class A{
    string s;   //public: not required. Objects uses private info for calc. but does't 
    double x; //share/display.  
};
int main(){
    A obj[10]; //array of 10 objects. Each object has a name and salary stored in it.
}
//refer to 3rd array using "obj[2]"