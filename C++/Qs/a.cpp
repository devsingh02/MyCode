#include<iostream>
#include<math.h>
using namespace std;



class point{
    public:
    int a,b;
    point(){
        a=0;b=0;
    }
    point(int X,int Y){
        a=X;
        b=Y;
}

void display(){
    cout<<"the coordinates of your points is "<<a<<" and "<<b<<endl;
}

friend void distance(point o1,point o2);
};

void distance(point o1,point o2){
    float d;
    d=(o1.a+o2.a)+(o1.b-o2.b);//bhai bas ye function apne hisab se bana le. 
    cout<<d<<endl;
};

int main(){
    point q(1,2);
    q.display();
    point w(3,4);
    w.display();
    distance(q,w);
    return 0;
}