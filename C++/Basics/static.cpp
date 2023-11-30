//NO CONCLUSION
#include<iostream>
using namespace std;

int x=0;
 
int No_Of_Alphabets(){
    for(char ch='A';ch<='Z';ch++){
        x++;
    }
    return x;  
}

int No_Of_2DigitNo(){
    for(int i=10;i<=99;i++){
        x++;
    }
    return x;
}

int main(){
   cout<<No_Of_Alphabets()<<endl;  //x remains 26
   cout<<No_Of_2DigitNo()<<endl;   //x becomes 26+90=116
   cout<<::x<<endl;                //x remains 116
}