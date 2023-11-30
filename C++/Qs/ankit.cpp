//Tell Total no. of Capital Letters present in a file
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fin("Ankit.txt");
    char ch; int ct=0;
    ch=fin.get();
    while(!fin.eof()){
        if((int)ch>=65 && (int)ch<=90){ct++; }
        ch=fin.get();    
    }
    fin.close();
    cout<<"Total no. of Capital Letters present in the given file = "<<ct<<endl;
}