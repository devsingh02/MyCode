#include<fstream>
#include<iostream>

using namespace std;

int main(){
    ofstream fout("A.txt");
    fout<<"Hello guys"<<endl;
    fout.close();
    fout.open("B.txt");
    fout<<"Copy me to A please!"<<endl;
    fout.close();
    
    ifstream fin("B.txt");
    char ch; string s="";
    ch=fin.get();
    while(fin.eof()!=1){
        s=s+ch;
        ch=fin.get();
    }
    fin.close();

    fout.open("A.txt");
    fout<<s;
    fout.close();
}