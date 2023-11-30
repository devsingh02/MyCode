#include<iostream>
#include<string>

using namespace std;

int reeditting_a_string(){ //can be re-editted in C++
    string s1,s2,s3;
    s1="Hello bois";
    s2="Let us see";
    s3="Ise badal ke dikhao";
    s1.clear();  //NULLIFIED
    s2="";       //NULLIFIED
    s3="Dekha. C++/Java me re-edit ho jata hai"; //RE-EDITTED
    cout<<s1<<endl<<s2<<endl<<s3<<endl;
}

int name_input(){
    string s;
    cout<<"cin>> cannot accept spaces (multiple words). Therefore we use getline(cin,s) :"<<endl;
    cin.ignore(); //cin was used before
    getline(cin,s);
    cout<<s<<" Thakur"<<endl;
}

char index(){
    string s1,s2;
    s1="Hello";
    s2="bois";
    cout<<s1[0]<<s2[2]<<endl; //s1[0]+s2[2] as it is will add their ascii value
                              //s3=s1[0]+s2[2] will concat them
}

void general_functions(){
    string s1,s2;
    s1="Hello";
    s2="bois"; 
    cout<<"s1.compare(s2) : "<<s1.compare(s2)<<endl; //if s1>s2:+1
                                                     //if s1<s2:-1
                                                     //if s1==s2:0
    cout<<"s1.append(s2) : "<<s1.append(s2)<<endl;
}

int main(){
    char choice; //null
    while(choice!='e'){
        cout<<"Enter what to learn : ";
        cin>>choice;
        switch (choice){ 
            case 'r':
                reeditting_a_string();
                break;
            case 'n':
                name_input();
                break;
            case 'i':
                index();
                break;
            case 'g':
                general_functions();
                break;   
            default:
                break; 
        continue;       //restart/continue running while loop
        }
    }
}

