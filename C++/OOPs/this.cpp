//this-> refers to that object through which the constructor/function is called.

#include <iostream>
using namespace std;

class Employee
{// private:     //it would anyways be private by default
    string SecretPassword;

public:
    string Name;
    string Profession;
    int Age;

    Employee(string Name, string Profession, int Age, string SecretPassword){
        this->Name=Name;
        this->Profession=Profession;
        this->Age=Age;
        this->SecretPassword=SecretPassword;
    }

//OR

//  Employee(string name, string profession, int age, string secretpassword){
//      this->Name=name;
//      this->Profession=profession;
//      this->Age=age;
//      this->SecretPassword=secretpassword;
//  } 


    // OR 

//  Employee(string name, string profession, int age, string secretpassword){
//      Name=name;
//      Profession=profession;
//      Age=age;
//      SecretPassword=secretpassword;
//  }

    void get_SecretPassword(){   // (public)
        cout<<"The Secret Password of the Employee is "<<this->SecretPassword<<endl;
    }                                                    //Dev.SecretPassword  
};

int main(){
    Employee Dev("Devansh Singh","Coder", 25, "bunni_buniya");
    cout<<Dev.Name<<endl<<Dev.Profession<<endl<<Dev.Age<<endl;
    // Dev.SecretPassword;  won't work since it is private (only visible/accesible in class)
    Dev.get_SecretPassword(); //Encapsulation concept

    Employee Nish("Nishant Gaur","Trader", 25, "pyaari_billi");
    cout<<Nish.Name<<endl<<Nish.Profession<<endl<<Nish.Age<<endl;
    Nish.get_SecretPassword(); //(use public function made within class to access anything in it)
}