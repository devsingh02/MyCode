#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream iofile("Advance.txt",ios::out | ios::in);
    //iofile can be used both to read and write
    iofile<<"Hey There!  12345";
    iofile.seekg(2,ios::beg); //start from 2
    char ch; ch=iofile.get(); //get() at 2nd index
    while(!iofile.eof()){
        cout<<ch;
        ch=iofile.get();
    }
    // string s;
    // getline(iofile,s);
    //  cout<<s;
    iofile.close();
}