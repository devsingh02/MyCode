//A class is a blueprint (common data used for different personel)
//public: variables can be used everywhere
//private: only within class
//protected: only within class & subclass (inherited)
//variables/objects declared anywhere (function/class/main) are private or accessible to only that scope.
//functions can be called from anywhere


#include<iostream>
using namespace std;

class Emp{      //template/blueprint
    public:     //∴ default everything is private in class
    string name;
    int salary;
};

//∴ variables/objects declared in a function are also private (local variables)

string display(string n,int s){ //∴ necessary to call by value instead of using dev.name , dev.salary directly
    cout<<"Name : "<<n<<endl<<"Salary / Profit : "<<s<<" Crores per annum"<<endl;
}

//∴ variables/objects declared in main are also private

int main(){  
    //objects are necessary to call/use classes
    Emp dev;  //A obj  \(object name "dev") ((datatype)(variable name))
    dev.name="Devansh Singh";
    dev.salary=2;
    display(dev.name,dev.salary); //functions can be called from anywhere
}