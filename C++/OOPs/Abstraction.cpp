//an Abstract class is a class that has atleast one pure virtual function

#include <iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee{   //class Employee signed the contract
//private:     //(hidden)  //ENCAPSULATED
    string Name;
    string Profession;
    int Age;
    string SecretPassword;

public:   //public methods to access private
    Employee(string Name, string Profession, int Age, string SecretPassword){
        this->Name=Name;
        this->Profession=Profession;
        this->Age=Age;
        this->SecretPassword=SecretPassword;
    }

    void AskForPromotion(){
        if(Age>20)
            cout<<Name<<" got promoted!"<<endl;
        else
            cout<<"Sorry "<<Name<<". No promotion for you."<<endl;    
    }
};

int main(){
    Employee Dev("Devansh Singh","Coder", 25, "bunni_buniya");
    Employee Mukesh("Mukesh Bhaijan","Chef", 19, "namkeen laddoo");

    Dev.AskForPromotion();
    Mukesh.AskForPromotion();
}


    