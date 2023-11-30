#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s="We will crack GSOC by 2023";
    sort(s.begin(),s.end()); //purely ascii based, spaces included
    cout<<s<<endl;
}