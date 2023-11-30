#include <iostream>
#include <math.h>
using namespace std;

class Euclidean{
    public:
    float x,y;
    Euclidean(float X,float Y){
        x=X;
        y=Y;
    }
};

int main(){
    float a,b;
    cout<<"Enter X and Y co-ordinates for 1st object : "<<endl;
    cin>>a>>b;
    Euclidean obj1(a,b);
    cout<<"Enter X and Y co-ordinates for 2nd object : "<<endl;
    cin>>a>>b;
    Euclidean obj2(a,b);
    //display
    cout<<"X and Y co-ordinates of 1st object are : "<<"("<<obj1.x<<","<<obj1.y<<")"<<endl;
    cout<<"X and Y co-ordinates of 2nd object are : "<<"("<<obj2.x<<","<<obj2.y<<")"<<endl;
    //distance
    float D;
    D=sqrt(pow((obj1.x-obj2.x),2)+pow((obj1.y-obj2.y),2)); //((x1-x2)^2+(y1-y2^2))^0.5
    cout<<"The Euclidean distance between these two objects = "<<D<<endl;
}