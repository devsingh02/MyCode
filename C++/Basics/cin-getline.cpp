#include<iostream>
#include<string>
using namespace std;

// When you take any input using cin, it stores ‘\n’ in buffer. 
// Since, getline does not ignore leading whitespace, it thinks it has 
// finished reading and stops reading any further. So, this problem arises
// when getline() is used after cin statement.

int Problem(){
    string a,b;
    cout<<"Enter any string 2 times\n";
    cin>>a;
    getline(cin,b);
    cout<<a<<endl<<b<<endl; //space in output is \n
}
//after cin is applied, \n is stored in buffer. cin ignores \n but getline() 
//does't therfore it reads \n as new input. 

char Solved(){
    string a,b;
    cout<<"Enter any string 2 times\n";
    cin>>a;
    cin.ignore(); //to rectify cin's fault
    getline(cin,b);
    cout<<a<<endl<<b<<endl;
}
int main(){
    cout<<"PROBLEMATIC : cin is above getline\n";
    Problem();
    cout<<"PROBLEM SOLVED : applied cin.ignore()\n";
    Solved();
}