#include<iostream>
using namespace std;

class Time{
    public:
    int s,m,h;
    Time(){this->s=0; this->m=0; this->h=0;}
    Time(int h,int m, int s){this->s=s; this->m=m; this->h=h;}

    //<return type> operator<operator>(arguments){<body>}
    Time operator+(Time &t2){    //operator '+'
        Time temp;
        int a,b,c;
        a=this->s+t2.s; //67
        b=this->m+t2.m; //65
        c=this->h+t2.h; //3
        temp.s=a%60;
        temp.m=(a/60+b)%60;
        temp.h=c+b/60;
        return temp;
    }  
};

int main(){
    Time t1(2,50,22),t2(1,15,45),t3;
    t3=t1+t2; 
    cout<<t3.h<<endl<<t3.m<<endl<<t3.s<<endl;
}