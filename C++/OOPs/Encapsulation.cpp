//Hackers might try to steal your data from your class, through another class/main or a class of
//their own. To protect your one's data, we use encapsulation.

//ENCAPSULATION : binding data and making it private to protect from thiefs

//--> one can access this private information of the class by calling public methods/functions
//    of the class who get that info

//∴ we use setters, getters

#include <iostream>
using namespace std;

class Employee{
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

    void setName(string name){ //SETTER
        Name=name; // ==  this->Name=name;
    }
    string getName(){          //GETTER 
        return Name;
    }
    void setProfession(string p){
        Profession=p;
    }
    string getProfession(){
        return Profession;
    } 
    void setAge(int age){
        Age=age;
    }
    int getAge(){
        return Age;
    }
    void setSecretPassword(string sp){
        SecretPassword=sp;
    }
    string getSecretPassword(){   
        return SecretPassword; 
    }
};

int main(){
    Employee Dev("Devansh Singh","Coder", 25, "bunni_buniya");
    Employee Nish("Nishant Gaur","Trader", 25, "pyaari_billi");

    Dev.setName("Debu");
    Dev.setProfession("Researcher");
    Dev.setAge(18);
    Dev.setSecretPassword("Tat Tvam Asi");
    //changed
    cout<<Dev.getName()<<endl<<Dev.getProfession()<<endl<<Dev.getAge()<<endl<<Dev.getSecretPassword()<<endl;
    //unchanged
    cout<<Nish.getName()<<endl<<Nish.getProfession()<<endl<<Nish.getAge()<<endl<<Nish.getSecretPassword()<<endl;
}


    