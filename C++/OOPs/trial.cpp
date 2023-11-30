//the most common use of polymorphism is when a parent class reference variable is used to refer to a subclass' object

//a virtual function says -> hey, can you please check if there is implementation of my function in the derived classes? If yes, please execute that instead of me. [∴ the most derived function of virtual function is going to be excecuted]

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

    virtual void Work(){  //without virtual, this code would run
        cout<<Name<<" is checking email, task backlog, basically chillin..."<<endl;
    }
};
 
class Coder : public Employee{           
public:
    string FavProgrammingLanguage; 
    Coder(string Name, int Age, int IQ, string FavProgrammingLanguage) : Employee(Name, Age, IQ){
        this->FavProgrammingLanguage=FavProgrammingLanguage;
    }
    void FixBug(){
        cout<<Name<<" fixed bug using "<<FavProgrammingLanguage<<endl;
    }

    void Work(){
        cout<<Name<<" is creating code in "<<FavProgrammingLanguage<<" language"<<endl;;
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
    
    void Work(){
        cout<<Name<<" is checking test papers of "<<Subject<<" exam"<<endl;
    }
};
int main(){
    // Coder c("Devansh", 25, 141, "C++");
    Employee* e1=new Coder("Devansh", 25, 141, "C++"); //object creation using pointers

    Teacher t("Suresh", 45, 122, "History");
    Employee* e2=&t;
    
    e1->AskForPromotion();  // (pointer).obj == pointer->obj
    e2->Work();
    // c.Work();
    // t.Work();
}