// Type conversion of data members for further subclasses depending upon Type of Inheritance of the present one:
// private -> all private(inaccessible)
// public -> all same
// protected -> all demoted

#include<iostream>
using namespace std;

class A{
    public:
    int x=10;
    private:
    int y=20;
    protected:
    int z=30;   //z accessible in its dervied class only
    
};
class a: private A{
    public: int X=1; int Z=z;  
    protected: int Y=222;
};
class b: private A{};
class c: protected A{};

int main(){
    a oba;
    b obb;
    c obc;
    
    cout<<oba.Z<<endl;  //object can access public members of its class only
    return 0;
}