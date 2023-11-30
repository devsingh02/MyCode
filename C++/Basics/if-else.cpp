#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Kitne ka hai re tu?"<<endl;
    cin>>age;
    if(age>18 && age<90){
        cout<<"Ja vote dalke aa sale"<<endl;
    }
    else if(age>0&&age<18){
        cout<<"Ghar ja ke doodh pi sale"<<endl;
    }
    else{ //negative or more than possible age
        cout<<"Kiska chutiya katra sale"<<endl;
    }
}
        
        

