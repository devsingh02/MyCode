#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream fin("Ayo.txt");
    char ch; int count=0; string s="";
    while(fin.eof()!=1){
        ch=fin.get();
        s=s+ch;
        if(ch=='\n'){count++;}
    }
    cout<<count+1;
    fin.close();

    ofstream fout("A.txt");
    fout<<s;
    fout.close();
}