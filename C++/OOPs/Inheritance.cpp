//  base class/super class/parent class
//  derived class/child class/sub class

//  subclass is class which inherits from the base class
//  Inheritance only means that specified info in the base class is accessible/visible in the derived class (THROUGH PUBLIC AND PROTECTED)
//∴ subclass [ACCESS] = base's members(non-private) + it's own unique members(unaccessible by base class) 

//  SUBCLASS' OBJECTS [ACCESS] --> BASECLASS' PROTECTED/PUBLIC MEMBERS 
//                                + SUBCLASS' PROTECTED/PUBLIC MEMBERS 

//  public --> means accessible in mains or elsewhere  

#include <iostream>
using namespace std;

class Employee{

protected:  //accessible in class & it's subclass
    string Name;

private:    //accessible only in class  
    int Age;
    int IQ;

public:     //accessible everywhere (through objects)
    Employee(string Name, int Age, int IQ){
        this->Name=Name;
        this->Age=Age;
        this->IQ=IQ;
    }
    void AskForPromotion(){
        if(IQ>130)
            cout<<Name<<" got promoted!"<<endl;
        else
            cout<<"Sorry "<<Name<<". No promotion for you."<<endl;    
    }
};
 
class Coder : public Employee{   //Coder class inherited properties from Employee.        ✓ public to make Employee's members accessible to Coder's object 
public:
    string FavProgrammingLanguage; //exist in Coder class
    
//A constructor has to be created for Coder's object since we have declared a constructor in class Employee and Coder is a subclass of Employee. ∴ default constructor is gone.

    Coder(string Name, int Age, int IQ, string FavProgrammingLanguage) : Employee(Name, Age, IQ){
        //Name, Profession, Age, SecretPassword gets initialised in Employee ∴ all exist in Employee class
        this->FavProgrammingLanguage=FavProgrammingLanguage;

    }

    void FixBug(){
        cout<<Name<<" fixed bug using "<<FavProgrammingLanguage<<endl;
        //(protected) Name variable accessed from Employee
    }
};

class Teacher : public Employee{
public:
    string Subject;
    Teacher(string Name, int Age, int IQ, string Subject):Employee(Name, Age, IQ){
        this->Subject=Subject;
    }
    void PrepareLesson(){
        cout<<Name<<" Sir is preparing for a class of "<<Subject<<" lesson"<<endl;
        //Age and IQ won't be accessible ∵ both are private
    }
};
int main(){
    
    Coder Dev("Devansh Singh", 25, 141, "C++");
    
    Dev.FixBug();  // Coder's scope ✓
    Dev.AskForPromotion();  //Employee's scope ✓

    cout<<Dev.FavProgrammingLanguage<<endl;
    // cout<<Dev.Name<<endl;    not possible ∵ Name is protected
    // access Name variable from within any class since it is protected

    //1. private/protected members of Employee class 2. private/protected members of Coder's class itself  cannot be accessed by Coder's object since protected->accessible in class & it's subclass , private -> accessible only in class.

    Teacher Sur("Suresh Pandey", 45, 122, "History");
    Sur.PrepareLesson();  //Teacher
    Sur.AskForPromotion();//Employee
}

//2 subclasses can't access each others members