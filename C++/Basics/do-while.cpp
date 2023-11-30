//Print all positive numbers from given number to 1

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;

    do{
        cout<<"We are at "<<n<<endl;
        n--;
    }while(n>=1);
}