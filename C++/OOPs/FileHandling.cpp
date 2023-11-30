// Reading + writing in a file

#include<iostream> 
#include<fstream> 
using namespace std; 

int main(){

    ofstream fout("MySecrets.txt"); fout<<"hello \n123"; fout.close();

    ifstream fin("MySecrets.txt"); 

    // string s;
    // getline(fin,s); //getline does't read \n, >> does't read space ' '
    // cout<<s;

    char ch;
    ch=fin.get();
    while(!fin.eof()){
        cout<<ch;
        ch=fin.get();
    }
    fin.close();
}