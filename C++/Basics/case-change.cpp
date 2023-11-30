#include<iostream>
using namespace std;

int main(){
    string s,str;
    s="HeLLo BhaRAt";
    // str="";
    // for(int i=0;i<s.length();i++){
    //     str=str+toupper(s[i]); //toupper gives error on being 
    // }                            concated simultaneusly
    
    //UPPERCASE
    for(int i=0;i<s.length();i++){
        s[i]=toupper(s[i]);
    }
    cout<<s<<endl;

    //LOWERCASE
    for(int i=0;i<s.length();i++){
        s[i]=tolower(s[i]);
    }
    cout<<s<<endl;
}