//template with non-type parameter

#include<iostream>
using namespace std;
 
template <class T, int n> //n is a variable only visible in template's class //only for class Test
class Test{
    T x;
    public:
    Test(){x=n; cout<<"n = "<<n<<endl;}
    T divideBy2(){return x/2;}
};
int main(){
    Test <int,10> t1;
    Test <double,20> t2;
    cout<<t1.divideBy2()<<" "<<t2.divideBy2()<<endl;
}

