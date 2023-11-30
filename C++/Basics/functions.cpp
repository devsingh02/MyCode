#include<iostream>
using namespace std;

//Compiler starts reading program from top to bottom, therefore, initialise user-defined
//funtions above mains  OR  atleast declare them above mains

//INTIALISED BEFORE
double sum(double a, int b){ 
    return a+b;
}
int main(){   //main() can't be void
    cout<<"Enter any two numbers :"<<endl;
    double a,b;
    cin>>a>>b;
    cout<<"Sum = "<<sum(a,b)<<endl;
}

//DECLARED BEFORE
// int sum(double a, int b);
// int main(){
//     cout<<"Enter any two numbers :"<<endl;
//     int a,b;
//     cin>>a>>b;
//     cout<<"Sum = "<<sum(a,b)<<endl;
// }
// int sum(double a, int b){
//     int c=a+b;
//     return c;
// }