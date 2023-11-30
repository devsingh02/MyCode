//Small talk simulator

#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Kitne ka hai re tu?"<<endl;
    cin>>age;
    
    switch(age){ //switch doesn't accept string in C++
        case 10:
            cout<<"Are meri behen me 10 saal ka hai! Jinx!"<<endl;
            break; //continue can never be used in switch case
        case 18:
            cout<<"Same pinch bro"<<endl;
            break;
        default:
            cout<<"Acha. Aur me 18 ka."<<endl;      
    }
}