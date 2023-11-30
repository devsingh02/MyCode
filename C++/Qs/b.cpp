#include <iostream>
#include <math.h>
using namespace std;

class Euclidean{
    public:
    float x,y;
    Euclidean(){
        x=0,y=0;
    }
    Euclidean(float X,float Y){
        x=X,y=Y;
    }
};

void input(Euclidean obj){
    float a,b;
    cout<<"Enter co-ordinates  : "<<endl;
    cin>>a>>b;
    obj.x=a,obj.y=b;    
}

int main(){
    Euclidean obj1,obj2;
    input(obj1); input(obj2);
    cout<<obj1.x;
    // display(obj1);
}
 
// void calculate(){
//     float D;
//     D=sqrt(pow((obj1.x-obj2.x),2)+pow((obj1.y-obj2.y),2)); //((x1-x2)^2+(y1-y2^2))^0.5
//     cout<<"The Euclidean distance between these two objects = "<<D<<endl;

// }

// void display(){
//     cout<<"X and Y co-ordinates of 1st object are : "<<"("<<obj1.x<<","<<obj1.y<<")"<<endl;
// }
